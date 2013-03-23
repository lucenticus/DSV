%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
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
    int	  tok;
}
%type <a> declaration declaration_specifiers init_declarator_list init_declarator declarator initializer identifier_list
%type <a> storage_class_specifier type_specifier type_qualifier struct_or_union_specifier struct_or_union 
%type <a> function_specifier
%type <a> enum_specifier enumerator_list enumerator direct_declarator pointer struct_declaration_list type_qualifier_list
%type <a> struct_declaration specifier_qualifier_list struct_declarator struct_declarator_list initializer_list
%type <a> maybe_attribute attributes attribute_list attribute attrib any_word
%type <a> translation_unit external_declaration function_definition
%type <a> declaration_list statement_list statement argument_expression_list type_name
%type <a> expression assignment_expression unary_expression
%type <a> primary_expression postfix_expression cast_expression
%type <a> multiplicative_expression additive_expression shift_expression relational_expression
%type <a> equality_expression and_expression exclusive_or_expression inclusive_or_expression 
%type <a> logical_and_expression logical_or_expression conditional_expression
%type <a> abstract_declarator direct_abstract_declarator constant_expression
%type <a> parameter_type_list parameter_list parameter_declaration string
%type <a> labeled_statement compound_statement expression_statement selection_statement iteration_statement jump_statement
%type <a> maybe_type_qualifier asm_operands asm_clobbers asm_operand nonnull_asm_operands

%type <id> IDENTIFIER TYPE_NAME CONSTANT STRING_LITERAL
%type <tok> assignment_operator unary_operator



%%

abstract_declarator
	: pointer
		{ $$ = new_ast(NODE_ABSTRACT_DECLARATOR, $1, NULL); }
	| direct_abstract_declarator
		{ $$ = new_ast(NODE_ABSTRACT_DECLARATOR, $1, NULL); }
	| pointer direct_abstract_declarator
		{ $$ = new_ast(NODE_ABSTRACT_DECLARATOR, $1, $2); }
	;

additive_expression
	: multiplicative_expression
		{ $$ = $1; }
	| additive_expression '+' multiplicative_expression
		{ $$ = new_ast('*', $1, $3); }
	| additive_expression '-' multiplicative_expression
		{ $$ = new_ast('*', $1, $3); }
	;

and_expression
	: equality_expression
		{ $$ = $1; }
	| and_expression '&' equality_expression
		{ $$ = new_ast('&', $1, $3); }
	;

any_word
	: IDENTIFIER
		{ $$ = new_id($1); }
    	| storage_class_specifier
		{ $$ = new_ast(NODE_ANY_WORD, $1, NULL); }
    	| type_specifier
		{ $$ = new_ast(NODE_ANY_WORD, $1, NULL); }
    	| type_qualifier
		{ $$ = new_ast(NODE_ANY_WORD, $1, NULL); }
	;

argument_expression_list
	: assignment_expression
		{ $$ = $1; }
	| argument_expression_list ',' assignment_expression
		{ $$ = new_ast(NODE_ARGUMENT_EXPRESSION_LIST, $1, $3); }
	;

asm_clobbers
	: string
		{ $$ = $1; }
        | asm_clobbers ',' string 
		{ $$ = new_ast(NODE_ASM_CLOBBERS, $1, $3); }
	;
	
asm_operand
	: STRING_LITERAL '(' expression ')'
		{ $$ = new_asm_operand(NULL, new_string($1), $3); }
	| '[' expression ']' STRING_LITERAL '(' expression ')' 
		{ $$ = new_asm_operand($2, new_string($4), $6); }
	;

asm_operands
	: /* empty */
		{ $$ = NULL; }
        | nonnull_asm_operands 
		{ $$ = $1; }
	;

assignment_expression
	: conditional_expression
		{ $$ = $1; }
	| unary_expression assignment_operator assignment_expression
		{ $$ = new_ast(NODE_ASSIGNMENT_EXPRESSION, $1, $3); }
	;

assignment_operator
	: '='
		{ $$ = '='; }
	| MUL_ASSIGN
		{ $$ = MUL_ASSIGN; }
	| DIV_ASSIGN
		{ $$ = DIV_ASSIGN; }
	| MOD_ASSIGN
		{ $$ = MOD_ASSIGN; }
	| ADD_ASSIGN
		{ $$ = ADD_ASSIGN; }
	| SUB_ASSIGN
		{ $$ = SUB_ASSIGN; }
	| LEFT_ASSIGN
		{ $$ = LEFT_ASSIGN; }
	| RIGHT_ASSIGN
		{ $$ = RIGHT_ASSIGN; }
	| AND_ASSIGN
		{ $$ = AND_ASSIGN; }
	| XOR_ASSIGN
		{ $$ = XOR_ASSIGN; }
	| OR_ASSIGN
		{ $$ = OR_ASSIGN; }
	;

attributes
	: attribute
		{ $$ =$1; }
        | attributes attribute
		{ $$ = new_ast(NODE_ATTRIBUTES, $1, $2); }
	;
	
attribute
	: ATTRIBUTE '(' '(' attribute_list ')' ')'
		{ $$ = new_ast(NODE_ATTRIBUTE, $4, NULL); }
        ;
        
attribute_list
	: attrib
		{ $$ = $1; }
        | attribute_list ',' attrib 
		{ $$ = new_ast(NODE_ATTRIBUTE_LIST, $1, $3); }
	;

attrib
	: /*empty*/ { }
        | any_word
		{ $$ = new_attribute($1, NULL, NULL); }
	| any_word '(' IDENTIFIER ')'
		{ $$ = new_attribute($1, new_id($3), NULL); }
        | any_word '(' IDENTIFIER ',' expression ')'
		{ $$ = new_attribute($1, new_id($3), $5); }
	| any_word '(' expression ')'
		{ $$ = new_attribute($1, NULL, $3); }
        ;

cast_expression
	: unary_expression
		{ $$ = $1; }
	| '(' type_name ')' cast_expression
		{ $$ = new_ast(NODE_CAST_EXPRESSION, $2, $4); }
	| '(' type_name ')' '{' '}'
		{ $$ = new_ast(NODE_CAST_EXPRESSION, $2, NULL); }
	| '(' type_name ')' '{' expression '}'
		{ $$ = new_ast(NODE_CAST_EXPRESSION, $2, $5); }
	;

compound_statement
	: '{' '}'	
		{ $$ = NULL; }
	| '{' statement_list '}'
		{ $$ = $2; }
	| '{' declaration_list '}'
		{ $$ = $2; }
	| '{' declaration_list statement_list '}'
		{ $$ = new_ast(NODE_COMPOUND_LIST, $2, $3); }
	| compound_statement ';'
		{ $$ = $1; }
	;

conditional_expression
	: logical_or_expression	
		{ $$ = $1; }
	| logical_or_expression '?' expression ':' conditional_expression
		{ $$ = new_flow(IF, $1, $3, $5); }
	;

constant_expression
	: conditional_expression 
		{ $$ = $1; }
	;

declaration
	: declaration_specifiers ';' 
	| declaration_specifiers  init_declarator_list ';'
		{ 
			$$ = new_ast(NODE_DECLARATION, $1, $2); 
			parse_declaration($$); 
		}
	| declaration_specifiers  init_declarator_list ';'';'
		{ 
			$$ = new_ast(NODE_DECLARATION, $1, $2); 
			parse_declaration($$); 
		}
	| declaration_specifiers  error ';'
	/* | error ';'  */
	/* 	{ } */
	;

declaration_list
	: declaration
		{ $$ = $1; }
	| declaration_list declaration
		{ $$ = new_ast(NODE_DECLARATION_LIST, $1, $2); }
	;

declaration_specifiers
	: storage_class_specifier
		{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, NULL); }
	| storage_class_specifier declaration_specifiers
		{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, $2); }
	| type_specifier
		{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, NULL); }
	| type_specifier declaration_specifiers 		
		{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, $2); }
	| type_qualifier
		{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, NULL); }
	| type_qualifier declaration_specifiers
		{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, $2); }
	| function_specifier
		{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, NULL); }
	| function_specifier declaration_specifiers 		
		{ $$ = new_ast(NODE_DECLARATION_SPECIFIERS, $1, $2); } 
	;

declarator
	: pointer direct_declarator 
		{ $$ = new_ast(NODE_DECLARATOR, $1, $2); }
	| direct_declarator
		{ $$ = new_ast(NODE_DECLARATOR, $1, NULL); }
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
		{ $$ = $2; }
	| '[' ']'
		{ $$ = NULL; }
	| '[' constant_expression ']'
		{ $$ = $2; }
	| direct_abstract_declarator '[' ']'
		{ $$ = $1; }
	| direct_abstract_declarator '[' constant_expression ']'
		{ $$ = new_ast(NODE_DIRECT_ABSTRACT_DECLARATOR, $1, $3); }
	| '(' ')'
		{ $$ = NULL; }
	| '(' parameter_type_list ')'
		{ $$ = new_ast(NODE_DIRECT_ABSTRACT_DECLARATOR, $2, NULL); }	
	| direct_abstract_declarator '(' ')'
		{ $$ = $1; }
	| direct_abstract_declarator '(' parameter_type_list ')' 
		{ $$ = new_ast(NODE_DIRECT_ABSTRACT_DECLARATOR, $1, $3); }
	;

direct_declarator
	: IDENTIFIER
		{ $$ = new_id($1); }
	| error
		{ $$ = new_id(""); }
	| '(' declarator ')'
		{ $$ = $2; }
	| direct_declarator '[' constant_expression ']'
		{ $$ = $1; }
	| direct_declarator '[' ']'
		{ $$ = $1; }
	| direct_declarator '(' parameter_type_list ')'
		{ $$ = new_ast(NODE_FUNC_DECLARATOR, $1, $3); }
	| direct_declarator '(' identifier_list ')'
		{ $$ = new_ast(NODE_FUNC_DECLARATOR, $1, $3); } 
	| direct_declarator '(' ')'
		{ $$ = new_ast(NODE_FUNC_DECLARATOR, $1, NULL); }
	;

enum_specifier
	: ENUM '{' enumerator_list '}' maybe_attribute
		{ $$ = new_enum(NULL, $3); }
	| ENUM IDENTIFIER '{' enumerator_list '}' maybe_attribute
		{ $$ = new_enum($2, $4); }
	| ENUM IDENTIFIER maybe_attribute
		{ $$ = new_enum($2, NULL); }
	;

enumerator_list
	: enumerator
		{ $$ = $1; }
	| enumerator_list ',' enumerator
		{ $$ = new_ast(NODE_ENUMERATOR_LIST, $1, $3); }
	;

enumerator
	: 
		{ /*for last comma*/ }
	| IDENTIFIER
		{ $$ = new_id($1); }
	| IDENTIFIER '=' constant_expression 
		{ $$ = new_id($1); }
	;

equality_expression
	: relational_expression
		{ $$ = $1; }
	| equality_expression EQ_OP relational_expression
		{ $$ = new_ast(EQ_OP, $1, $3); }
	| equality_expression NE_OP relational_expression
		{ $$ = new_ast(NE_OP, $1, $3); }
	;

exclusive_or_expression
	: and_expression
		{ $$ = $1; }
	| exclusive_or_expression '^' and_expression
		{ $$ = new_ast('^', $1, $3); }
	;

expression
	: assignment_expression 
	{ $$ =  $1; }
	| expression ',' assignment_expression
		{ $$ = new_ast(NODE_EXPRESSION, $1, $3); }
	| compound_statement
		{ $$ = $1; }
	;

expression_statement
	: ';'
		{ $$ = NULL; }
	| expression ';'
		{ $$ = $1; }
	;

external_declaration
	: function_definition 
		{ $$ = $1; }
	| declaration
		{ $$ = $1; }
	;

function_definition
	: declaration_specifiers maybe_attribute declaration_list compound_statement
		{ $$ = new_func($1, NULL, $2, NULL, $3); }
	| declaration_specifiers declarator maybe_attribute compound_statement
		{ $$ = new_func($1, $2, $3, NULL, $4); }
	| declarator maybe_attribute declaration_list compound_statement
		{ $$ = new_func(NULL, $1, $2, $3, $4); }
	| declarator maybe_attribute compound_statement
		{ $$ = new_func(NULL, $1, $2, NULL, $3); }
	;

function_specifier 
	: INLINE 
		{ $$ = new_word(INLINE); }
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

inclusive_or_expression
	: exclusive_or_expression
		{ $$ = $1; }
	| inclusive_or_expression '|' exclusive_or_expression
		{ $$ = new_ast('|', $1, $3); }
	;

initializer
	: assignment_expression
		{ $$ = $1; }
	| '{' initializer_list '}'
		{ $$ = $2; }	
	| '{' initializer_list ',' '}'
		{ $$ = $2; }
	;

initializer_list
	: initializer
		{ $$ = $1; }
	| initializer_list ',' initializer
		{ $$ = new_ast(NODE_INITIALIZER_LIST, $1, $3); }
	;

init_declarator_list
	: init_declarator
		{ $$ = new_ast(NODE_INIT_DECLARATOR_LIST, $1, NULL); }
	| init_declarator_list ',' init_declarator
		{ $$ = new_ast(NODE_INIT_DECLARATOR_LIST, $1, $3); }
	;

init_declarator
	: declarator maybe_attribute
		{ $$ = new_ast(NODE_INIT_DECLARATOR, $1, NULL); }
	| declarator maybe_attribute '=' initializer
		{ $$ = new_ast(NODE_INIT_DECLARATOR, $1, $4); }
	;

iteration_statement
	: WHILE '(' expression ')' statement
		{ $$ = new_flow(WHILE, $3, $5, NULL); }
	| DO statement WHILE '(' expression ')' ';'
		{ $$ = new_flow(DO, $5, $2, NULL); }
	| FOR '(' expression_statement expression_statement ')' statement
		{ $$ = new_for($3, $4, NULL, $6); }
	| FOR '(' expression_statement expression_statement expression ')' statement
		{ $$ = new_for($3, $4, $5, $7); }
	;

jump_statement
	: GOTO IDENTIFIER ';'
		{ $$ = new_ast(GOTO, new_id($2), NULL); }
	| CONTINUE ';'
		{ $$ = new_word(CONTINUE); }
	| BREAK ';'
		{ $$ = new_word(BREAK); }
	| RETURN ';'
		{ $$ = new_word(RETURN); }
	| RETURN  expression ';'
		{ $$ = new_ast(RETURN, $2, NULL); }
	| ASM maybe_type_qualifier '(' expression ')' 
		{ $$ = new_asm($2, $4, NULL, NULL, NULL); }
	| ASM maybe_type_qualifier '(' expression ':' asm_operands ')' ';'
		{ $$ = new_asm($2, $4, $6, NULL, NULL); }
	| ASM maybe_type_qualifier '(' expression ':' asm_operands ':' asm_operands ')' ';'
		{ $$ = new_asm($2, $4, $6, $8, NULL); }
	| ASM maybe_type_qualifier '(' expression ':' asm_operands ':' asm_operands ':' asm_clobbers ')' ';'
		{ $$ = new_asm($2, $4, $6, $8, $10); }
	;

labeled_statement
	: IDENTIFIER ':' statement
		{ $$ = new_ast(NODE_LABELED_STATEMENT, new_id($1), $3); }
	| CASE constant_expression ':' statement
		{ $$ = new_ast(NODE_LABELED_STATEMENT, $2, $4); }
	| DEFAULT ':' statement
		{ $$ = new_ast(NODE_LABELED_STATEMENT, NULL, $3); }
	;

logical_and_expression
	: inclusive_or_expression
		{ $$ = $1; }
	| logical_and_expression AND_OP inclusive_or_expression
		{ $$ = new_ast(AND_OP, $1, $3); }
	;

logical_or_expression
	: logical_and_expression
		{ $$ = $1; }
	| logical_or_expression OR_OP logical_and_expression
		{ $$ = new_ast(OR_OP, $1, $3); }
	;

maybe_attribute
	:  /* empty */
		{ $$ = NULL}
    	| attributes 
		{ $$ = $1 }
    	;

maybe_type_qualifier
	: /* empty */
		{ $$ = NULL; }
	| type_qualifier
		{ $$ = $1; }
	;

multiplicative_expression
	: cast_expression
		{ $$ = $1; }
	| multiplicative_expression '*' cast_expression
		{ $$ = new_ast('*', $1, $3); }
	| multiplicative_expression '/' cast_expression
		{ $$ = new_ast('*', $1, $3); }
	| multiplicative_expression '%' cast_expression
		{ $$ = new_ast('*', $1, $3); }
	;

nonnull_asm_operands 
	: asm_operand
		{ $$ = $1; } 
	| nonnull_asm_operands ',' asm_operand 
		{ $$ = new_ast(NODE_NONNULL_ASM_OPERANDS, $1, $3); }
	;

parameter_declaration
	: declaration_specifiers declarator
		{ $$ = new_ast(NODE_PARAMETER_DECLARATION, $1, $2); }
	| declaration_specifiers abstract_declarator
		{ $$ = new_ast(NODE_PARAMETER_DECLARATION, $1, $2); }
	| declaration_specifiers
		{ $$ = new_ast(NODE_PARAMETER_DECLARATION, $1, NULL); }
	;

parameter_list
	: parameter_declaration 
		{ $$ = $1; }
	| parameter_list ',' parameter_declaration
		{ $$ = new_ast(NODE_PARAMETER_LIST, $1, $3); }
	;

parameter_type_list
	: parameter_list 
		{ $$ = $1; }
	| parameter_list ',' ELLIPSIS
		{ $$ = $1; }
	;

pointer
	: '*'					
		{ $$ = new_ast(NODE_POINTER,NULL, NULL); }
	| '*' type_qualifier_list		
		{ $$ = new_ast(NODE_POINTER, $2, NULL); }
	| '*' pointer				
		{ $$ = $2; }
	| '*' type_qualifier_list pointer	
		{ $$ = new_ast(NODE_POINTER, $2, $3); }
	;

postfix_expression
	: primary_expression
		{ $$ = $1; }
	| postfix_expression '[' expression ']'
		{ $$ = new_ast(NODE_POSTFIX_EXPRESSION, $1, $3); }
	| postfix_expression '(' ')'
		{ $$ = new_ast(NODE_POSTFIX_EXPRESSION, $1, NULL); }
	| postfix_expression '(' argument_expression_list ')'
		{ $$ = new_ast(NODE_POSTFIX_EXPRESSION, $1, $3); }
	| postfix_expression '.' IDENTIFIER
		{ $$ = new_ast(NODE_POSTFIX_EXPRESSION, $1, new_id($3)); }
	| postfix_expression PTR_OP IDENTIFIER
		{ $$ = new_ast(NODE_POSTFIX_EXPRESSION, $1, NULL);/*fix*/ }
	| postfix_expression INC_OP
		{ $$ = new_ast(INC_OP, NULL, $1); }
	| postfix_expression DEC_OP
		{ $$ = new_ast(DEC_OP, NULL, $1); }
	;

primary_expression
	: IDENTIFIER	
		{ $$ = new_id($1); }
	| '{' IDENTIFIER '}' 				/* check */
		{ $$ = new_id($2); }
	| '{' '.' IDENTIFIER '=' IDENTIFIER '}'		/* check */
		{ $$ = new_id($3); }
	| '{' error '}' 
		{ $$ = NULL; }
	| CONSTANT
		{ $$ = new_id($1); }
	| string
		{ $$ = $1;}
	| '(' expression ')'
		{ $$ = $2; }
	;

relational_expression
	: shift_expression
		{ $$ = $1; }
	| relational_expression '<' shift_expression
		{ $$ = new_ast('<', $1, $3); }
	| relational_expression '>' shift_expression
		{ $$ = new_ast('>', $1, $3); }
	| relational_expression LE_OP shift_expression
		{ $$ = new_ast(LE_OP, $1, $3); }
	| relational_expression GE_OP shift_expression
		{ $$ = new_ast(GE_OP, $1, $3); }
	;

selection_statement
	: IF '(' expression ')' statement
		{ $$ = new_flow(IF, $3, $5, NULL); }
	| IF '(' expression ')' statement ELSE statement
		{ $$ = new_flow(IF, $3, $5, $7); }
	| SWITCH '(' expression ')' statement
		{ $$ = new_flow(SWITCH, $3, $5, NULL); }
	;

shift_expression
	: additive_expression
		{ $$ = $1; }
	| shift_expression LEFT_OP additive_expression
		{ $$ = new_ast(LEFT_OP, $1, $3); }
	| shift_expression RIGHT_OP additive_expression
		{ $$ = new_ast(RIGHT_OP, $1, $3); }
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
		{ $$ = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, $1, $2); }
	| type_specifier
		{ $$ = $1; }
	| type_qualifier specifier_qualifier_list
		{ $$ = new_ast(NODE_SPECIFIER_QUALIFIER_LIST, $1, $2); }
	| type_qualifier
		{ $$ = $1; }
	;

statement
	: labeled_statement
		{ $$ = $1; }
	| compound_statement
		{ $$ = $1; }
	| expression_statement
		{ $$ = $1; }
	| selection_statement
		{ $$ = $1; }
	| iteration_statement
		{ $$ = $1; }
	| jump_statement
		{ $$ = $1; }
	;

statement_list
	: statement
		{ $$ = $1; }
	| statement_list statement
		{ $$ = new_ast(NODE_STATEMENT_LIST, $1, $2); }
	;

storage_class_specifier
	: TYPEDEF
		{ $$ = new_word(TYPEDEF); }
	| EXTERN
		{ $$ = new_word(EXTERN); }
	| STATIC
		{ $$ = new_word(STATIC); }
	| AUTO
		{ $$ = new_word(AUTO); }
	| REGISTER
		{ $$ = new_word(REGISTER); }
	| attribute
		{ $$ = new_word(ATTRIBUTE); }
	;

string
	: STRING_LITERAL
		{ $$ = new_string($1); }
	| string STRING_LITERAL 
		{ $$ = new_ast(NODE_STRING, $1, new_string($2)); }
	| error
		{ $$ = NULL; }
	;

struct_declaration_list
	: struct_declaration
		{ $$ = $1; }
	| struct_declaration_list struct_declaration
		{ $$ = new_ast(NODE_STRUCT_DECLARATION_LIST, $1, $2); }
	;

struct_declaration
	: specifier_qualifier_list maybe_attribute ';'
	| specifier_qualifier_list struct_declarator_list maybe_attribute';' 
		{ $$ = new_ast(NODE_STRUCT_DECLARATION, $1, $2); }
	;

struct_declarator_list
	: struct_declarator
		{ $$ = $1; }
	| struct_declarator_list ',' struct_declarator
		{ $$ = new_ast(NODE_STRUCT_DECLARATOR_LIST, $1, $3); }
	;

struct_declarator
	: declarator
		{ $$ = $1; }
	| ':' constant_expression
		{ }
	| declarator ':' constant_expression
		{ $$ = new_ast(NODE_STRUCT_DECLARATOR, $1, NULL); }
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{'  '}' maybe_attribute
		{ $$ = new_struct($1, $2, NULL); }
	| struct_or_union TYPE_NAME '{'  '}' maybe_attribute
		{ $$ = new_struct($1, $2, NULL); }
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}' maybe_attribute
		{ $$ = new_struct($1, $2, $4); }
	| struct_or_union TYPE_NAME '{' struct_declaration_list '}' maybe_attribute
	| struct_or_union '{'  '}' maybe_attribute
		{ $$ = new_struct($1, NULL, NULL); }
	| struct_or_union '{' struct_declaration_list '}' maybe_attribute
		{ $$ = new_struct($1, NULL, $3); }
	| struct_or_union IDENTIFIER maybe_attribute
		{ $$ = new_struct($1, $2, NULL); }
	| struct_or_union TYPE_NAME maybe_attribute
		{ $$ = new_struct($1, $2, NULL); }
	;

struct_or_union
	: STRUCT
		{ $$ = new_word(STRUCT); }
	| UNION
		{ $$ = new_word(UNION); }
	;

translation_unit
	: external_declaration 	
		{ $$ = $1; }
	| translation_unit external_declaration 
		{ $$ = new_ast(NODE_TRANSLATION_UNIT, $1, $2); root = $$; }
	;

type_name
	: specifier_qualifier_list 
		{ $$ = new_ast(NODE_TYPE_NAME, $1, NULL); }
	| specifier_qualifier_list abstract_declarator
		{ $$ = new_ast(NODE_TYPE_NAME, $1, $2); }
	;

type_qualifier_list
	: type_qualifier
		{ $$ = $1; }
	| type_qualifier_list type_qualifier
		{ $$ = new_ast(NODE_TYPE_QUALIFIER, $1, $2); }
	;

type_qualifier
	: CONST
		{ $$ = new_word(CONST); }
	| VOLATILE
		{ $$ = new_word(VOLATILE); }
	;

type_specifier
	: VOID
		{ $$ = new_word(VOID); }
	| CHAR
		{ $$ = new_word(CHAR); }
	| SHORT
		{ $$ = new_word(SHORT); }
	| INT 
		{ $$ = new_word(INT); }
	| LONG
		{ $$ = new_word(LONG); }
	| FLOAT
		{ $$ = new_word(FLOAT); }
	| DOUBLE 
		{ $$ = new_word(DOUBLE); }
	| SIGNED
		{ $$ = new_word(SIGNED); }
	| UNSIGNED 
		{ $$ = new_word(UNSIGNED); }
	| struct_or_union_specifier
		{ $$ = new_ast(NODE_TYPE_SPECIFIER, $1, NULL); }
	| enum_specifier
		{ $$ = new_ast(NODE_TYPE_SPECIFIER, $1, NULL); }
	| TYPE_NAME
		{ $$ = new_id($1); }
	| TYPEOF '(' expression ')'
		{ $$ = new_word(TYPEOF); }
	| TYPEOF '('declaration_specifiers ')'
		{ $$ = new_word(TYPEOF); }
	;

unary_expression
	: postfix_expression
		{ $$ = $1; }
	| INC_OP unary_expression
		{ $$ = new_ast(INC_OP, $2, NULL); }
	| DEC_OP unary_expression
		{ $$ = new_ast(DEC_OP, $2, NULL); }
	| unary_operator cast_expression
		{ $$ = new_ast($1, $2, NULL); }
	| SIZEOF unary_expression
		{ $$ = new_ast(SIZEOF, $2, NULL); }
	| SIZEOF '(' type_name ')'
		{ $$ = new_ast(SIZEOF, $3, NULL); }
	| TYPEOF '(' expression ')'
		{ $$ = new_word(TYPEOF); }
	| TYPEOF '('declaration_specifiers ')'
		{ $$ = new_word(TYPEOF); }

	;

unary_operator
	: '&'
		{ $$ = '&'; }
	| '*'
		{ $$ = '*'; }
	| '+'
		{ $$ = '+'; }
	| '-'
		{ $$ = '-'; }
	| '~'
		{ $$ = '~'; }
	| '!'
		{ $$ = '!'; }
	| '.' 
		{ $$ = '.'; }
	;    		    	    


%%


/*extern char yytext[];*/
extern int column;

int main(int argc, char *argv[]) 
{
	if (argc < 5) {
		printf("usage:%s <input file> <output file> <afs file> <orig file>\n", argv[0]);
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
	addref("mm_segment_t", TYPE_NAME);
	yyparse();
	parse_to_afs();
*/
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
		if ((afs_file = fopen(argv[3], "w")) == NULL) {
			printf("%s: can't open file: %s\n", argv[0], argv[3]);
			return 1;
		}
		if ((orig_file = fopen(argv[4], "r")) == NULL) {
			printf("%s: can't open file: %s\n", argv[0], argv[4]);
			return 1;
		}
		
		yyin = in;
		yyout = out;
		addref("__builtin_va_list", TYPE_NAME);
		addref("mm_segment_t", TYPE_NAME);
		pp_find_fops_name();
		int ret_val = yyparse();
		if (ret_val) {
			fclose(in);
			fclose(out);
			printf("\nerr: can't finish parsing!");
			return 1;
		} else {
			printf("\nparsing: success!");
		} 
		
		ret_val = parse_to_afs();
		if (ret_val) {
			fclose(in);
			fclose(out);
			printf("\nerr: can't convert to afs!");
			return 1;
		} else {
			printf("\nconverting: success!");
		} 
		
		fclose(in);
		fclose(out);
		
	}
	return 0;
}
yyerror(char *s)
{
	fflush(stdout);
	fprintf(yyout, "\n%*s\n%*s\n", column, "^", column, s);
}

