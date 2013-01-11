#include "afs.h"
#include <string.h>
#include <stdlib.h>
int afs_add_semaphore(struct ast *afs_func, char *func_name, char *var_name) 
{

	if (strcmp(func_name, "down") == 0 ||
	    strcmp(func_name, "down_interruptible") == 0 ||
	    strcmp(func_name, "down_killable") == 0) {
		
	} else if (strcmp(func_name, "up") == 0) {
	}
	return 0;
}
int afs_add_spinlock(struct ast *afs_func, char *func_name, char *var_name)
{
	// TO DO
	return 0;
}
int afs_add_mutex(struct ast *afs_func, char *func_name, char *var_name) 
{
	struct afs_rw *rw = malloc(sizeof(struct afs_rw));
	rw->l = NULL;
	rw->r = NULL;
	rw->chan_name = strdup(var_name);
	if (strcmp(func_name, "mutex_lock") == 0 ||
	    strcmp(func_name, "mutex_lock_interruptible") == 0 ||
	    strcmp(func_name, "mutex_lock_killable") == 0) {
		rw->nodetype = AFS_WRITE;
		rw->chan_io_num = "1";
		
	} else if (strcmp(func_name, "mutex_unlock") == 0) {
		rw->nodetype = AFS_READ;
		rw->chan_io_num = "1";
	}
	if (afs_func->r) {
		struct ast *seq = new_ast(AFS_SEQ, 
					  afs_func->r, 
					  (struct ast*)rw);
		afs_func->r = seq;
	} else {
		afs_func->r = (struct ast *) rw;
	}
		
	return 0;
}
