/*
 * afs.h - functions for translating from C language to 
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

#ifndef AFS_H
#define AFS_H
#include <stdio.h>
#include "dsv.h"

struct afs_chan {
	int nodetype;
	struct ast *l;
	struct ast *r;
	char *name;
	int in_type;
	int in_num;
	int out_type;
	int out_num;
};

struct afs_com {
	int nodetype;
	struct ast *l;
	struct ast *r;
	int idx;
};
struct afs_alt {
	int nodetype;
	struct ast *l;
	struct ast *r;
	struct ast_list *alt_list;
};

struct ast_list {
	struct ast *a;
	struct ast_list *next;
};
struct afs_chan_list {
	struct afs_chan *chan;
	struct afs_chan_list *next;
};
int curr_com_idx;
int curr_b_idx;
struct ast_list *afl;
struct afs_chan_list *acl;
struct string_list *svl;
struct ast *curr_afs_root;

void get_case_stmts_list(struct ast *node, struct ast_list **list);
struct ast * add_new_node_to_afs_node(struct ast **afs_node,
				      struct ast *new_node);
struct ast * afs_create_b(struct ast *node);
struct ast *afs_create_trylock(struct term_id *func_id, 
			       struct term_id *var_id);
struct ast * afs_add_goto(struct ast **afs_node, struct ast *node);
struct ast * afs_add_return(struct ast **afs_node, struct ast *node);
struct ast * afs_add_break(struct ast **afs_node, struct ast *node);
struct ast * afs_add_com(struct ast **afs_node, struct ast *node);
struct ast * afs_add_flow(struct ast **afs_node, struct flow *fl);
struct ast * afs_add_flow_if(struct ast **afs_node, struct flow *fl);
struct ast * afs_add_flow_for(struct ast **afs_node, struct flow *fl);
struct ast * afs_add_flow_do_while(struct ast **afs_node, struct flow *fl);
struct ast * afs_add_flow_while_do(struct ast **afs_node, struct flow *fl);
struct ast * afs_add_flow_switch(struct ast **afs_node, struct flow *fl);

struct ast * afs_add_shared_var(struct ast **afs_node, 
				char *func_name,
				char *var_name);
struct ast * afs_add_wait_complete(struct ast **afs_node, 
				   char *func_name, 
				   char *var_name);
struct ast * afs_add_semaphore(struct ast **afs_node, 
			       char *func_name, 
			       char *var_name);
struct ast * afs_add_rw_semaphore(struct ast **afs_node, 
			      char *func_name, 
			      char *var_name);
struct ast * afs_add_spinlock(struct ast **afs_node, 
			      char *func_name, 
			      char *var_name);
struct ast * afs_add_rw_spinlock(struct ast **afs_node, 
				 char *func_name, 
				 char *var_name);

struct ast * afs_add_mutex(struct ast **afs_node, 
			   char *func_name, 
			   char *var_name);
int afs_struct_to_file();
int afs_add_shared_var_to_list(char *shared_var_name);
int afs_add_chan_to_list(char *chan_name, 
			 int in_type, int in_num,
			 int out_type, int out_num);
struct ast *create_rw_operation(int op_type, char *name, char *num);
enum AFS_CHAN_TYPE {
	ALL,
	ANY
};
enum AFS_NODE_TYPE {
	AFS_ALT = _NODE_LAST,
	AFS_B,
       	AFS_BREAK,
	AFS_CHAN,
	AFS_COM,
	AFS_EXIT,
	AFS_FF,
	AFS_FUNC,
	AFS_GC,
	AFS_GET,
	AFS_ID,
	AFS_LOOP,	
	AFS_PAR,
	AFS_READ,
	AFS_SEQ,
	AFS_SET,
	AFS_SKIP,
	AFS_TT,
	AFS_WRITE,
	_AFS_ROOT
};
#endif //AFS_H
