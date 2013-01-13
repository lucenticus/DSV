#ifndef AFS_H
#define AFS_H
#include <stdio.h>
#include "dsv.h"

struct afs_rw {
	int nodetype;
	struct ast *l;
	struct ast *r;
	char *chan_name;
	char *chan_io_num;
};
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
struct ast_list *afl;
struct afs_chan_list *acl;

int afs_add_semaphore(struct ast **afs_func, char *func_name, char *var_name);
int afs_add_spinlock(struct ast **afs_func, char *func_name, char *var_name);
int afs_add_mutex(struct ast **afs_func, char *func_name, char *var_name);
int afs_struct_to_file();
int afs_add_flow(struct ast **afs_func, struct flow *fl);
enum AFS_NODE_TYPE {
	AFS_ID=_NODE_LAST,
	AFS_CHAN,	
	AFS_FUNC,
	AFS_WRITE,
	AFS_READ,
	AFS_COM,
	AFS_SKIP,
	AFS_EXIT,
	AFS_BREAK,
	AFS_SEQ,
	AFS_PAR,
	AFS_ALT,
	AFS_GC,
	AFS_LOOP,
	AFS_TT,
	AFS_FF,
	AFS_B
};
#endif //AFS_H
