#include <linux/module.h> //所有模块都需要的头文件
#include <linux/init.h>   // init&exit相关宏

MODULE_LICENSE("GPL");
MODULE_AUTHOR("feifei");
MODULE_DESCRIPTION("hello world module");

static int __init hello_init(void){
      printk(KERN_ERR "hello world");
      return 0;
}

static void __exit hello_exit(void){
      printk(KERN_EMERG "hello exit!");
}

module_init(hello_init);
module_exit(hello_exit);
