#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/types.h>
#include <linux/mutex.h>
MODULE_LICENSE("GPL");
#define MODULE_NAME "test"
#define BUFFER_SIZE (1)
static int Major;
static int Minor;
static struct cdev cdev;

static struct mutex empty;
static struct mutex fill;

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
  return 0;
}
static int test_close(struct inode *ino, struct file *filp)
{
  printk("\n%s: close func", MODULE_NAME);
  return 0;
}

static ssize_t test_read(struct file *filp, char __user *buff, size_t count, loff_t *offp)
{
  while (1) {
    mutex_lock(&fill);
    printk("\n%s: consume", MODULE_NAME);
    mutex_unlock(&empty);
  }
  return count;
} 

static ssize_t test_write(struct file *filp, const char __user *buff, size_t count, loff_t *offp)
{
  int b = 0;
  while (b < count) {
    mutex_lock(&empty);
    printk("\n%s: produce", MODULE_NAME);
    mutex_unlock(&fill);
    b++;
  }
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
  mutex_init(&empty);
  mutex_init(&fill);
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
