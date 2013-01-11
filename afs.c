#include "afs.h"

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
	struct ast *n;
	if (strcmp(func_name, "mutex_lock") == 0 ||
	    strcmp(func_name, "mutex_lock_interruptible") == 0 ||
	    strcmp(func_name, "mutex_lock_killable") == 0) {
		n = new_ast(AFS_WRITE, new_id(var_name), new_id("1"));
		if (afs_func->r) {
			struct ast *seq = new_ast(AFS_SEQ, afs_func->r, n);
			afs_func->r = seq;
		} else {
			
		}
		
	} else if (strcmp(func_name, "mutex_unlock") == 0) {
		n = new_ast(AFS_READ, new_id(var_name), new_id("1"));
	}
	return 0;
}
