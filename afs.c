/*
 * afs.c - functions for translating from C language to 
 * Asynchronous Functional Schemes language
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

#include "afs.h"
#include "parser-c.tab.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
struct ast *afs_add_com(struct ast **afs_node, struct ast *node)
{
	char buf[10];
	sprintf(buf, "%d", curr_com_idx++);
	struct ast *com = new_ast(AFS_COM, new_id(buf), NULL);
	com = add_new_node_to_afs_node(afs_node, com);
	return com;
}
struct ast *afs_add_return(struct ast **afs_node, struct ast *node) 
{
	struct ast *ret = new_ast(AFS_EXIT, NULL, NULL);
	ret = add_new_node_to_afs_node(afs_node, ret);
	return ret;
}
struct ast * afs_add_break(struct ast **afs_node, struct ast *node) 
{
	struct ast *brk = new_ast(AFS_BREAK, NULL, NULL);
	brk = add_new_node_to_afs_node(afs_node, brk);
	return brk;
}
struct ast * afs_add_goto(struct ast **afs_node, struct ast *node) 
{
	struct ast *gt = new_ast(AFS_SKIP, NULL, NULL); // TODO
	gt = add_new_node_to_afs_node(afs_node, gt);
	return gt;
}
struct ast *afs_create_b(struct ast *node) 
{
	char buf[10];
	struct ast *b;
	if (node && node->nodetype == NODE_ID) {
		struct term_id *id = (struct term_id*) node;
		if (strcmp(id->name, "0") == 0) {
			b = new_ast(AFS_FF, NULL, NULL);
		} else if (strcmp(id->name, "1") == 0) {
			b = new_ast(AFS_TT, NULL, NULL);
		} else {
			sprintf(buf, "%d", curr_b_idx++);	
			b = new_ast(AFS_B, new_id(buf), NULL);
		}	
	} else { 
		sprintf(buf, "%d", curr_b_idx++);	
		b = new_ast(AFS_B, new_id(buf), NULL);
	}

	if (node) {
		struct term_id * id = (struct term_id *) find_id(node);
		if (id &&
		    (strcmp(id->name, "down_trylock") == 0 ||
		     strcmp(id->name, "spin_trylock") == 0 ||
		     strcmp(id->name, "mutex_trylock") == 0 ||
		     strcmp(id->name, "spin_trylock_bh") == 0 ||
		     strcmp(id->name, "down_read_trylock") == 0 ||
		     strcmp(id->name, "down_write_trylock") == 0)) {
			printf("TEEST");
		}
	}
	
	return b;
 
} 
struct ast *afs_add_flow(struct ast **afs_node, struct flow *fl) 
{
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
		print_tree((struct ast*)fl);
		printf("\n+++\n");
		return NULL;
	}
	}	
}
struct ast * add_new_node_to_afs_node(struct ast **afs_node,
				      struct ast *new_node) 
{
	if (afs_node == NULL || (*afs_node) == NULL) {
		afs_node = &new_node;
		return new_node;
	} else if ((*afs_node)->nodetype == AFS_SEQ) {
		struct ast *tmp = (*afs_node);
		while (tmp->r && tmp->r->nodetype == AFS_SEQ) {
			tmp = tmp->r;
		}
		struct ast *seq = new_ast(AFS_SEQ, tmp->r, new_node);
		tmp->r = seq;
		return *afs_node;
	} else {
		struct ast *seq = new_ast(AFS_SEQ, (*afs_node), new_node);
		afs_node = &seq;

		return seq;
	}
}

struct ast * afs_add_flow_if(struct ast **afs_node, struct flow *fl) 
{
	struct afs_alt *alt = malloc(sizeof(struct afs_alt));
	if (!alt) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	alt->nodetype = AFS_ALT;
	alt->l = NULL;
	alt->r = NULL;
	struct ast *st = func_body_to_afs_struct(fl->stmt1, NULL);
	if (!st) {
		st = new_ast(AFS_SKIP, NULL, NULL);
	}
	struct ast *gc = new_ast(AFS_GC, 
				 afs_create_b(fl->expr),
				 st);
	struct ast_list *node = malloc(sizeof(struct ast_list));
	if (!node) {
		fputs("out of space\n",stderr);
		exit(0);
	}

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
			if (!st) {
				st = new_ast(AFS_SKIP, NULL, NULL);
			}
			struct ast *gc = new_ast(AFS_GC, 
						 afs_create_b(fl->expr),
						 st);
			struct ast_list *node = 
				malloc(sizeof(struct ast_list));
			if (!node) {
				fputs("out of space\n",stderr);
				exit(0);
			}

			node->next = NULL;
			node->a = gc; 
			struct ast_list *t = alt->alt_list;
			while (t->next) {
				t = t->next;
			}
			t->next = node;
			
			if (f->stmt2 && f->stmt2->nodetype != NODE_FLOW) {

				st = func_body_to_afs_struct(f->stmt2, NULL);
				if (!st) {
					st = new_ast(AFS_SKIP, NULL, NULL);
				}
				gc = new_ast(AFS_GC, 
					     afs_create_b(fl->expr),
					     st);
				struct ast_list *node = 
					malloc(sizeof(struct ast_list));
				if (!node) {
					fputs("out of space\n",stderr);
					exit(0);
				}

				node->next = NULL;
				node->a = gc; 
				struct ast_list *t = alt->alt_list;
				while (t->next) {
					t = t->next;
				}
				t->next = node;
			}
			tf = f->stmt2;
		}
	} else if (fl->stmt2) {
		st = func_body_to_afs_struct(fl->stmt2, NULL);
		if (!st) {
			st = new_ast(AFS_SKIP, NULL, NULL);
		}
		gc = new_ast(AFS_GC,
			     afs_create_b(fl->expr),
			     st);
		node = malloc(sizeof(struct ast_list));
		if (!node) {
			fputs("out of space\n",stderr);
			exit(0);
		}

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
struct ast * afs_add_flow_for(struct ast **afs_node, struct flow *fl)
{
	struct ast *loop = malloc(sizeof(struct ast));
	if (!loop) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	loop->nodetype = AFS_LOOP;
	loop->l = NULL;
	loop->r = NULL;
	struct ast *st = func_body_to_afs_struct(fl->l, NULL);
	if (!st) {
		st = new_ast(AFS_SKIP, NULL, NULL);
	}
	struct afs_alt *alt = malloc(sizeof(struct afs_alt));
	if (!alt) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	alt->nodetype = AFS_ALT;
	alt->l = NULL;
	alt->r = NULL;
	struct ast *gc = new_ast(AFS_GC, 
				 afs_create_b(fl->expr),
				 st);
	struct ast_list *node = malloc(sizeof(struct ast_list));
	if (!node) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	node->next = NULL;
	node->a = gc; 
	alt->alt_list = node;
	loop->l = (struct ast*)alt;
	return add_new_node_to_afs_node(afs_node, loop);
}

struct ast *afs_add_flow_while_do(struct ast **afs_node, struct flow *fl)
{
	struct ast *loop = malloc(sizeof(struct ast));
	if (!loop) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	loop->nodetype = AFS_LOOP;
	loop->l = NULL;
	loop->r = NULL;
	struct ast *st = func_body_to_afs_struct(fl->stmt1, NULL);
	if (!st) {
		st = new_ast(AFS_SKIP, NULL, NULL);
	}
	struct afs_alt *alt = malloc(sizeof(struct afs_alt));
	if (!alt) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	alt->nodetype = AFS_ALT;
	alt->l = NULL;
	alt->r = NULL;
	struct ast *gc = new_ast(AFS_GC,
				 afs_create_b(fl->expr),
				 st);
	struct ast_list *node = malloc(sizeof(struct ast_list));
	if (!node) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	node->next = NULL;
	node->a = gc; 
	alt->alt_list = node;
	loop->l = (struct ast *) alt;
	return add_new_node_to_afs_node(afs_node, loop);
}
struct ast *afs_add_flow_do_while(struct ast **afs_node, struct flow *fl)
{
	struct ast *st = func_body_to_afs_struct(fl->stmt1, NULL);
	struct ast *b = afs_create_b(fl->expr);
	if (!st) {
		st = new_ast(AFS_SKIP, NULL, NULL);
	}
	if (b && b->nodetype == AFS_FF) {
		return st;		
	}
	
	struct ast *loop = malloc(sizeof(struct ast));
	if (!loop) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	loop->nodetype = AFS_LOOP;
	loop->l = NULL;
	loop->r = NULL;
	
	struct afs_alt *alt = malloc(sizeof(struct afs_alt));
	if (!alt) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	alt->nodetype = AFS_ALT;
	alt->l = NULL;
	alt->r = NULL;
			
	struct ast *gc = new_ast(AFS_GC, b, st);
	struct ast_list *node = malloc(sizeof(struct ast_list));
	if (!node) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	node->next = NULL;
	node->a = gc; 
	alt->alt_list = node;
	loop->l = (struct ast*) alt;
	struct ast *loop_seq = new_ast(AFS_SEQ, st, loop);
	return add_new_node_to_afs_node(afs_node, loop_seq);	
}

struct ast * afs_add_flow_switch(struct ast **afs_node, struct flow *fl)
{
	struct afs_alt *alt = malloc(sizeof(struct afs_alt));
	if (!alt) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	alt->nodetype = AFS_ALT;
	alt->l = NULL;
	alt->r = NULL;
	alt->alt_list = NULL;
	struct ast_list *stmts_list = malloc(sizeof(struct ast_list));
	if (!stmts_list) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	stmts_list->a = new_ast(_AFS_ROOT, NULL, NULL);
	stmts_list->next = NULL;
	get_case_stmts_list(fl->stmt1, &stmts_list);
	while (stmts_list) {
		struct ast *st = func_body_to_afs_struct(stmts_list->a, NULL);
		if (!st) {
		 	st = new_ast(AFS_SKIP, NULL, NULL);
		}
		struct ast *gc = new_ast(AFS_GC,
					 afs_create_b(fl->expr),
				 	 st);
		struct ast_list *node = malloc(sizeof(struct ast_list));
		if (!node) {
			fputs("out of space\n",stderr);
			exit(0);
		}

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

void get_case_stmts_list(struct ast *node, struct ast_list **list) 
{
	if (node == NULL)
		return;
	if (node->nodetype == NODE_LABELED_STATEMENT) {
		if (list && (*list)->a && (*list)->a->nodetype == _AFS_ROOT) {
			(*list)->a = node->r;
		} else {
			struct ast_list *n = 
					malloc(sizeof(struct ast_list));
			if (!n) {
				fputs("out of space\n",stderr);
				exit(0);
			}

		       n->a = node->r;
		       n->next = NULL;
		       struct ast_list *t = (*list);
		       while(t->next) {
			       t = t->next;
		       }
		       t->next = n;
		}
	} 
	get_case_stmts_list(node->l, list);
	get_case_stmts_list(node->r, list);

}

int afs_add_chan_to_list(char *chan_name, 
		     int in_type, int in_num,
		     int out_type, int out_num) 
{
	struct afs_chan_list *t = acl;
	while (t) {
		if (strcmp(chan_name, t->chan->name) == 0)
			return 1;
		t = t->next;
	}
	struct afs_chan *new_chan = malloc(sizeof(struct afs_chan));
	if (!new_chan) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	new_chan->nodetype = AFS_CHAN;
	new_chan->l = NULL;
	new_chan->r = NULL;
	new_chan->name = strdup(chan_name);
	new_chan->in_type = in_type;
	new_chan->in_num = in_num;
	new_chan->out_type = out_type;
	new_chan->out_num = out_num;
	struct afs_chan_list *nc = malloc(sizeof(struct afs_chan_list));
	if (!nc) {
		fputs("out of space\n",stderr);
		exit(0);
	}
	
	nc->chan = new_chan;
	nc->next = NULL;
	if (acl) {
		nc->next = acl;
		acl = nc;
	} else {
		acl = nc;
	}
	return 0;
}
struct ast * afs_add_wait_complete(struct ast **afs_node, 
				   char *func_name, 
				   char *var_name) 
{
	struct ast *rw = malloc(sizeof(struct ast));
	if (!rw) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	rw->l = new_id(var_name);
	afs_add_chan_to_list(var_name, ALL, 1, ALL, 1);

	if (strcmp(func_name, "wait_for_completion") == 0 ||
	    strcmp(func_name, "wait_for_completion_timeout") == 0 ||
	    strcmp(func_name, "wait_for_completion_interruptible") == 0 ||
	    strcmp(func_name, 
		   "wait_for_completion_interruptible_timeout") == 0 ||
	    strcmp(func_name, "wait_for_completion_killable") == 0 ||
	    strcmp(func_name, "wait_for_completion_killable_timeout") == 0) {
		rw->nodetype = AFS_READ;
		rw->r = new_id("1");
	} else if (strcmp(func_name, "complete") == 0 ||
		   strcmp(func_name, "complete_all") == 0) {
		rw->nodetype = AFS_WRITE;
		rw->r = new_id("1");
	}
	
	return add_new_node_to_afs_node(afs_node, rw);	
}


struct ast *create_rw_operation(int op_type, char *name, char *num) 
{
	struct ast *rw = malloc(sizeof(struct ast));
	if (!rw) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	rw->nodetype = op_type;
	rw->l = new_id(name);
	rw->r = new_id(num);
	return rw;
}
struct ast * afs_add_rw_semaphore(struct ast **afs_node, 
				  char *func_name, 
				  char *var_name) 
{
	int  op_type;
	char chan_name_write[1000];
	char chan_name_read[1000];
	sprintf(chan_name_write, "%s_w", var_name);
	sprintf(chan_name_read, "%s_r", var_name);
		
	afs_add_chan_to_list(chan_name_write, ALL, 1, ALL, 1);
	afs_add_chan_to_list(chan_name_read, ALL, 1, ALL, 1);

	struct ast *rw;

	if (strcmp(func_name, "down_read") == 0) {
		rw = create_rw_operation(AFS_WRITE, chan_name_write, "1");
		add_new_node_to_afs_node(afs_node, rw);

		rw = create_rw_operation(AFS_WRITE, chan_name_read, "1");
		add_new_node_to_afs_node(afs_node, rw);

		rw = create_rw_operation(AFS_READ, chan_name_write, "1");
		add_new_node_to_afs_node(afs_node, rw);

	} else if (strcmp(func_name, "down_write") == 0 ) {
		rw = create_rw_operation(AFS_WRITE, chan_name_read, "1");
		add_new_node_to_afs_node(afs_node, rw);

		rw = create_rw_operation(AFS_WRITE, chan_name_write, "1");
		add_new_node_to_afs_node(afs_node, rw);

		rw = create_rw_operation(AFS_READ, chan_name_read, "1");
		add_new_node_to_afs_node(afs_node, rw);

	} else if (strcmp(func_name, "up_read") == 0) {
		rw = create_rw_operation(AFS_READ, chan_name_read, "1");
		add_new_node_to_afs_node(afs_node, rw);
		
	} else if (strcmp(func_name, "up_write") == 0) {
		rw = create_rw_operation(AFS_READ, chan_name_write, "1");
		add_new_node_to_afs_node(afs_node, rw);
	}
	
	return (*afs_node);
}

struct ast * afs_add_semaphore(struct ast **afs_node, 
			       char *func_name, 
			       char *var_name) 
{
	int sema_count = 0;
	struct sema_list *ts = sema_list;
	while (ts) {
		if (strcmp(ts->name, var_name) == 0)
			sema_count = ts->count;
		ts = ts->next;
	}
	if (sema_count == 0) {
		printf("\nerr: can't find semaphore count!");
		return NULL;
	}
	
	
	int  op_type;
	if (strcmp(func_name, "down") == 0 ||
	    strcmp(func_name, "down_interruptible") == 0 ||
	    strcmp(func_name, "down_killable") == 0) {
		op_type = AFS_WRITE;
	} else if (strcmp(func_name, "up") == 0) {
		op_type = AFS_READ;
	} 
	int i = 1;
	if (op_type == AFS_WRITE) {
		struct afs_alt *alt = malloc(sizeof(struct afs_alt));
		if (!alt) {
			fputs("out of space\n",stderr);
			exit(0);
		}

		alt->nodetype = AFS_ALT;
		alt->l = NULL;
		alt->r = NULL;
		while (i <= sema_count) {
			struct ast *rw = malloc(sizeof(struct ast));
			if (!rw) {
				fputs("out of space\n",stderr);
				exit(0);
			}

			char chan_name[1000];
			sprintf(chan_name, "%s_%d", var_name, i);
			rw->l = new_id(chan_name);
			
			rw->nodetype = AFS_WRITE;
			rw->r = new_id("1");
			struct ast *gc = new_ast(AFS_GC, 
						 rw, 
						 new_ast(AFS_SKIP, NULL, NULL));
			struct ast_list *node = malloc(sizeof(struct ast_list));
			if (!node) {
				fputs("out of space\n",stderr);
				exit(0);
			}

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
			i++;
		}
		return add_new_node_to_afs_node(afs_node, (struct ast*) alt);
	} else {
		struct ast *rw;
		while (i <= sema_count) {
			rw = malloc(sizeof(struct ast));
			if (!rw) {
				fputs("out of space\n",stderr);
				exit(0);
			}

			char chan_name[1000];
			sprintf(chan_name, "%s_%d", var_name, i);
			rw->l = new_id(chan_name);
			rw->nodetype = AFS_READ;
			rw->r = new_id("1");
			add_new_node_to_afs_node(afs_node, rw);
			i++;
		}
		return (*afs_node);
	}
}

struct ast * afs_add_rw_spinlock(struct ast **afs_node, 
			      char *func_name, 
			      char *var_name)
{
	char chan_name_write[1000];
	char chan_name_read[1000];
	sprintf(chan_name_write, "%s_w", var_name);
	sprintf(chan_name_read, "%s_r", var_name);
		
	afs_add_chan_to_list(chan_name_write, ALL, 1, ALL, 1);
	afs_add_chan_to_list(chan_name_read, ALL, 1, ALL, 1);

	struct ast *rw;
	struct afs_alt *alt;
	struct ast *gc;
	struct ast *loop;
	struct ast_list *node;

	if (strcmp(func_name, "_read_lock") == 0 ||
	    strcmp(func_name, "_read_lock_irqsave") == 0 ||
	    strcmp(func_name, "_read_lock_irq") == 0 ||
	    strcmp(func_name, "_read_lock_bh") == 0) {
		rw = create_rw_operation(AFS_WRITE, chan_name_write, "1");
		alt = malloc(sizeof(struct afs_alt));
		if (!alt) {
			fputs("out of space\n",stderr);
			exit(0);
		}

		alt->nodetype = AFS_ALT;
		alt->l = NULL;
		alt->r = NULL;
		gc = new_ast(AFS_GC, 
			     rw, 
			     new_ast(AFS_BREAK, NULL, NULL));
		node = malloc(sizeof(struct ast_list));
		if (!node) {
			fputs("out of space\n",stderr);
			exit(0);
		}

		node->next = NULL;
		node->a = gc;
		alt->alt_list = node;
		loop = new_ast(AFS_LOOP, (struct ast*)alt, NULL);
		add_new_node_to_afs_node(afs_node, loop);

		rw = create_rw_operation(AFS_WRITE, chan_name_read, "1");
		alt = malloc(sizeof(struct afs_alt));
		if (!alt) {
			fputs("out of space\n",stderr);
			exit(0);
		}

		alt->nodetype = AFS_ALT;
		alt->l = NULL;
		alt->r = NULL;
		gc = new_ast(AFS_GC, 
			     rw, 
			     new_ast(AFS_BREAK, NULL, NULL));
		node = malloc(sizeof(struct ast_list));
		if (!node) {
			fputs("out of space\n",stderr);
			exit(0);
		}

		node->next = NULL;
		node->a = gc;
		alt->alt_list = node;
		loop = new_ast(AFS_LOOP, (struct ast*)alt, NULL);
		add_new_node_to_afs_node(afs_node, loop);
		
		rw = create_rw_operation(AFS_READ, chan_name_write, "1");
		add_new_node_to_afs_node(afs_node, rw);
		
	} else if (strcmp(func_name, "__read_unlock") == 0 ||
		   strcmp(func_name, "__read_unlock_irqrestore") == 0 ||
		   strcmp(func_name, "__read_unlock_irq") == 0 ||
		   strcmp(func_name, "__read_unlock_bh") == 0) {
		
		rw = create_rw_operation(AFS_READ, chan_name_read, "1");
		add_new_node_to_afs_node(afs_node, rw);

	} else if (strcmp(func_name, "_write_lock") == 0 ||
	    strcmp(func_name, "_write_lock_irqsave") == 0 ||
	    strcmp(func_name, "_write_lock_irq") == 0 ||
	    strcmp(func_name, "_write_lock_bh") == 0) {
		
		rw = create_rw_operation(AFS_WRITE, chan_name_read, "1");
		alt = malloc(sizeof(struct afs_alt));
		if (!alt) {
			fputs("out of space\n",stderr);
			exit(0);
		}

		alt->nodetype = AFS_ALT;
		alt->l = NULL;
		alt->r = NULL;
		gc = new_ast(AFS_GC, 
			     rw, 
			     new_ast(AFS_BREAK, NULL, NULL));
		node = malloc(sizeof(struct ast_list));
		if (!alt) {
			fputs("out of space\n",stderr);
			exit(0);
		}

		node->next = NULL;
		node->a = gc;
		alt->alt_list = node;
		loop = new_ast(AFS_LOOP, (struct ast*)alt, NULL);
		add_new_node_to_afs_node(afs_node, loop);

		rw = create_rw_operation(AFS_WRITE, chan_name_write, "1");
		alt = malloc(sizeof(struct afs_alt));
		if (!alt) {
			fputs("out of space\n",stderr);
			exit(0);
		}
		
		alt->nodetype = AFS_ALT;
		alt->l = NULL;
		alt->r = NULL;
		gc = new_ast(AFS_GC, 
			     rw, 
			     new_ast(AFS_BREAK, NULL, NULL));
		node = malloc(sizeof(struct ast_list));
		if (!node) {
			fputs("out of space\n",stderr);
			exit(0);
		}

		node->next = NULL;
		node->a = gc;
		alt->alt_list = node;
		loop = new_ast(AFS_LOOP, (struct ast*)alt, NULL);
		add_new_node_to_afs_node(afs_node, loop);
		
		rw = create_rw_operation(AFS_READ, chan_name_read, "1");
		add_new_node_to_afs_node(afs_node, rw);
		
	} else if (strcmp(func_name, "__write_unlock") == 0 ||
		   strcmp(func_name, "__write_unlock_irqrestore") == 0 ||
		   strcmp(func_name, "__write_unlock_irq") == 0 ||
		   strcmp(func_name, "__write_unlock_bh") == 0) {

		rw = create_rw_operation(AFS_READ, chan_name_write, "1");
		add_new_node_to_afs_node(afs_node, rw);
	}

	return (*afs_node);
}

struct ast * afs_add_spinlock(struct ast **afs_node, 
			      char *func_name, 
			      char *var_name)
{
	struct ast *rw = malloc(sizeof(struct ast));
	if (!rw) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	rw->l = new_id(var_name);
	afs_add_chan_to_list(var_name, ALL, 1, ALL, 1);
	if (strcmp(func_name, "_spin_lock") == 0 ||
	    strcmp(func_name, "_spin_lock_irqsave") == 0 ||
	    strcmp(func_name, "_spin_lock_irq") == 0 ||
	    strcmp(func_name, "_spin_lock_bh") == 0) {
		rw->nodetype = AFS_WRITE;
		printf("\n!!LOCK!\n");
		rw->r = new_id("1");
	} else if (strcmp(func_name, "_spin_unlock") == 0 ||
		   strcmp(func_name, "_spin_unlock_irqrestore") == 0 ||
		   strcmp(func_name, "_spin_unlock_irq") == 0 ||
		   strcmp(func_name, "_spin_unlock_bh") == 0 ||
		   strcmp(func_name, "__spin_unlock") == 0 ||
		   strcmp(func_name, "__spin_unlock_irqrestore") == 0 ||
		   strcmp(func_name, "__spin_unlock_irq") == 0 ||
		   strcmp(func_name, "__spin_unlock_bh") == 0) {
		rw->nodetype = AFS_READ;
		rw->r = new_id("1");
	}
	if (rw->nodetype == AFS_WRITE) {
		struct afs_alt *alt = malloc(sizeof(struct afs_alt));
		if (!alt) {
			fputs("out of space\n",stderr);
			exit(0);
		}

		alt->nodetype = AFS_ALT;
		alt->l = NULL;
		alt->r = NULL;
		struct ast *gc = new_ast(AFS_GC, 
					 rw, 
					 new_ast(AFS_BREAK, NULL, NULL));
		struct ast_list *node = malloc(sizeof(struct ast_list));
		if (!node) {
			fputs("out of space\n",stderr);
			exit(0);
		}

		node->next = NULL;
		node->a = gc;
		alt->alt_list = node;
		struct ast *loop = new_ast(AFS_LOOP, (struct ast*)alt, NULL);
		
		return add_new_node_to_afs_node(afs_node, loop);
	}
	
	return add_new_node_to_afs_node(afs_node, rw);
}

struct ast * afs_add_mutex(struct ast **afs_node, 
			   char *func_name, 
			   char *var_name) 
{
	struct ast *rw = malloc(sizeof(struct ast));
	if (!rw) {
		fputs("out of space\n",stderr);
		exit(0);
	}

	rw->l = new_id(var_name);
	afs_add_chan_to_list(var_name, ALL, 1, ALL, 1);
	if (strcmp(func_name, "mutex_lock") == 0 ||
	    strcmp(func_name, "mutex_lock_interruptible") == 0 ||
	    strcmp(func_name, "mutex_lock_killable") == 0) {
		rw->nodetype = AFS_WRITE;
		rw->r = new_id("1");
	} else if (strcmp(func_name, "mutex_unlock") == 0) {
		rw->nodetype = AFS_READ;
		rw->r = new_id("1");
	} else {
		printf("\nErr: Unknown func_name: %s", func_name);
	}
	printf("\n%s", var_name);
	return add_new_node_to_afs_node(afs_node, rw);	
}

int afs_struct_to_file() 
{
	struct afs_chan_list *tc = acl;
	struct ast_list *tf = afl;
	fprintf(afs_file, "NET\n");
	while (tc) {
		fprintf(afs_file, "\t");
		afs_struct_node_to_file(tc->chan);
		fprintf(afs_file, "\n");
		tc = tc->next;
	}
	fprintf(afs_file, "BEGIN\n");
	while (tf) {
		struct term_id *id = (struct term_id*)find_id(tf->a->l);
		if (!id) {
			printf("\nerr: can't find afs function name!");
			return 1;
		}
		if (tf->a->r /* &&  */
		    /* tf->a->r->nodetype != AFS_SKIP &&  */
		    /* tf->a->r->nodetype != AFS_COM */) {
			fprintf(afs_file, "\tFUN %s :: ", id->name);
			afs_struct_node_to_file(tf->a->r);
			fprintf(afs_file, "\n");
		}
		tf = tf->next;
	}
	fprintf(afs_file, "END\n");
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
		fprintf(afs_file, "b");
		if (node->l) {
			fprintf(afs_file, "(%s)", 
				((struct term_id *)node->l)->name);
		}
	} break;
	case AFS_BREAK: {
		fprintf(afs_file, "break");
	} break;
	case AFS_CHAN: {
		struct afs_chan *chan = (struct afs_chan*) node;
		fprintf(afs_file, "CHAN %s :: ", chan->name);
		if (chan->in_type == ALL) 
			fprintf(afs_file, "ALL");
		else
			fprintf(afs_file, "ANY");
		fprintf(afs_file, "(%d) : ", chan->in_num);
		if (chan->out_type == ALL) 
			fprintf(afs_file, "ALL");
		else
			fprintf(afs_file, "ANY");
		fprintf(afs_file, "(%d)", chan->out_num);
		
	} break;
	case AFS_COM: {
		fprintf(afs_file, "a");
		if (node->l && 
		    ((struct term_id *)node->l)->name) {
			fprintf(afs_file, "(%s)", 
				((struct term_id *)node->l)->name);
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
	case NODE_ID: {
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
int afs_simplify_struct() 
{
	struct ast_list *t = afl;
		int retval = 0;
	while (t) {

		/* do { */
		/* 	retval = afs_simplify_node(t->a->r); */
		/* } while (retval); */

		t = t->next;
	}
	return 0;
}
int afs_simplify_node(struct ast *node) 
{
	if (node == NULL)
		return 0;
	if (node->nodetype == AFS_SEQ &&
	    node->l && 
	    (node->l->nodetype == AFS_COM ||
	     node->l->nodetype == AFS_SKIP ||
	     node->l->nodetype == AFS_EXIT || 
	     node->l->nodetype == AFS_LOOP) &&
	    node->r && 
	    (node->r->nodetype == AFS_COM ||
	     node->r->nodetype == AFS_SKIP ||
	     node->r->nodetype == AFS_EXIT)) {
		node->nodetype = node->l->nodetype;
		node->r = node->l->r;
		node->l = node->l->l;
		return 1;
	} else if (node->nodetype == AFS_SEQ &&
		   node->l && 
		   (node->l->nodetype == AFS_COM || 
		    node->l->nodetype == AFS_SKIP) &&
		   node->r &&
		   (node->r->nodetype == AFS_EXIT ||
		    node->r->nodetype == AFS_LOOP ||
		    node->r->nodetype == AFS_WRITE ||
		    node->r->nodetype == AFS_READ ||
		    node->r->nodetype == AFS_BREAK
		    )) {
		node->nodetype = node->r->nodetype;
		node->l = node->r->l;
		node->r = node->r->r;
		return 1;
	} else if (node->nodetype == AFS_SEQ &&
		   node->r && 
		   (node->r->nodetype == AFS_COM || 
		    node->r->nodetype == AFS_SKIP) &&
		   node->l &&
		   (node->l->nodetype == AFS_LOOP ||
		    node->l->nodetype == AFS_WRITE ||
		    node->l->nodetype == AFS_READ
		    )) {
		node->nodetype = node->l->nodetype;
		node->r = node->l->r;
		node->l = node->l->l;
		return 1;
	} else if (node->nodetype == AFS_SEQ &&
		   node->l && 
		   (node->l->nodetype == AFS_COM ||
		    node->l->nodetype == AFS_SKIP ||
		    node->l->nodetype == AFS_EXIT)
		   && node->r && node->r->nodetype == AFS_SEQ) {		
		node->l = node->r->l;
		node->r = node->r->r;
		return 1;
	} else if (node->nodetype == AFS_ALT) {
		struct afs_alt *alt = (struct afs_alt*) node;
		struct ast_list *p = alt->alt_list;
		struct ast_list *prev = NULL;
		while (p) {			
			if (p->a->l && 
			    (p->a->l->nodetype == AFS_B ||
			     p->a->l->nodetype == AFS_TT ||
			     p->a->l->nodetype == AFS_FF) &&
			    p->a->r && 
			    (p->a->r->nodetype == AFS_COM || 
			     p->a->r->nodetype == AFS_EXIT ||
			     p->a->r->nodetype == AFS_SKIP ||
			     p->a->r->nodetype == AFS_BREAK)
			    ) {
				if (prev) {
					prev->next = p->next;
				} else {
					alt->alt_list = p->next;
				}
				p = p->next; 
				return 1;
			} else {
				prev = p;
				p = p->next;
			}			
		}
		if (!alt->alt_list) {
			node->nodetype = AFS_SKIP;
			node->l = NULL;
			node->r = NULL;
			return 1;
		}  else {
			p = alt->alt_list;
			int retval = 0;
			while (p) {                     			

				if (afs_simplify_node(p->a))
					return 1;
				
				p = p->next;
			}      			
		}		
	} else if (node->nodetype == AFS_LOOP &&
		   node->l && node->l->nodetype != AFS_ALT) {
		node->nodetype = AFS_SKIP;
		node->l = NULL;
		node->r = NULL;
		return 1;		
	}

	if (afs_simplify_node(node->l))
		return 1;
	
	if (afs_simplify_node(node->r))
		return 1;
	return 0;
}
