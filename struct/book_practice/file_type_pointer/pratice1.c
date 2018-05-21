#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE * fp;
    char ch,filename[10];
    printf("please input the file name: ");
    scanf("%s",filename);
    if((fp=fopen(filename,"w"))==NULL){
        printf("can not open this file");
        exit(0);
    }
    ch = getchar();
    printf("please input prepare save the memory's data(use # to end):");
    ch = getchar();
    while(ch!='#'){
        fputc(ch,fp);
        putchar(ch);
        ch = getchar();
    }

    fclose(fp);
    putchar(10);
    return 0;
}
