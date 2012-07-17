#ifndef PARSER_C_H
#define PARSER_C_H

struct ast {
	int nodetype;
	struct ast *l;
	struct ast *r;
};

struct fops_node {
	char *name;
	struct func *func;
	struct fops_node *next;
};

struct string_list {
	char *str;
	struct string_list *next;
};

struct semaphore_list {
	char *semaphore_name;
	int semaphore_count;
	struct semaphore_list *next;
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
struct func {
	int nodetype;
	struct ast *l;
	struct ast *r;
	struct ast *decl_specs;
	struct ast *declarator; 
	struct ast *attribute; 
	struct ast *decl_list; 
	struct ast *func_body;
};

struct flow {
	int nodetype;
	struct ast *l;
	struct ast *r;
	int flowtype;
	struct ast *expr;
	struct ast *stmt1; 
	struct ast *stmt2; 
};

struct symbol {
	char *name;
	struct ref *reflist;
};

struct ref {
	struct ref *next;
	int type;
};

FILE *afs_file;
struct ast *root;
#define NHASH (9997)
struct symbol symtab[NHASH];

struct fops_node *fops_list;
struct string_list *fops_name_list;
struct semaphore_list *sema_list;
struct symbol *lookup(char*);
void addref(char*, int);

void count();
struct ast *new_ast(int nodetype, struct ast *l, struct ast *r);
struct ast *new_id(char *id);
struct ast *new_word(int word);
struct ast *new_struct(struct ast *struct_type, char *id, struct ast *spec_list);
struct ast *new_enum(char *id, struct ast * enum_list);

struct ast *new_string(char *str);
struct ast *new_flow(int nodetype, struct ast*, struct ast*, struct ast*);
struct ast *new_for(struct ast*, struct ast*, struct ast*, struct ast*);
struct ast *new_asm(struct ast*, struct ast*, struct ast*, struct ast*, struct ast*);
struct ast *new_asm_operand(struct ast*, struct ast*, struct ast*);
struct ast *new_func(struct ast*, struct ast*, struct ast*, struct ast*, struct ast*);
struct ast *new_attribute(struct ast*, struct ast*, struct ast*);

void parse_to_afs ();

void parse_declaration(struct ast*); 
void print_tree(struct ast *a);
struct ast *find_id(struct ast *node);
struct ast *find_token(struct ast *a, int nodetype);


enum NODETYPE {
	NODE_DECLARATION,   /*0*/
	NODE_NUMBER,
	NODE_ID,
	NODE_WORD,
	NODE_RELOP,
	NODE_STRUCT,
	NODE_ENUM,
	NODE_STRING,
	NODE_FLOW,
	NODE_FUNC,
	NODE_ASM,		/*10*/
	NODE_FOR,
	NODE_ASM_OPERAND,
	NODE_DECLARATOR,
	NODE_POSTFIX_EXPRESSION,
	NODE_ARGUMENT_EXPRESSION_LIST,
	NODE_CAST_EXPRESSION,
	NODE_EXPRESSION,
	NODE_PARAMETER_LIST,
	NODE_PARAMETER_DECLARATION,
	NODE_TYPE_NAME,			/*20*/
	NODE_ABSTRACT_DECLARATOR,
	NODE_DIRECT_ABSTRACT_DECLARATOR,
	NODE_LABELED_STATEMENT,
	NODE_COMPOUND_LIST,
	NODE_DECLARATION_LIST,
	NODE_STATEMENT_LIST,
	NODE_NONNULL_ASM_OPERANDS,
	NODE_ASM_CLOBBERS,
	NODE_TRANSLATION_UNIT,
	NODE_EXTERNAL_DECLARATION,		/*30*/
	NODE_ATTRIBUTES,
	NODE_ATTRIBUTE,
	NODE_ATTRIBUTE_LIST,
	NODE_ANY_WORD,
	NODE_DECLARATION_SPECIFIERS,
	NODE_INIT_DECLARATOR_LIST,
	NODE_INIT_DECLARATOR,
	NODE_TYPE_SPECIFIER,
	NODE_STRUCT_DECLARATION_LIST,
	NODE_STRUCT_DECLARATION,		/*40*/
	NODE_SPECIFIER_QUALIFIER_LIST,
	NODE_STRUCT_DECLARATOR_LIST,
	NODE_STRUCT_DECLARATOR,
	NODE_POINTER,
	NODE_TYPE_QUALIFIER,
	NODE_ASSIGNMENT_EXPRESSION,
	NODE_INITIALIZER_LIST,
	NODE_ENUMERATOR_LIST
};
#endif /*PARSER_C_H*/
