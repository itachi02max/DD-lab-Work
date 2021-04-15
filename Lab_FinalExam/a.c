/*
DD Final exam
CED17I044 - J Manoj Kumar

2.
(a) Write a module that can take an integer parameter when it is loaded with insmod command.

AND

(b) Write a module which prints your name in log.


Note: Implemented both parts in the same code instead of 2 seperate files

*/

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


int myint = 20; //Assigned random value to check that parsed value is printed or not
module_param(myint,int,0);

static int __init enter(void)
{
   // 2nd question part a Parsing int value through insmod
   printk(KERN_ALERT "myint is an integer: %i\n", myint);
   
   // 2nd question part b Printing my name in the log files
   printk(KERN_ALERT "Printing my name  J Manoj Kumar\n");

   return 0;
}

static void __exit exit(void)
{
   printk(KERN_ALERT "Goodbye\n");
}


module_init(enter);
module_exit(exit);