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
#include "dsv.h"
%}
%%
"#".*\n			{ }
"/*"			{ comment(); }
"__asm__"		{ count(); return(ASM); }
"__asm"			{ count(); return(ASM); }
"asm"			{ count(); return(ASM); }
"__extension__"		{ }
"__inline__"		{ count(); return(INLINE); }
"inline"		{ count(); return(INLINE); }
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

0[xX]{H}+{IS}?		{ count(); yylval.id = strdup(yytext); return(CONSTANT); }
0{D}+{IS}?		{ count(); yylval.id = strdup(yytext); return(CONSTANT); }
{D}+{IS}?		{ count(); yylval.id = strdup(yytext); return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ count(); yylval.id = strdup(yytext); return(CONSTANT); }

{D}+{E}{FS}?		{ count(); yylval.id = strdup(yytext); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count(); yylval.id = strdup(yytext); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ count(); yylval.id = strdup(yytext); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ count(); yylval.id = strdup(yytext); return(STRING_LITERAL); }

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
(";"|";;")		{ count(); yylval.tok = ';'; return(';'); }
("{"|"<%")		{ count(); yylval.tok = '{'; return('{'); }
("}"|"%>")		{ count(); yylval.tok = '}'; return('}'); }
","			{ count(); yylval.tok = ','; return(','); }
":"			{ count(); yylval.tok = ':'; return(':'); }
"="			{ count(); yylval.tok = '='; return('='); }
"("			{ count(); yylval.tok = '('; return('('); }
")"			{ count(); yylval.tok = ')'; return(')'); }
("["|"<:")		{ count(); yylval.tok = '['; return('['); }
("]"|":>")		{ count(); yylval.tok = ']'; return(']'); }
"."			{ count(); yylval.tok = '.'; return('.'); }
"&"			{ count(); yylval.tok = '&'; return('&'); }
"!"			{ count(); yylval.tok = '!'; return('!'); }
"~"			{ count(); yylval.tok = '~'; return('~'); }
"-"			{ count(); yylval.tok = '-'; return('-'); }
"+"			{ count(); yylval.tok = '+'; return('+'); }
"*"			{ count(); yylval.tok = '*'; return('*'); }
"/"			{ count(); yylval.tok = '/'; return('/'); }
"%"			{ count(); yylval.tok = '%'; return('%'); }
"<"			{ count(); yylval.tok = '<'; return('<'); }
">"			{ count(); yylval.tok = '>'; return('>'); }
"^"			{ count(); yylval.tok = '^'; return('^'); }
"|"			{ count(); yylval.tok = '|'; return('|'); }
"?"			{ count(); yylval.tok = '?'; return('?'); }

[ \t\v\n\f]		{ count (); }

.			{ /* ignore bad characters */ }

%%

#include "dsv.c"