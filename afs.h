#ifndef AFS_H
#define AFS_H
#include <stdio.h>
#include "dsv.h"

int afs_add_semaphore(struct ast *afs_func, char *func_name, char *var_name);
int afs_add_spinlock(struct ast *afs_func, char *func_name, char *var_name);
int afs_add_mutex(struct ast *afs_func, char *func_name, char *var_name);

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
	AFS_LOOP,
	AFS_TT,
	AFS_FF,
	AFS_B
};
#endif //AFS_H
