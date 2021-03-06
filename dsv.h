/*
 * dsv.c - functions for building AST for C language
 *
 * Copyright (C) 2012 Evgeny Pavlov <lucenticus@gmail.com>
 *
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * This file is part of DSV.
 *
 * DSV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * DSV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with DSV.  If not, see <http://www.gnu.org/licenses/>.
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#ifndef DSV_H
#define DSV_H
#define NHASH (35317)
#define BUF_SIZE (10240)
#define FOPS_SIZE (256)
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

struct sema_list {
	char *name;
	int count;
	struct sema_list *next;
};
struct spinlock_list {
	char *name;
	struct spinlock_list *next;
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
FILE *orig_file;
struct ast *root;
struct symbol symtab[NHASH];
char *fops_name;
char *curr_func_name;
int is_rvalue;
struct fops_node *fops_list;
struct string_list *fops_name_list;
struct string_list *shared_var_list;
struct sema_list *sema_list;
struct spinlock_list *sl_list;

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

int parse_to_afs();
int pp_find_fops_name();
void parse_declaration(struct ast*); 
void print_tree(struct ast *a);

int is_shared_var(char *name);

void find_shared_vars(struct ast *a);

struct ast *find_id(struct ast *node);
struct ast *find_token(struct ast *a, int nodetype);
struct ast *func_body_to_afs_struct(struct ast *node, struct ast **afs_node);
enum NODE_TYPE {
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
	NODE_ENUMERATOR_LIST,
	NODE_ATTRIB,
	NODE_IDENTIFIERS, /*50*/
	NODE_FUNC_DECLARATOR,
	_NODE_LAST
};

#endif /*DSV_H*/
