#include<stdio.h>
#include<sys/ioctl.h>
#include<sys/types.h>

#include<sys/stat.h>
#include<fcntl.h>

#include<ioc_brook.h>

int main(int argc,char *argvp[]){
    int fd,ret;

    if(argc < 2){
    printf("Usage: prog \n");
    return -1;
    }

    fd = open(argv[1], ORDWR);
    if(fd < 0){
        printf("open %s filed\n",argv[1]);
        return -1;
    }

    ret = 10;
    if(ioctl(fd, BROOK_IOSETNUM,&ret)<0){
        printf("set num failed \n");
        return -1;
    }

    if(ioctl(fd,BROOK_IOGETNUM,&ret)<0){
        printf("get num failed \n");
        return -1;
    }
    printf("get value = %d \n",ret);

    ret = 100;
    if(ioctl(fd,BROOK_IOCXNUM,&ret)<0){
        printf("exchange num failed\n");
        return -1;
    }

    printf("get vale = %d \n",ret);

    return 0;
}

