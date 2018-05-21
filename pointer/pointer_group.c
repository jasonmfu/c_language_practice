/*************************************************************************
	> File Name: pointer_group.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月09日 (週五) 11時54分44秒
 ************************************************************************/

#include<stdio.h>

int main (){
    int a[10];
    int i;
/*
    printf("input 10 number \n");
    for(i = 0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        printf("%d",*(a+i));
    }
    printf("\n");
    */

    int b[3];
    int *p;
    printf("enter 3 numbers\n");
    for(i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    for(p=b;p<(b+3);p++){
        printf("%d",*p);
    }
    printf("\n");

    int c[3];
    p=c;
    printf("enter 3 numbers \n");
    for(i=0;i<3;i++){
        scanf("%d",p++);
    }
    p=c;
    for(i=0;i<3;i++,p++){
        printf("%d",*p);
    }
    printf("\n");

    return 0;
}
