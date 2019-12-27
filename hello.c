/*
 *  hello.c - The simplest kernel module.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

static int __init hello_start(void)
{
	printk(KERN_INFO "Loading hello module ...\n");

	return 0;
}

static void __exit hello_end(void)
{
	printk(KERN_INFO "Unloading hello module ...\n");
}

module_init(hello_start);
module_exit(hello_end);

MODULE_LICENSE("GPL");
