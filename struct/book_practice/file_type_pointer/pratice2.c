#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *in,*out;
    char ch,infile[10],outfile[10];
    printf("input read in file's name:");
    scanf("%s",infile);
    printf("input output file's name:");
    scanf("%s",outfile);
    if((in=fopen(infile,"r"))==NULL){
        printf("can not open this file\n");
        exit(0);
    }
    if((out=fopen(outfile,"w"))==NULL){
        printf("can not open this file\n");
        exit(0);
    }

    while(!feof(in)){
        ch = fgetc(in);
        fputc(ch,out);
        putchar(ch);
    }

    putchar(10);
    fclose(in);
    fclose(out);
    return 0;
}


