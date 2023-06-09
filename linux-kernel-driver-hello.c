#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init gpio_driver_init(void)
{
	printk("Welcome to my custom Linux kernel driver!\n");
	return 0;
}

static void __exit gpio_driver_exit(void)
{
	printk("Leaving my custom Linux kernel driver!\n");
	return;
}

module_init(gpio_driver_init);
module_exit(gpio_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ricardo Mota");
MODULE_DESCRIPTION("Test of writing custom Linux kernel driver");
MODULE_VERSION("1.0");

