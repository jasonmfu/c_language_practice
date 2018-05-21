#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/fs.h>
#include<linux/semaphore.h>
#include<linux/cdev.h>
#include "ioctl_basic.h"
#include<linux/version.h>

static int Major;

int open(struct inode *inode,struct file *filp){
    printk(KERN_INFO "Inside open\n");
    return 0;
}

int release(struct inode *inode,struct file *filp){
    printk(KERN_INFO "Inside close\n");
    return 0;
}

int ioctl_funcs(struct inode *inode,struct file *filp,
                unsigned int cmd,unsigned long arg)
{
    int data = 10,ret;
    
    switch(cmd){

        case IOCTL_HI:
            printk(KERN_INFO　"HELLO IOCTL");
            break;
    }

    return ret;
}

struct file_operation fops ={
    open: open,
    ioctl: ioctl_funcs,
    release: release
};

struct cdev *kernel_cdev;

int char_arr_int(void){
    int ret;
    dev_t dev_no,dev;

    kernel_cdev = cdev_aollc();
    kernel_cdev -> ops = &fops
    kernel_cdev -> owner = THIS_MODULE;

    printk("Inside init module");
    ret = alloc_chrdev_region(&dev_no,1,0,"char_arr_int");
    if(ret<0){
        printk("Major number aollcation is failed");
        return ret;
    }

    major = MAJOR(dev_no);
    dev = MKDEV(Major,0);
    


