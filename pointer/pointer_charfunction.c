/*************************************************************************
	> File Name: pointer_charfunction.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月13日 (週二) 14時20分13秒
 ************************************************************************/

#include<stdio.h>

int main(){
    char *a= "I am a man";
    char b[]= "You are a man too";
    char *p = b;

    printf("p = %s \n",p);
    printf("*p = %c \n",*p);
    p++;
    printf("p = %s \n",p);
    printf("*p = %c \n",*p);
    printf("&p = %d \n",&p);
    printf("a = %s \n",a);
    
    printf("string a = %s\n string b = %s\n",a,b);
    printf("copy string a to string b:\n");
    p--;
    copy_string(a,p);
    printf("\nstring a = %s\nstring b = %s\n",a,b);
    copy_string2(a,p);
    printf("\nstring a = %s\nstring b = %s\n",a,b);


    return 0;

}

void copy_string(char *from,char *to){
    for(;*from!='\0';from++,to++){
        *to = *from;
    }
    *to='\0';
}

void copy_string2(char *from,char *to){
    while((*to = *from)!='\0'){
        to++;
        from++;
    }
}

void copy_string3(char *from,char *to){
    while(*from !='\0'){
        *to++ = *from++;
    }
    *to = '\0';
}
