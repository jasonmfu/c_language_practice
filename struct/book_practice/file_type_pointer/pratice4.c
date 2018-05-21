#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char str[3][10];
    int i=0;
    if((fp=fopen("/home/jason/test/c_practice/struct/book_practice/file_type_pointer/file.txt","r"))==NULL){
        printf("can't open file !\n");
        exit(0);
    }
    while(fgets(str[i],10,fp)!=NULL){
        printf("%s",str[i]);
        i++;
    }

    fclose(fp);
    return 0;
}
