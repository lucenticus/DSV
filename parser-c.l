D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*
%option noyywrap yylineno
%x IFILE

%{
#include <stdio.h>
#include "parser-c.tab.h"


void count();

struct ast {
    int nodetype;
    struct ast *l;
    struct ast *r;
};

struct term_id {
    int nodetype;
    struct ast *l;
    struct ast *r;
    char *name;
};

struct term_word {
    int nodetype;
    struct ast *l;
    struct ast *r;
    int wordtype;
};
struct term_num {
    int nodetype;
    struct ast *l;
    struct ast *r;
    int num;
};

struct term_op {
    int nodetype;
    struct ast *l;
    struct ast *r;
    int type;
};

struct symbol {
    char *name;
    struct ref *reflist;
    struct ast *func;
};

struct ref {
    struct ref *next;
    int type;
};

#define NHASH (9997)
struct symbol symtab[NHASH];

struct symbol *lookup(char*);
void addref(char*, int);

struct ast *new_ast(int nodetype, struct ast *l, struct ast *r);
struct ast *new_id(char *id);
struct ast *new_word(int word);
struct ast *new_struct(struct ast *struct_type, char *id, struct ast *spec_list);
struct ast *new_enum(char *id, struct ast * enum_list);

void parse_declaration(struct ast*); 
void print_tree (struct ast *a);
struct ast *find_id(struct ast *node);
struct ast *find_token(struct ast *a, int nodetype);

enum NODETYPE {
    NODE_DECLARATION,
    NODE_NUMBER,
    NODE_ID,
    NODE_WORD,
    NODE_RELOP,
    NODE_STRUCT,
    NODE_ENUM,
    NODE_DECLARATOR,
    NODE_DECLARATION_SPECIFIERS,
    NODE_INIT_DECLARATOR_LIST,
    NODE_INIT_DECLARATOR,
    NODE_TYPE_SPECIFIER,
    NODE_STRUCT_DECLARATION_LIST,
    NODE_STRUCT_DECLARATION,
    NODE_SPECIFIER_QUALIFIER_LIST,
    NODE_STRUCT_DECLARATOR_LIST,
    NODE_STRUCT_DECLARATOR,
    NODE_POINTER,
    NODE_TYPE_QUALIFIER,
    NODE_ASSIGNMENT_EXPRESSION,
    NODE_INITIALIZER_LIST,
    NODE_ENUMERATOR_LIST
};
%}
%%
"#".*\n			{ }
"/*"			{ comment(); }
"__asm__"		{ count(); return(ASM); }
"__asm"			{ count(); return(ASM); }
"asm"			{ count(); return(ASM); }
"__extension__"		{ }
"__inline__"		{ }
"inline"		{ count(); }
"notrace"		{ }
"__attribute__"		{ count(); return (ATTRIBUTE); }
"__restrict"		{ }
"_Bool"			{ count(); return(INT); }
"auto"			{ count(); return(AUTO); }
"break"			{ count(); return(BREAK); }
"case"			{ count(); return(CASE); }
"char"			{ count(); return(CHAR); }
"const"			{ count(); return(CONST); }
"__const"		{ count(); return(CONST); }
"continue"		{ count(); return(CONTINUE); }
"default"		{ count(); return(DEFAULT); }
"do"			{ count(); return(DO); }
"double"		{ count(); return(DOUBLE); }
"else"			{ count(); return(ELSE); }
"enum"			{ count(); return(ENUM); }
"extern"		{ count(); return(EXTERN); }
"float"			{ count(); return(FLOAT); }
"for"			{ count(); return(FOR); }
"goto"			{ count(); return(GOTO); }
"if"			{ count(); return(IF); }
"int"			{ count(); return(INT); }
"long"			{ count(); return(LONG); }
"register"		{ count(); return(REGISTER); }
"return"		{ count(); return(RETURN); }
"short"			{ count(); return(SHORT); }
"signed"		{ count(); return(SIGNED); }
"__signed__"		{ count(); return(SIGNED); }
"sizeof"		{ count(); return(SIZEOF); }
"static"		{ count(); return(STATIC); }
"struct"		{ count(); return(STRUCT); }
"switch"		{ count(); return(SWITCH); }
"typedef"		{ count(); return(TYPEDEF); }
"typeof"		{ count(); return(TYPEOF); }
"__typeof"		{ count(); return(TYPEOF); }
"__typeof__"		{ count(); return(TYPEOF); }
"union"			{ count(); return(UNION); }
"unsigned"		{ count(); return(UNSIGNED); }
"void"			{ count(); return(VOID); }
"volatile"		{ count(); return(VOLATILE); }
"__volatile__"		{ count(); return(VOLATILE); }
"while"			{ count(); return(WHILE); }

{L}({L}|{D})*		{
				yylval.id = strdup(yytext);
				count(); 
				return(check_type());
			}

0[xX]{H}+{IS}?		{ count(); return(CONSTANT); }
0{D}+{IS}?		{ count(); return(CONSTANT); }
{D}+{IS}?		{ count(); return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ count(); return(CONSTANT); }

{D}+{E}{FS}?		{ count(); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count(); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ count(); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ count(); return(STRING_LITERAL); }

"..."			{ count(); return(ELLIPSIS); }
">>="			{ count(); return(RIGHT_ASSIGN); }
"<<="			{ count(); return(LEFT_ASSIGN); }
"+="			{ count(); return(ADD_ASSIGN); }
"-="			{ count(); return(SUB_ASSIGN); }
"*="			{ count(); return(MUL_ASSIGN); }
"/="			{ count(); return(DIV_ASSIGN); }
"%="			{ count(); return(MOD_ASSIGN); }
"&="			{ count(); return(AND_ASSIGN); }
"^="			{ count(); return(XOR_ASSIGN); }
"|="			{ count(); return(OR_ASSIGN); }
">>"			{ count(); return(RIGHT_OP); }
"<<"			{ count(); return(LEFT_OP); }
"++"			{ count(); return(INC_OP); }
"--"			{ count(); return(DEC_OP); }
"->"			{ count(); return(PTR_OP); }
"&&"			{ count(); return(AND_OP); }
"||"			{ count(); return(OR_OP); }
"<="			{ count(); return(LE_OP); }
">="			{ count(); return(GE_OP); }
"=="			{ count(); return(EQ_OP); }
"!="			{ count(); return(NE_OP); }
";"			{ count(); return(';'); }
";;"			{ count(); return(';'); }
("{"|"<%")		{ count(); return('{'); }
("}"|"%>")		{ count(); return('}'); }
","			{ count(); return(','); }
":"			{ count(); return(':'); }
"="			{ count(); return('='); }
"("			{ count(); return('('); }
")"			{ count(); return(')'); }
("["|"<:")		{ count(); return('['); }
("]"|":>")		{ count(); return(']'); }
"."			{ count(); return('.'); }
"&"			{ count(); return('&'); }
"!"			{ count(); return('!'); }
"~"			{ count(); return('~'); }
"-"			{ count(); return('-'); }
"+"			{ count(); return('+'); }
"*"			{ count(); return('*'); }
"/"			{ count(); return('/'); }
"%"			{ count(); return('%'); }
"<"			{ count(); return('<'); }
">"			{ count(); return('>'); }
"^"			{ count(); return('^'); }
"|"			{ count(); return('|'); }
"?"			{ count(); return('?'); }

[ \t\v\n\f]		{ count (); }

.			{ /* ignore bad characters */ }

%%


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
    if (a->nodetype == TYPEDEF)
	printf("begin typedef declaration\n");
    print_tree(a->l);
    print_tree(a->r);
}