
comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != EOF)
		putchar(c);

	if ((c1 = input()) != '/' && c != EOF)
	{
		unput(c1);
		goto loop;
	}

	if (c != EOF)
		putchar(c1);
}

int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;
	ECHO;
}


int check_type()
{
    struct symbol *sp = lookup(yytext);
    if (sp->reflist && sp->reflist->type == TYPE_NAME) {
	return(TYPE_NAME);
    }
    return(IDENTIFIER);
}

static unsigned symhash(char *sym) 
{
    unsigned int hash = 0;
    unsigned c;
    while (c = *sym++) hash = hash * 9 ^ c;
    return hash;
}

struct symbol* lookup(char *sym) 
{
    struct symbol *sp = &symtab[symhash(sym)%NHASH];
    int scount = NHASH;
    
    while (--scount > 0) {
	if (sp->name && !strcmp(sp->name, sym)) 
	    return sp;
	if (!sp->name) {
	    sp->name = strdup(sym);
	    sp->reflist = 0;
	    return sp;
	}
	if (++sp >= symtab + NHASH)
	    sp = symtab;
    }
    fputs("symbol table overflow\n", stderr);
    abort();
}

void addref(char *word, int type)
{
    /*printf("%s:%d\n", word, type);*/
    struct ref *r;
    struct symbol *sp = lookup(word);
    if (sp->reflist) 
	return;
    r = malloc(sizeof(struct ref));
    if (!r) {
	fputs("out of space\n",stderr);
	abort();
    }
    r->next = sp->reflist;
    r->type = type;
    sp->reflist = r;
}
struct ast * new_ast(int nodetype, struct ast *l, struct ast *r) 
{
    struct ast *a = malloc(sizeof(struct ast));
    
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = nodetype;
    a->l = l;
    a->r = r;
    return a;
}

struct ast *new_id(char *id) 
{
    struct term_id *a = malloc(sizeof(struct term_id));
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = NODE_ID;
    a->name = strdup(id);
    /* add to symtable */
    a->l = NULL;
    a->r = NULL;
    return ((struct ast *) a);
}
struct ast *new_word(int word) 
{
    struct ast *a = malloc(sizeof(struct ast));
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = word;
    a->l = NULL;
    a->r = NULL;
    /* add to symtable */
    return a;
}
struct ast *new_struct(struct ast *struct_type, char* id, struct ast *spec_list) 
{
    struct ast *a = malloc(sizeof(struct ast));
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = NODE_STRUCT;
    a->l = NULL;
    a->r = NULL;
    /* add to symtable */
    return a;
}
struct ast *new_enum(char *id, struct ast * enum_list) 
{
    struct ast *a = malloc(sizeof(struct ast));
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = NODE_ENUM;
    a->l = NULL;
    a->r = NULL;
    /* add to symtable */
    return a;
}

void parse_declaration(struct ast* node) 
{
    /*print_tree(node);*/
    struct ast *tok;
    if (node->l != NULL) {
	tok = find_token(node->l, TYPEDEF);
    }
    if (tok != NULL && node->r != NULL) {
        struct term_id *a = (struct term_id *) find_id(node->r);
	if (a != NULL) {
	    /*printf("id:%s\n", a->name);*/
	    addref(a->name, TYPE_NAME);
	}
    }
}
struct ast* find_token(struct ast *node, int nodetype) 
{
    struct ast * a;
    if (node == NULL || node->nodetype == nodetype)
	return node;
    /*printf("test: %d\n", node->nodetype);*/
    a  = find_token(node->l, nodetype);
    if (a == NULL)
	a = find_token(node->r, nodetype);
    return a;
}
struct ast *find_id(struct ast *node) 
{
    struct ast * a;
    if (node == NULL || node->nodetype == NODE_ID)
	return node;
    a = find_id(node->l);
    if (a == NULL)
	a = find_id(node->r);
    return a;
}
void print_tree (struct ast *a) 
{
    if (a == NULL)
	return;
    printf("nodetype:%d\n", a->nodetype);
    print_tree(a->l);
    print_tree(a->r);
}


struct ast *new_string(char *str) 
{
    struct ast *a = malloc(sizeof(struct ast));
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = NODE_STRING;
    a->l = NULL;
    a->r = NULL;
    /* add to symtable */
    return a;
}
struct ast *new_flow(int nodetype, struct ast * expr, struct ast* stmt1, struct ast * stmt2) 
{
    struct ast *a = malloc(sizeof(struct ast));
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = NODE_FLOW;
    a->l = NULL;
    a->r = NULL;
    /* add to symtable */
    return a;
}
struct ast *new_for(struct ast * init_expr, 
		    struct ast * cond_expr, 
		    struct ast * end_expr, 
		    struct ast * stmt) 
{
    struct ast *a = malloc(sizeof(struct ast));
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = NODE_FOR;
    a->l = NULL;
    a->r = NULL;
    /* add to symtable */
    return a;
}
struct ast *new_asm(struct ast * type_qual, 
		    struct ast * expr, 
		    struct ast * asm_op1, 
		    struct ast * asm_op2, 
		    struct ast * asm_cl) 
{
    struct ast *a = malloc(sizeof(struct ast));
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = NODE_ASM;
    a->l = NULL;
    a->r = NULL;
    /* add to symtable */
    return a;
}
struct ast *new_asm_operand(struct ast * begin_expr, 
			    struct ast * str, 
			    struct ast * end_expr) 
{
    struct ast *a = malloc(sizeof(struct ast));
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = NODE_ASM_OPERAND;
    a->l = NULL;
    a->r = NULL;
    /* add to symtable */
    return a;
}
struct ast * new_func(	struct ast * decl_specs, 
			struct ast * declarator, 
			struct ast * attribute, 
			struct ast * decl_list, 
			struct ast * func_body) 
{
    struct func *a = malloc(sizeof(struct func));
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = NODE_FUNC;
    a->l = NULL;
    a->r = NULL;
    
    a->decl_specs = decl_specs; 
    a->declarator = declarator; 
    a->attribute = attribute;
    a->decl_list = decl_list;
    a->func_body = func_body;
    return ((struct ast *) (a));
}
struct ast *new_attribute(	struct ast * any_word, 
				struct ast * id, 
				struct ast * expr) 
{
    struct ast *a = malloc(sizeof(struct ast));
    if (!a) {
	yyerror("out of memory");
	exit(0);
    }
    a->nodetype = NODE_ATTRIBUTE;
    a->l = NULL;
    a->r = NULL;
    /* add to symtable */
    return a;    
}

struct func * find_func(struct ast *node, char *name) 
{
    struct func * a;
    if (node == NULL) {
	return NULL;
    }
    if (node->nodetype == NODE_FUNC) {
	a = (struct func *) node;
	struct term_id *id = (struct term_id*) find_id(a->declarator);
	
	if (id != NULL && strstr(id->name, name) != NULL) {
	    return a;
	}
    }
    a  = find_func(node->l, name);
    if (a == NULL)
	a = find_func(node->r, name);
    return a;
}
char * find_init_name() 
{
    struct term_id *init_id;
    struct func *f = find_func(root, "__init");
    if (f == NULL)
	return NULL;
    init_id = (struct term_id *) find_id(f->func_body);
    if (init_id == NULL)
	return NULL;
    return init_id->name;
}

char * find_fops_name(struct ast *func_body)
{
    print_tree(func_body);
    return NULL;
}

void parse_to_afs () 
{
    /*print_tree(root);*/
    char * init_func_name = find_init_name();
    if (init_func_name == NULL) {
	printf("\nerr: can't find name of init function!");
	return;
    }
	
    struct func *func_init = find_func(root, init_func_name);
    if (func_init == NULL) {
	printf("\nerr: can't find init function!");
	return;
    }
    char *fops_name = find_fops_name(func_init->func_body);
}