#include "afs.h"

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
	//fprintf(yyout, "#%d#", nodetype);
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

struct ast *new_struct(struct ast *struct_type,
		       char* id, 
		       struct ast *spec_list) 
{
	struct ast *a = malloc(sizeof(struct ast));
	if (!a) {
		yyerror("out of memory");
		exit(0);
	}
	a->nodetype = NODE_STRUCT;
	if (id != NULL)
		a->l = new_id(id);
	else 
		a->l = NULL;
	a->r = NULL;
    /* add to symtable */
	return a;
}

struct ast *new_enum(char *id, 
		     struct ast * enum_list) 
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
struct ast* find_token(struct ast *node, 
		       int nodetype) 
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
void print_tree(struct ast *a) 
{
	if (a == NULL)
		return;
	printf("nodetype:%d\n", a->nodetype);
	if (a->nodetype == NODE_ID) {
		if (((struct term_id *) a)->name != NULL)
			printf("id:%s\n",((struct term_id *) a)->name);
	} else if (a->nodetype == NODE_FLOW) {
		struct flow *tmp = (struct flow *) a; 
		print_tree(tmp->expr);
		print_tree(tmp->stmt1);
		print_tree(tmp->stmt2);
	}
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
struct ast *new_flow(int nodetype, 
		     struct ast *expr, 
		     struct ast *stmt1,
		     struct ast *stmt2) 
{
	struct flow *a = malloc(sizeof(struct flow));
	if (!a) {
		yyerror("out of memory");
		exit(0);
	}
       a->nodetype = NODE_FLOW;
       a->l = NULL;
       a->r = NULL;
       a->flowtype = nodetype;
       a->expr = expr;
       a->stmt1 = stmt1;
       a->stmt2 = stmt2;
       return ((struct ast*) a);
}
struct ast *new_for(struct ast *init_expr, 
		    struct ast *cond_expr, 
		    struct ast *end_expr, 
		    struct ast *stmt) 
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
struct ast *new_asm(struct ast *type_qual, 
		    struct ast *expr, 
		    struct ast *asm_op1, 
		    struct ast *asm_op2, 
		    struct ast *asm_cl) 
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
struct ast *new_asm_operand(struct ast *begin_expr, 
			    struct ast *str, 
			    struct ast *end_expr) 
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
struct ast * new_func(	struct ast *decl_specs, 
			struct ast *declarator, 
			struct ast *attribute, 
			struct ast *decl_list, 
			struct ast *func_body) 
{
	struct func *a = malloc(sizeof(struct func));
	if (!a) {
		yyerror("out of memory");
		exit(0);
	}
	a->nodetype = NODE_FUNC;
	a->l = NULL;
	a->r = func_body;
	
	a->decl_specs = decl_specs; 
	a->declarator = declarator; 
	a->attribute = attribute;
	a->decl_list = decl_list;
	a->func_body = func_body;
	return ((struct ast *) (a));
}
struct ast *new_attribute(struct ast *any_word, 
			  struct ast *id, 
			  struct ast *expr) 
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

struct func * find_func(struct ast *node, 
			char *name) 
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

struct ast *find_cdev_init (struct ast *node) 
{
	struct ast * a;
	if (node == NULL) {
		return NULL;
	}
	if (node->nodetype == NODE_POSTFIX_EXPRESSION) {
		a = (struct ast *) node;
		struct term_id *id = (struct term_id*) find_id(a->l);
		if (id != NULL && strcmp(id->name, "cdev_init") == 0) {
			return a;
		}
	}
	a  = find_cdev_init(node->l);
	if (a == NULL)
		a = find_cdev_init(node->r);
	return a;
}

struct ast *find_register_chrdev(struct ast *node) 
{
	struct ast * a;
	if (node == NULL) {
		return NULL;
	}
	if (node->nodetype == NODE_POSTFIX_EXPRESSION) {
		a = (struct ast *) node;
		struct term_id *id = (struct term_id*) find_id(a->l);
		if (id != NULL && strcmp(id->name, "register_chrdev") == 0) {
			return a;
		}
	}
	a  = find_register_chrdev(node->l);
	if (a == NULL)
		a = find_register_chrdev(node->r);
	return a;
}


char * find_fops_name(struct ast *func_body)
{
	struct ast *cdev_init = find_cdev_init(func_body);
	
	if (cdev_init == NULL) {
		cdev_init = find_register_chrdev(func_body);
	}
	if (cdev_init == NULL) {
		return fops_name;
	}
	
	struct ast *arg_expr_list = find_token(cdev_init, NODE_ARGUMENT_EXPRESSION_LIST);
	if (arg_expr_list == NULL)
		return NULL;
	struct term_id *fops_id = (struct term_id *)find_id(arg_expr_list->r);
	if (fops_id == NULL)
		return NULL;
	return fops_id->name;
}

struct ast *find_fops_init(struct ast *node, char *fops_name) 
{
	struct ast * a;
	if (node == NULL) {
		return NULL;
	}
	if (node->nodetype == NODE_DECLARATION) {
		a = (struct ast *) node;
		struct term_id *id = (struct term_id*) find_id(a->r);
		if (id != NULL && strcmp(id->name, fops_name) == 0) {
			return a;
		}
	}
	
	a  = find_fops_init(node->l, fops_name);
	if (a == NULL)
		a = find_fops_init(node->r, fops_name);
	return a;
}

void  init_fops_name_list(struct ast *node) 
{
	struct ast * a;
	if (node == NULL) {
		return;
	}
	if (node->nodetype == NODE_ASSIGNMENT_EXPRESSION) {
		a = (struct ast *) node;
		struct term_id *id = (struct term_id*) find_id(a->r);
		if (id != NULL) {
			struct string_list *node = malloc(sizeof(struct string_list));
			node->str = id->name;
			node->next = NULL;
			if (fops_name_list == NULL) {
				fops_name_list = node;
			} else {
				struct string_list *tmp = fops_name_list;
				while(tmp->next) {
					tmp = tmp->next;
				}
				tmp->next = node;
			}
		}
	}
	init_fops_name_list(node->l);
	init_fops_name_list(node->r);
}

int init_fops_list(struct ast *fops_struct) 
{
	struct fops_node *fops_head;
	init_fops_name_list(fops_struct);
	struct string_list *tmp = fops_name_list;
	if (fops_name_list == NULL) {
		printf("\nerr: fops name list is null!");
		return 1;
	}
	while (tmp) {
		struct fops_node *node = malloc(sizeof(struct fops_node));
		node->name = tmp->str;
		node->func = find_func(root, node->name);
		if (node->func == NULL) { 
			fops_name_list = NULL;
			printf("\nerr: can't find fops function:%s!", 
			       tmp->str);
			return 1;
		}
		node->next = NULL;
		if (fops_list == NULL) {
				fops_list = node;
			} else {
				struct fops_node *tmp_node = fops_list;
				while(tmp_node->next) {
					tmp_node = tmp_node->next;
				}
				tmp_node->next = node;
			}
		tmp = tmp->next;
	}
	return 0;
}
int func_body_to_afs_struct(struct ast *node, struct ast *afs_func) 
{
	if (node == NULL) {
		return 0;	       
	}
	if (node->nodetype == NODE_FLOW) {
		struct flow *fl = (struct flow *) node;
		func_body_to_afs_struct(fl->stmt1, afs_func); 
		func_body_to_afs_struct(fl->stmt2, afs_func); 
		return 0;
	} else if (node->nodetype == NODE_POSTFIX_EXPRESSION) {
		printf("\n::::::\n");
		printf("\nLEFT:\n");
		struct term_id * id = (struct term_id *) find_id(node->l);
		if (id && 
		    (strcmp(id->name, "down") == 0 ||
		     strcmp(id->name, "down_interruptible") == 0 ||
		     strcmp(id->name, "down_killable") == 0 ||		    
		     strcmp(id->name, "up") == 0)) {
			struct term_id * sem_id = 
				(struct term_id *) find_id(node->r);
			if (!sem_id) {
				printf("\nerr: can't find semaphore name");
				return 1;
			}
			afs_add_semaphore(afs_func, id->name, sem_id->name);
		} else if (id && 
			   (strcmp(id->name, "_spin_lock") == 0 ||
			    strcmp(id->name, "_spin_lock_irqsave") == 0 ||
			    strcmp(id->name, "_spin_lock_irq") == 0 ||
			    strcmp(id->name, "_spin_lock_bh") == 0 ||
			    strcmp(id->name, "_spin_unlock") == 0 ||
			    strcmp(id->name, "_spin_unlock_irqrestore") == 0 ||
			    strcmp(id->name, "_spin_unlock_irq") == 0 ||
			    strcmp(id->name, "_spin_unlock_bh") == 0)) {
			struct term_id * spin_id = 
				(struct term_id *) find_id(node->r);
			if (!spin_id) {
				printf("\nerr: can't find spinlock name");
				return 1;
			}
			afs_add_spinlock(afs_func, id->name, spin_id->name);
		} else if (id && 
			   (strcmp(id->name, "mutex_lock") == 0 ||
			    strcmp(id->name, "mutex_lock_interruptible") == 0 ||
			    strcmp(id->name, "mutex_lock_killable") == 0 || 
			    strcmp(id->name, "mutex_unlock") == 0)) {
			struct term_id * mutex_id = 
				(struct term_id *) find_id(node->r);
			if (!mutex_id) {
				printf("\nerr: can't find mutex name");
				return 1;
			}
			afs_add_mutex(afs_func, id->name, mutex_id->name);
		}
	} else {
		
	} 
 	
	func_body_to_afs_struct(node->l, afs_func); 
	func_body_to_afs_struct(node->r, afs_func); 

}

int func_body_to_afs (struct ast *node)
{
	if (node == NULL) {
		return;
	}
	if (node->nodetype == NODE_ID) {
		struct term_id *id = (struct term_id *) node;
		if (strcmp(id->name, "down") == 0 ||
		    strcmp(id->name, "down_interruptible") == 0 ||
		    strcmp(id->name, "down_killable") == 0) {
			fprintf(afs_file, "write(...);");
		} else if (strcmp(id->name, "up") == 0) {
			fprintf(afs_file, "read(...);");
		} else if (strcmp(id->name, "_spin_lock") == 0 ||
			   strcmp(id->name, "_spin_lock_irqsave") == 0 ||
			   strcmp(id->name, "_spin_lock_irq") == 0 ||
			   strcmp(id->name, "_spin_lock_bh") == 0) {
			fprintf(afs_file, 
				"LOOP(ALT(write_lock(...) -> break));");
			
		} else if (strcmp(id->name, "_spin_unlock") == 0 ||
			   strcmp(id->name, "_spin_unlock_irqrestore") == 0 ||
			   strcmp(id->name, "_spin_unlock_irq") == 0 ||
			   strcmp(id->name, "_spin_unlock_bh") == 0) {
			fprintf(afs_file, "read_lock(...);");
			
		} else if (strcmp(id->name, "mutex_lock") == 0 ||
			   strcmp(id->name, 
				  "mutex_lock_interruptible") == 0 ||
			   strcmp(id->name, 
				  "mutex_lock_killable") == 0
			   ) {
			fprintf(afs_file, "write(...);");	
		} else if (strcmp(id->name, "mutex_unlock") == 0) {
			fprintf(afs_file, "read(...);");	
		} else {
		       	struct semaphore_list *sp = sema_list;
			while (sp) {
				if (strcmp(id->name, sp->name) == 0)
					break;
				sp = sp->next;
			}
			if (sp) {
				fprintf(afs_file, "%s, %d); ", sp->name, sp->count);
			}
		}
	} else if (node->nodetype == NODE_FLOW) {
		struct flow *fl = (struct flow *) node;
		if (fl->flowtype == WHILE) {
			fprintf(afs_file, "LOOP(");			
		}
		fprintf(afs_file, "ALT(");
		/*print_tree(fl->expr);*/
		if (fl->expr->nodetype == NODE_ID &&
		    fl->expr->l == NULL &&
		    fl->expr->r == NULL) {
			struct term_id *id = (struct term_id *) fl->expr;
			printf("name:%s\n", id->name);
			if (strlen(id->name) > 0 && isdigit(id->name[0])) {
				int num = atoi(id->name);
				if (num == 0) {
					fprintf(afs_file, "ff");
				} else {
					fprintf(afs_file, "tt");
				}
			} else {
				fprintf(afs_file, "b");
			}
		} else {
			fprintf(afs_file, "b");
		}
		
		fprintf(afs_file, " -> ");
		fprintf(afs_file, "SEQ(");
		func_body_to_afs(fl->stmt1);
		fprintf(afs_file, ")");
		if (fl->flowtype == IF) {
			fprintf(afs_file, "; ");
			fprintf(afs_file, "SEQ(");
			func_body_to_afs(fl->stmt2);
			fprintf(afs_file, ")");
		}
		fprintf(afs_file, "))");
	}
	
	func_body_to_afs(node->l);
	func_body_to_afs(node->r);
	return 0;
}

int fops_to_afs() 
{
	fprintf(afs_file, "NET\n");
	struct semaphore_list *sp = sema_list;
	while (sp) {
		fprintf(afs_file, 
			"\tCHAN %s :: ALL(%d) : ALL(%d)", 
			sp->name, 
			sp->count,
			sp->count);
		if (sp->next)
			fprintf(afs_file, ";\n");
		else
			fprintf(afs_file, "\n");
			
		sp = sp->next;
	}

	fprintf(afs_file, "BEGIN\n");
	struct fops_node *p = fops_list;
	while (p) {
		fprintf(afs_file, "\tFUN %s :: ", p->name);
		printf("FUN NAME: %s\n", p->name);
		func_body_to_afs_struct(p->func->func_body, NULL);
		//func_body_to_afs(p->func->func_body);		
		//print_tree(p->func->func_body);
		if (p->next)
			fprintf(afs_file, ";");
		fprintf(afs_file, "\n");
		p = p->next;
	}
	fprintf(afs_file, "END\n");
	return 0;
}

void find_semaphores_init(struct ast *node)
{
	struct ast * a;
	if (node == NULL) {
		return;
	}
	a = (struct ast *) node;
	struct term_id *id = (struct term_id*) find_id(a->l);
	if (id != NULL && 
	    id->nodetype == NODE_ID && 
	    strcmp(id->name, "sema_init") == 0) {
		struct semaphore_list *elem = malloc(sizeof(struct semaphore_list));
		elem->name = ((struct term_id *)a->r->l->l)->name;
		elem->count = atoi(((struct term_id *)a->r->r)->name);
			
		printf("node:%s\n",((struct term_id *)a->r->l->l)->name);			
		printf("node:%s\n",((struct term_id *)a->r->r)->name);

		if (sema_list == NULL) {
			sema_list = elem;
			elem->next = NULL;	
		} else {
			elem->next = sema_list;
			sema_list = elem;
		}
		return;
	}
	
	find_semaphores_init(node->l);
	find_semaphores_init(node->r);
	return;
}
int parse_to_afs () 
{
	/*print_tree(root);*/
	char * init_func_name = find_init_name();
	if (init_func_name == NULL) {
		printf("\nerr: can't find name of init function!");
		return 1;
	}
	struct func *func_init = find_func(root, init_func_name);
	if (func_init == NULL) {
		printf("\nerr: can't find init function!");
		return 1;
	}
	//print_tree(root);
	char *fn = find_fops_name(func_init->func_body);

	if (fn == NULL) {
		printf("\nerr: can't find fops struct name!");
		return 1;
	
	}
	
	struct ast *fops_struct = find_fops_init(root, fn);
	if (fops_struct == NULL) {
		printf("\nerr: can't find fops struct init!");
		return 1;
	}
	//print_tree(fops_struct);
	if (init_fops_list(fops_struct)) {
		printf("\nerr: can't find fops function!");
		return 1;
	}
	struct fops_node *tmp = fops_list;
	/* while(tmp) { */
	/* 	printf("------%s------\n",tmp->name); */
	/* 	print_tree(tmp->func->func_body); */
	/* 	tmp = tmp->next; */
	/* }; */

	find_semaphores_init(root);	
	fops_to_afs();
	
	return 0;
	/*print_tree(root);*/
}
int pp_find_fops_name() 
{
	char buf[BUF_SIZE];
	char *w = "struct file_operations ";
	while (fgets(buf,BUF_SIZE, orig_file) != NULL) {
		char * tmp = NULL;
		if ((tmp = strstr(buf, w)) != NULL) {
			if (fops_name == NULL)
				fops_name = malloc(BUF_SIZE * sizeof(char));
	
			tmp = tmp + strlen(w);
			int i = 0;
			while (tmp[i] != ' ' && 
			       tmp[i] != '\t' &&
			       tmp[i] != '\n' &&
			       tmp[i] != '\0' &&
			       i < BUF_SIZE) 
			{
				fops_name[i] = tmp[i];
				i++;
			}
			fops_name[++i] = '\0';
		}
	}
	printf("\nfops name = %s", fops_name);
	fclose(orig_file);
}
