#include "afs.h"
#include "parser-c.tab.h"
#include <string.h>
#include <stdlib.h>

struct ast *afs_add_flow(struct ast *afs_node, struct flow *fl) {
	switch (fl->flowtype) {
	case IF: {
		return afs_add_flow_if(afs_node, fl);
	} break;
	case FOR: {
		return afs_add_flow_for(afs_node, fl);		
	} break;
	case WHILE: {
		return afs_add_flow_while_do(afs_node, fl);		
	} break;
	case DO: {
		return afs_add_flow_do_while(afs_node, fl);		
	} break;
	case SWITCH: {
		return afs_add_flow_switch(afs_node, fl);
	} break;
	default: {
		printf("\nerr:unknown flow type %d in afs_add_flow!");
		return NULL;
	}
	}	
}
struct ast * add_new_node_to_afs_node(struct ast *afs_node,
				      struct ast *new_node) 
{
	if (afs_node == NULL) {
		if (curr_afs_root == NULL) 
			curr_afs_root = new_node;
		
		return new_node;
	} else if (afs_node->nodetype == AFS_SEQ) {
		struct ast *seq = new_ast(AFS_SEQ, afs_node->r, new_node);
		afs_node->r = seq;
		return seq;
	} else {
		struct ast *seq = new_ast(AFS_SEQ, afs_node, new_node);
		return seq;
	}
}
struct ast* afs_add_flow_if(struct ast *afs_node, struct flow *fl) 
{
	struct afs_alt *alt = malloc(sizeof(struct afs_alt));
	alt->nodetype = AFS_ALT;
	alt->l = NULL;
	alt->r = NULL;
	struct ast *st = func_body_to_afs_struct(fl->stmt1, NULL);
	struct ast *gc = new_ast(AFS_GC, 
				 new_ast(AFS_B, NULL, NULL),
				 st);
	struct ast_list *node = malloc(sizeof(struct ast_list));
	node->next = NULL;
	node->a = gc; 
	alt->alt_list = node;
	if (fl->stmt2 && 
	    fl->stmt2->nodetype == NODE_FLOW &&
	    ((struct flow*)fl->stmt2)->flowtype == IF) {
		struct ast *tf = fl->stmt2;
		while (tf &&
		       tf->nodetype == NODE_FLOW && 
		       ((struct flow*)tf)->flowtype == IF) {
			struct flow *f = (struct flow*) tf;
			st = func_body_to_afs_struct(f->stmt1, NULL);
			struct ast *gc = new_ast(AFS_GC, 
						 new_ast(AFS_B,
							 NULL, 
							 NULL),
						 st);
			struct ast_list *node = 
				malloc(sizeof(struct ast_list));
			node->next = NULL;
			node->a = gc; 
			struct ast_list *t = alt->alt_list;
			while (t->next) {
				t = t->next;
			}
			t->next = node;
			tf = f->stmt2;
		}
	} else if (fl->stmt2) {
		st = func_body_to_afs_struct(fl->stmt2, NULL);
		
		gc = new_ast(AFS_GC,
			     new_ast(AFS_B, NULL, NULL),
			     st);
		node = malloc(sizeof(struct ast_list));
		node->next = NULL;
		node->a = gc;
		struct ast_list *t = alt->alt_list;
		while (t->next) {
			t = t->next;
		}
		t->next = node;
	}
	return add_new_node_to_afs_node(afs_node, (struct ast*)alt);
}
struct ast * afs_add_flow_for(struct ast *afs_node, struct flow *fl)
{
	struct ast *loop = malloc(sizeof(struct ast));
	loop->nodetype = AFS_LOOP;
	loop->l = NULL;
	loop->r = NULL;
	struct ast *st = func_body_to_afs_struct(fl->l, NULL);
		
	struct afs_alt *alt = malloc(sizeof(struct afs_alt));
	alt->nodetype = AFS_ALT;
	alt->l = NULL;
	alt->r = NULL;
	struct ast *gc = new_ast(AFS_GC, 
				 new_ast(AFS_B, NULL, NULL),
				 st);
	struct ast_list *node = malloc(sizeof(struct ast_list));
	node->next = NULL;
	node->a = gc; 
	alt->alt_list = node;
	loop->l = (struct ast*)alt;
	return add_new_node_to_afs_node(afs_node, loop);
}

struct ast *afs_add_flow_while_do(struct ast *afs_node, struct flow *fl)
{
	struct ast *loop = malloc(sizeof(struct ast));
	loop->nodetype = AFS_LOOP;
	loop->l = NULL;
	loop->r = NULL;
	struct ast *st = func_body_to_afs_struct(fl->stmt1, NULL);
		
	struct afs_alt *alt = malloc(sizeof(struct afs_alt));
	alt->nodetype = AFS_ALT;
	alt->l = NULL;
	alt->r = NULL;
	struct ast *gc = new_ast(AFS_GC, 
				 new_ast(AFS_B, NULL, NULL),
				 st);
	struct ast_list *node = malloc(sizeof(struct ast_list));
	node->next = NULL;
	node->a = gc; 
	alt->alt_list = node;
	loop->l = (struct ast *) alt;
	return add_new_node_to_afs_node(afs_node, loop);
}
struct ast *afs_add_flow_do_while(struct ast *afs_node, struct flow *fl)
{
	struct ast *loop = malloc(sizeof(struct ast));
	loop->nodetype = AFS_LOOP;
	loop->l = NULL;
	loop->r = NULL;
	struct ast *st = func_body_to_afs_struct(fl->stmt1, NULL);
		
	struct afs_alt *alt = malloc(sizeof(struct afs_alt));
	alt->nodetype = AFS_ALT;
	alt->l = NULL;
	alt->r = NULL;
	struct ast *gc = new_ast(AFS_GC, 
				 new_ast(AFS_B, NULL, NULL),
				 st);
	struct ast_list *node = malloc(sizeof(struct ast_list));
	node->next = NULL;
	node->a = gc; 
	alt->alt_list = node;
	loop->l = (struct ast*) alt;
	struct ast *loop_seq = new_ast(AFS_SEQ, st, loop);
	return add_new_node_to_afs_node(afs_node, loop_seq);
}

struct ast * afs_add_flow_switch(struct ast *afs_node, struct flow *fl)
{
	struct afs_alt *alt = malloc(sizeof(struct afs_alt));
	alt->nodetype = AFS_ALT;
	alt->l = NULL;
	alt->r = NULL;
	alt->alt_list = NULL;
	struct ast_list *stmts_list = get_case_stmts_list(fl->stmt1);
	while (stmts_list) {
		struct ast *gc = new_ast(AFS_GC, 
					 new_ast(AFS_B, NULL, NULL),
					 stmts_list->a);
		struct ast_list *node = malloc(sizeof(struct ast_list));
		node->a = gc;
		node->next = NULL;
		if (alt->alt_list == NULL) {
			alt->alt_list = node;				
		} else {
			struct ast_list *tmp = alt->alt_list;
			while (tmp->next) {
				tmp = tmp->next;
			}
			tmp->next = node;
		}

		stmts_list = stmts_list->next;
	}
	return add_new_node_to_afs_node(afs_node, (struct ast*)alt);
}

struct ast_list *get_case_stmts_list(struct ast *node) 
{
	if (node == NULL)
		return NULL;
	struct ast_list *first = get_case_stmts_list(node->l);
	struct ast_list *second = get_case_stmts_list(node->r);
	if (node->nodetype == NODE_LABELED_STATEMENT) {
		if (first == NULL && second == NULL) {
			struct ast_list *n = malloc(sizeof(struct ast_list));
			n->next = NULL;
			n->a = node->r;
			return n;
		} else {
			struct ast_list *n = 
					malloc(sizeof(struct ast_list));
				n->a = node->r;
				
			if (first != NULL) {
				first->next = second;
				n->next = first;
			} else {
				n->next = second;
			}
			return n;
		}
	}
	return NULL;
}
struct ast * afs_add_semaphore(struct ast *afs_node, 
			       char *func_name, 
			       char *var_name) 
{

	if (strcmp(func_name, "down") == 0 ||
	    strcmp(func_name, "down_interruptible") == 0 ||
	    strcmp(func_name, "down_killable") == 0) {
		
	} else if (strcmp(func_name, "up") == 0) {
	}
	return afs_node;
}
struct ast * afs_add_spinlock(struct ast *afs_node, 
			      char *func_name, 
			      char *var_name)
{
	struct ast *rw = malloc(sizeof(struct ast));
	rw->l = new_id(var_name);
	if (strcmp(func_name, "_spin_lock") == 0 ||
	    strcmp(func_name, "_spin_lock_irqsave") == 0 ||
	    strcmp(func_name, "_spin_lock_irq") == 0 ||
	    strcmp(func_name, "_spin_lock_bh") == 0) {
		rw->nodetype = AFS_WRITE;
		printf("\n%d\n", AFS_WRITE);
		rw->r = new_id("1");
		
	} else if (strcmp(func_name, "_spin_unlock") == 0 ||
		   strcmp(func_name, "_spin_unlock_irqrestore") == 0 ||
		   strcmp(func_name, "_spin_unlock_irq") == 0 ||
		   strcmp(func_name, "_spin_unlock_bh") == 0) {
		rw->nodetype = AFS_READ;
		printf("\n%d\n", AFS_READ);
		rw->r = new_id("1");
	}
	if (rw->nodetype == AFS_WRITE) {
		struct afs_alt *alt = malloc(sizeof(struct afs_alt));
		alt->nodetype = AFS_ALT;
		alt->l = NULL;
		alt->r = NULL;
		struct ast *gc = new_ast(AFS_GC, 
					 rw, 
					 new_ast(AFS_BREAK, NULL, NULL));
		struct ast_list *node = malloc(sizeof(struct ast_list));
		node->next = NULL;
		node->a = gc;
		alt->alt_list = node;
		struct ast *loop = new_ast(AFS_LOOP, (struct ast*)alt, NULL);
		rw = loop;
	}
	
	return add_new_node_to_afs_node(afs_node, rw);
}

struct ast * afs_add_mutex(struct ast *afs_node, 
			   char *func_name, 
			   char *var_name) 
{
	struct ast *rw = malloc(sizeof(struct ast));
	
	rw->l = new_id(var_name);
	if (strcmp(func_name, "mutex_lock") == 0 ||
	    strcmp(func_name, "mutex_lock_interruptible") == 0 ||
	    strcmp(func_name, "mutex_lock_killable") == 0 ||
	    strcmp(func_name, "mutex_trylock") == 0) {
		rw->nodetype = AFS_WRITE;
		printf("\n%d\n", AFS_WRITE);
		rw->r = new_id("1");
		
	} else if (strcmp(func_name, "mutex_unlock") == 0) {
		rw->nodetype = AFS_READ;
		printf("\n%d\n", AFS_READ);
		rw->r = new_id("1");
	}
	return add_new_node_to_afs_node(afs_node, rw);	
}

int afs_struct_to_file() 
{
	struct ast_list *t = afl;
	while (t) {
		struct term_id *id = (struct term_id*)find_id(t->a->l);
		if (!id) {
			printf("\nerr: can't find afs function name!");
			return 1;
		}
		fprintf(afs_file, "\nFUNC %s :: ", id->name);
		afs_struct_node_to_file(t->a->r);
		fprintf(afs_file, "\n");
		t = t->next;
	}
	return 0;
}

int afs_struct_node_to_file(struct ast *node) 
{
	if (node == NULL)
		return 0;
	switch (node->nodetype) {
	case AFS_ALT: {
		fprintf(afs_file, "ALT(");
		
		struct ast_list *t = ((struct afs_alt*) node)->alt_list;
		while (t) {
			afs_struct_node_to_file(t->a);
			if (t->next)
				fprintf(afs_file, ";");
			t = t->next;
		}
		fprintf(afs_file, ")");
	} break;
	case AFS_B: {
		fprintf(afs_file, "B");
		if (node->l) {
			fprintf(afs_file, "(%s)", 
				((struct term_id *)node)->name);
		}
	} break;
	case AFS_BREAK: {
		fprintf(afs_file, "break");
	} break;
	case AFS_CHAN: {
		//TODO
	} break;
	case AFS_COM: {
		fprintf(afs_file, "A");
		if (node->l) {
			fprintf(afs_file, "(%s)", 
				((struct term_id *)node)->name);
		}
	} break;
	case AFS_EXIT: {
		fprintf(afs_file, "exit");		
	} break;
	case AFS_FF: {
		fprintf(afs_file, "ff");		
	} break;
	case AFS_GC: {
		afs_struct_node_to_file(node->l);
		fprintf(afs_file, " -> ");
		afs_struct_node_to_file(node->r);
	} break;
	case AFS_ID: {
		fprintf(afs_file, 
			"%s", 
			((struct term_id*)node)->name);
	} break;
	case AFS_LOOP: {
		fprintf(afs_file, "LOOP(");		
		afs_struct_node_to_file(node->l);
		fprintf(afs_file, ")");
	} break;
	case AFS_PAR: {
		fprintf(afs_file, "PAR(");		
		afs_struct_node_to_file(node->l);
		fprintf(afs_file, ";");
		afs_struct_node_to_file(node->r);
		fprintf(afs_file, ")");
	} break;
	case AFS_READ: {
		fprintf(afs_file, "read(");		
		afs_struct_node_to_file(node->l);
		fprintf(afs_file, ",");		
		afs_struct_node_to_file(node->r);
		fprintf(afs_file, ")");
	} break;
	case AFS_SEQ: {
		fprintf(afs_file, "SEQ(");		
		afs_struct_node_to_file(node->l);
		fprintf(afs_file, ";");
		afs_struct_node_to_file(node->r);
		fprintf(afs_file, ")");
	} break;
	case AFS_SKIP: {
		fprintf(afs_file, "skip");		
	} break;
	case AFS_TT: {
		fprintf(afs_file, "tt");
	} break;
	case AFS_WRITE: {
		fprintf(afs_file, "write(");		
		afs_struct_node_to_file(node->l);
		fprintf(afs_file, ",");		
		afs_struct_node_to_file(node->r);
		fprintf(afs_file, ")");
	} break;
	default: {
		printf("err: unknown afs node type: %d", node->nodetype);
	}
	}
	return 0;
}
