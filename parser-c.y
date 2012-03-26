%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID TYPEOF
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN ASM ATTRIBUTE

%start translation_unit

%{
#include <stdio.h>
#include "lex.yy.c"
%}

%union {
    struct ast *a;
    char *id;
}
%type <a> declaration declaration_specifiers init_declarator_list init_declarator declarator initializer
%type <a> storage_class_specifier type_specifier type_qualifier struct_or_union_specifier struct_or_union
%type <a> enum_specifier enumerator_list enumerator direct_declarator pointer struct_declaration_list type_qualifier_list
%type <a> struct_declaration specifier_qualifier_list struct_declarator struct_declarator_list initializer_list
%type <id> IDENTIFIER TYPE_NAME
%%

primary_expression
	: IDENTIFIER
	| '{' IDENTIFIER '}' 				/* check */
	| '{' '.' IDENTIFIER '=' IDENTIFIER '}'		/* check */
	| '{' error '}'
	| CONSTANT
	| string
	| '(' expression ')'
	;
string
    : STRING_LITERAL
    | string STRING_LITERAL {  }
    | error
    ;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	| '(' type_name ')' '{' '}'
	| '(' type_name ')' '{' expression '}'

	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	| compound_statement
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers  ';' 
	| declaration_specifiers  init_declarator_list  ';' 	{ $$ = new_ast(NODE_DECLARATION, $1, $2); parse_declaration($$); }
	| declaration_specifiers  error ';'			{ }
	;

declaration_specifiers
	: storage_class_specifier 				{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, NULL); }
	| storage_class_specifier declaration_specifiers 	{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, $2); }
	| type_specifier					{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, NULL); }
	| type_specifier declaration_specifiers 		{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, $2); }
	| type_qualifier					{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, NULL); }
	| type_qualifier declaration_specifiers 		{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, $2); }
	;

init_declarator_list
	: init_declarator					{ $$ = new_ast(NODE_INIT_DECLARATOR_LIST, $1, NULL); }
	| init_declarator_list ',' init_declarator		{ $$ = new_ast(NODE_INIT_DECLARATOR_LIST, $1, $3); }
	;

init_declarator
	: declarator						{ $$ = new_ast(NODE_INIT_DECLARATOR, $1, NULL); }
	| declarator '=' initializer				{ $$ = new_ast(NODE_INIT_DECLARATOR, $1, $3); }
	;

storage_class_specifier
	: TYPEDEF						{ $$ = new_word(TYPEDEF); }
	| EXTERN						{ $$ = new_word(EXTERN); }
	| STATIC						{ $$ = new_word(STATIC); }
	| AUTO							{ $$ = new_word(AUTO); }
	| REGISTER						{ $$ = new_word(REGISTER); }
	| attribute						{ $$ = new_word(ATTRIBUTE); }
	;

type_specifier
	: VOID		{ $$ = new_word(VOID); }
	| CHAR		{ $$ = new_word(CHAR); }
	| SHORT		{ $$ = new_word(SHORT); }
	| INT		{ $$ = new_word(INT); }
	| LONG		{ $$ = new_word(LONG); }
	| FLOAT		{ $$ = new_word(FLOAT); }
	| DOUBLE	{ $$ = new_word(DOUBLE); }
	| SIGNED	{ $$ = new_word(SIGNED); }
	| UNSIGNED	{ $$ = new_word(UNSIGNED); }
	| struct_or_union_specifier	{ $$ = new_ast(NODE_TYPE_SPECIFIER, $1, NULL); }
	| enum_specifier		{ $$ = new_ast(NODE_TYPE_SPECIFIER, $1, NULL); }
	| TYPE_NAME			{ $$ = new_id($1); }
	| TYPEOF '(' expression ')'	{ $$ = new_word(TYPEOF); }
	| TYPEOF '('declaration_specifiers ')' { $$ = new_word(TYPEOF); }
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{'  '}' maybe_attribute					{ $$ = new_struct($1, $2, NULL); }
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}' maybe_attribute		{ $$ = new_struct($1, $2, $4); }
	| struct_or_union '{'  '}' maybe_attribute						{ $$ = new_struct($1, NULL, NULL); }
	| struct_or_union '{' struct_declaration_list '}' maybe_attribute			{ $$ = new_struct($1, NULL, $3); }
	| struct_or_union IDENTIFIER maybe_attribute						{ $$ = new_struct($1, $2, NULL); }
	;

struct_or_union
	: STRUCT	{ $$ = new_word(STRUCT); }
	| UNION		{ $$ = new_word(UNION); }
	;

struct_declaration_list
	: struct_declaration				{ $$ = $1; }
	| struct_declaration_list struct_declaration	{ $$ = new_ast(NODE_STRUCT_DECLARATION_LIST, $1, $2); }
	;

struct_declaration
	: specifier_qualifier_list ';'
	| specifier_qualifier_list struct_declarator_list ';' { $$ = new_ast(NODE_STRUCT_DECLARATION, $1, $2); }
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list 	{ $$ = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, $1, $2); }
	| type_specifier				{ $$ = $1; }
	| type_qualifier specifier_qualifier_list	{ $$ = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, $1, $2); }
	| type_qualifier				{ $$ = $1; }
	;

struct_declarator_list
	: struct_declarator					{ $$ = $1; }
	| struct_declarator_list ',' struct_declarator		{ $$ = new_ast(NODE_STRUCT_DECLARATOR_LIST, $1, $3); }
	;

struct_declarator
	: declarator						{ $$ = $1; }
	| ':' constant_expression				{ }
	| declarator ':' constant_expression			{ $$ = new_ast(NODE_STRUCT_DECLARATOR, $1, NULL); }
	;

enum_specifier
	: ENUM '{' enumerator_list '}' maybe_attribute			{ $$ = new_enum(NULL, $3); }
	| ENUM IDENTIFIER '{' enumerator_list '}' maybe_attribute	{ $$ = new_enum($2, $4); }
	| ENUM IDENTIFIER maybe_attribute				{ $$ = new_enum($2, NULL); }
	;

enumerator_list
	: enumerator					{ $$ = $1; }
	| enumerator_list ',' enumerator		{ $$ = new_ast(NODE_ENUMERATOR_LIST, $1, $3); }
	
	;

enumerator
	:					{ /*for last comma*/ }
	| IDENTIFIER				{ $$ = new_id($1); }
	| IDENTIFIER '=' constant_expression	{ $$ = new_id($1); }
	;

type_qualifier
	: CONST			{ $$ = new_word(CONST); }
	| VOLATILE		{ $$ = new_word(VOLATILE); }
	;

declarator
	: pointer direct_declarator 	{ $$ = new_ast(NODE_DECLARATOR, $1, $2); }
	| direct_declarator		{ $$ = new_ast(NODE_DECLARATOR, $1, NULL); }
	;

direct_declarator
	: IDENTIFIER						{ $$ = new_id($1); }
	| '(' declarator ')'					{ $$ = $2; }
	| direct_declarator '[' constant_expression ']' 	{ $$ = $1; }
	| direct_declarator '[' ']'				{ $$ = $1; }
	| direct_declarator '(' parameter_type_list ')'		{ $$ = $1; }
	| direct_declarator '(' identifier_list ')'		{ $$ = $1; } 
	| direct_declarator '(' ')'				{ $$ = $1; }
	;

pointer
	: '*'					{ $$ = new_ast(NODE_POINTER,NULL, NULL); }
	| '*' type_qualifier_list		{ $$ = new_ast(NODE_POINTER, $2, NULL); }
	| '*' pointer				{ $$ = $2; }
	| '*' type_qualifier_list pointer	{ $$ = new_ast(NODE_POINTER, $2, $3); }
	;

type_qualifier_list
	: type_qualifier			{ $$ = $1; }
	| type_qualifier_list type_qualifier	{ $$ = new_ast(NODE_TYPE_QUALIFIER, $1, $2); }
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')' 
	;

initializer
	: assignment_expression 		{ $$ = new_ast(NODE_ASSIGNMENT_EXPRESSION, NULL, NULL); }
	| '{' initializer_list '}'		{ $$ = $2; }
	| '{' initializer_list ',' '}'		{ $$ = $2; }
	;

initializer_list
	: initializer				{ $$ = $1; }
	| initializer_list ',' initializer	{ $$ = new_ast(NODE_INITIALIZER_LIST, $1, $3); }
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	| compound_statement ';'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN  expression ';'
	| ASM maybe_type_qualifier '(' expression ')' ;
	| ASM maybe_type_qualifier '(' expression ':' asm_operands ')' ';'
	| ASM maybe_type_qualifier '(' expression ':' asm_operands ':' asm_operands ')' ';'
	| ASM maybe_type_qualifier '(' expression ':' asm_operands ':' asm_operands ':' asm_clobbers ')' ';'
	;
maybe_type_qualifier
	: {/*NULL*/}
	| type_qualifier
	;
asm_operands
	: /* empty */	{}
        | nonnull_asm_operands
	;

nonnull_asm_operands 
	: asm_operand
	| nonnull_asm_operands ',' asm_operand {  }
	;
	
asm_operand
	: STRING_LITERAL '(' expression ')'			{ }
	| '[' expression ']' STRING_LITERAL '(' expression ')' 	{ }
	;
		    		    	    
asm_clobbers
	: string			{ }
        | asm_clobbers ',' string 	{ }
	;
	
translation_unit
	: external_declaration {}
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declaration_list compound_statement
	| declaration_specifiers declarator maybe_attribute compound_statement
	| declarator  maybe_attribute declaration_list compound_statement
	| declarator maybe_attribute compound_statement
	;


maybe_attribute
	:  { }
    	| attributes 
    	;

attributes
	: attribute 
        | attributes attribute
	;
	
attribute
	: ATTRIBUTE '(' '(' attribute_list ')' ')'
        ;
        
attribute_list
	: attrib
        | attribute_list ',' attrib
	;

attrib
	:
        | any_word
	| any_word '(' IDENTIFIER ')'
        | any_word '(' IDENTIFIER ',' expression ')'
	| any_word '(' expression ')'
        ;
        
any_word
	: IDENTIFIER
    	| storage_class_specifier
    	| type_specifier
    	| type_qualifier
	;

%%


/*extern char yytext[];*/
extern int column;

int main(int argc, char *argv[]) 
{
    if (argc < 3) {
	printf("usage:%s <input file> <output file>\n", argv[0]);
/*	FILE *in, *out; 
	if ((in = fopen("test.c.preprocess", "r")) == NULL) {
	    printf("%s: can't open file: %s\n", argv[0], "test.c.preprocess");
	    return 1;
	}
	 
	if ((out = fopen("test_out.c", "w")) == NULL) {
	    printf("%s: can't open file: %s\n", argv[0], "test_out.c");
	    return 1;
	}
	yyin = in;
	yyout = out;
	addref("__builtin_va_list", TYPE_NAME);
	return (yyparse());*/
    } else {

	FILE *in, *out; 
	if ((in = fopen(argv[1], "r")) == NULL) {
	    printf("%s: can't open file: %s\n", argv[0], argv[1]);
	    return 1;
	}
	 
	if ((out = fopen(argv[2], "w")) == NULL) {
	    printf("%s: can't open file: %s\n", argv[0], argv[2]);
	    return 1;
	}
	yyin = in;
	yyout = out;
	addref("__builtin_va_list", TYPE_NAME);
	addref("mm_segment_t", TYPE_NAME);
	return (yyparse());
    }
    return 1;
}
yyerror(char *s)
{
	fflush(stdout);
	fprintf(yyout, "\n%*s\n%*s\n", column, "^", column, s);
}
