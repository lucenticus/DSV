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
#include "ansi-c.tab.h"

#define ID_VARIABLE 	(1)
#define ID_TYPE 	(2)
#define ID_STRUCT 	(3)

void count();

#define NHASH (9997)

struct ast {
    int nodetype;
    struct ast *l;
    struct ast *r;
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

struct symbol symtab[NHASH];

struct symbol *lookup(char*);
void addref(char*, int);

char *prev_yytext;

%}
%%
"#".*\n			{ }
"/*"			{ comment(); }
"__asm__"[ \t\n]*"(".*")"	{ }
"__asm__"		{ }
"__extension__"		{ }
"__inline__"		{ }
"__typeof__"		{ }
"__attribute__"[ \t]*"((".*"))"	{}
"__restrict"		{ }
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
"union"			{ count(); return(UNION); }
"unsigned"		{ count(); return(UNSIGNED); }
"void"			{ count(); return(VOID); }
"volatile"		{ count(); return(VOLATILE); }
"while"			{ count(); return(WHILE); }

{L}({L}|{D})*		{ 
			    if (strcmp(prev_yytext, "struct")) { 
				count(); 
				return(check_type());
			    }
			    else {
			    	count(); 
				return (IDENTIFIER);
			    }
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
	if (yytext[0] != '\n' && yytext[0] != ' ' && yytext[0] != '\t' && yytext[0] != '\f' && yytext[0] != '\v')
	prev_yytext = strdup(yytext);
}


int check_type()
{
    struct symbol *sp = lookup(yytext);
    if (sp->reflist && sp->reflist->type == ID_TYPE) {
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
