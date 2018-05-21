/*************************************************************************
	> File Name: charpointpointer.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月14日 (週三) 14時42分17秒
 ************************************************************************/

#include<stdio.h>

int main(){
    char *name[]= {"Jason","BASIC","Don't werry","Forget","I don't understand"};
    char **p;
    int i;
    for(i=0;i<5;i++){
        p=name+i;
        printf("%s \n",*p);
    }
    return 0;
}
