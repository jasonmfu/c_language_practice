/*************************************************************************
	> File Name: ioctl_screen.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月14日 (週三) 17時12分26秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<linux/fb.h>
#include<sys/mman.h>

int main(){
    unsigned char *fb0_buf = NULL;
    int fbfd = 0;
    struct fb_var_screeninfo vinfo;
    struct fb_fix_screeninfo finfo;
    long int screensize_jason = 0,screensize_david = 0;
    char *fbp = 0;
    int x = 0,y = 0;
    long int location = 0;

    //Open the file for read and write
    fbfd = open("/dev/fb0",O_RDWR);//open framebuffer get fd
    if(!fbfd){
        printf("Error can't open framebuffer device.\n");
        return 1;
    }

    printf("The framebuffer device open seccessfully\n");
    
    //取得顯卡的fix屬性
    if(ioctl(fbfd,FBIOGET_FSCREENINFO,&finfo)){
        printf("Error reading fixed information\n");
        return 1;
    }

    //取得顯卡的var屬性
    if(ioctl(fbfd,FBIOGET_VSCREENINFO,&vinfo)){
        printf("Error reading variable information\n");
        return 1;
    }

    //vinfo.xres 為x軸解析度 vinfo.yres 為y軸解析度 bits_per_pixel為每個像素的bit數
    printf("%dx%d %dbpp\n",vinfo.xres,vinfo.yres,vinfo.bits_per_pixel);

    //calculate what size sereen's need ,in byte units,so that memory maped to userspace
    screensize_jason = vinfo.xres*vinfo.yres*vinfo.bits_per_pixel/8;
    //screensize_david = (vinfo.xres * vinfo.bits_per_pixel / 8) * vinfo.yres;

    //mapping to userspace
    fbp = (char*)mmap(0,screensize_jason,PROT_READ|PROT_WRITE,MAP_SHARED,fbfd,0);


    if((int)fbp == -1){
        printf("Error:failed to map framebuffer device to memory.\n");
        return 1;
    }
    printf("The framebuffer device was mapped to memory successfully\n");

    x = 100;
    y = 100;
/*
    for(y = 100;y < 300;y++)
        for(x = 100;x < 300;x++){
            //xoffset-offset from virtual to visible resolution 可視區域的偏移
            //yoffset //
            //line_length-legth of a line in bytes 一行的字節表示
            location = (x+vinfo.xoffset)*(vinfo.bits_per_pixel/8) + (y + vinfo.yoffset) * finfo.line_length;

            if(vinfo.bits_per_pixel == 32){
                *(fbp + location) = 100;                   //someblue
                *(fbp + location + 1) = 15 + (x - 100)/2;  //A little green
                *(fbp + location + 2) = 200 - (y - 100)/5; //A lot of red
                *(fbp + location + 3) = 0;                 //No transparency
            }
        }*/


    for(y = 0;y < 1080;y++)
        for(x = 0;x < 1920;x++){

            location = (x+vinfo.xoffset)*(vinfo.bits_per_pixel/8) + (y + vinfo.yoffset) * finfo.line_length;

            
            if(vinfo.bits_per_pixel == 32){
                *(fbp + location) = 100;                   //someblue
                *(fbp + location + 1) = 30;  //A little green
                *(fbp + location + 2) = 0; //A lot of red
                *(fbp + location + 3) = 20;                 //No transparency
            }
        }
        
        for (int j = 100; j < 300 ; j++) {
            for(int i = 100; i < 300; i += 1) {
                location = (i + vinfo.xoffset) * (vinfo.bits_per_pixel/8) + (y+vinfo.yoffset) * finfo.line_length;

                if(vinfo.bits_per_pixel == 32){
                    fbp[(j  + i) * 4 + 0] = 0xB40;
                    fbp[(j  + i) * 4 + 1] = 0x53;
                    fbp[(j  + i) * 4 + 2] = 0x00;
                    fbp[(j  + i) * 4 + 3] = 0x00;
                }
                // hal_fb0_buf[(j * screen_info.xres + i) * (screen_info.bits_per_pixel / 8) + 3] = Data[3];
                
            }
        }
        

    munmap(fbp,screensize_jason);
    close(fbfd);
    return 0;
}

