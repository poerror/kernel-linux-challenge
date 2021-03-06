#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Task 01 of the Eudyptula Challenge");

static int __init hello_init(void) {
  printk(KERN_DEBUG "Hello World!\n");
  return 0;
}

static void __exit hello_exit(void) {
  printk(KERN_DEBUG "Bye World!\n");
}

module_init(hello_init);
module_exit(hello_exit);
