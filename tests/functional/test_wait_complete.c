#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/types.h>
#include <linux/completion.h>

MODULE_LICENSE("GPL");
#define MODULE_NAME "test"
#define BUFFER_SIZE (1)
static int Major;
static int Minor;
static struct cdev cdev;

struct completion compl;

static int test_open(struct inode *, struct file *);
static int test_close(struct inode *, struct file *);
static ssize_t test_read(struct file *, char __user *, size_t, loff_t *); 
static ssize_t test_write(struct file *, const char __user *, size_t, loff_t * );

struct file_operations test_fops = {
	.owner   = THIS_MODULE,
	.open    = test_open,
	.write   = test_write,
	.read    = test_read,
	.release = test_close,
};

static int test_open(struct inode *ino, struct file *filp) 
{
	printk("\n test open func");
	complete(&compl);
	return 0;
}
static int test_close(struct inode *ino, struct file *filp)
{
	complete_all(&compl);
	printk("\n%s: close func", MODULE_NAME);
	return 0;
}

static ssize_t test_read(struct file *filp, 
			 char __user *buff, 
			 size_t count, 
			 loff_t *offp)
{
	wait_for_completion(&compl);
	printk("\n%s: read", MODULE_NAME);
	return count;
} 

static ssize_t test_write(struct file *filp, 
			  const char __user *buff, 
			  size_t count, 
			  loff_t *offp)
{
	wait_for_completion(&compl);
	printk("\n%s: write", MODULE_NAME);
	return count;
}

static int test_init (void)
{
	int retval;
	int err;
	dev_t dev = 0;
	if (Major) {
		dev = MKDEV(Major, Minor);
		retval = register_chrdev_region(dev, 1, MODULE_NAME);
	} else {
		retval = alloc_chrdev_region(&dev, Minor, 1, MODULE_NAME);
		Major = MAJOR(dev);
	}
	if (retval < 0) {
		printk ("\n%s: can't get major %d", MODULE_NAME, Major);
		return retval;
	}
	printk ("\n%s: module init success, major %d", MODULE_NAME, Major);
	dev = MKDEV(Major, Minor);
	cdev_init(&cdev, &test_fops);
	cdev.owner = THIS_MODULE;
	cdev.ops = &test_fops;
	err = cdev_add(&cdev, dev, 1);
	if (err) {
		printk("\n%s: error %d in adding", MODULE_NAME, err);
		return err;
	}
	init_completion(&compl);
	return 0;
}

static void test_exit (void) 
{
	dev_t devno = MKDEV(Major, Minor);
	printk(KERN_ALERT "\n%s: exit",  MODULE_NAME);
	cdev_del(&cdev);
	unregister_chrdev_region(devno, 1);
}

module_init(test_init);
module_exit(test_exit);
