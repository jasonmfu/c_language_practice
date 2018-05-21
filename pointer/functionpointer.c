/*************************************************************************
	> File Name: functionpointer.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月13日 (週二) 16時37分53秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int max(int ,int );
    int (* p)(int,int);
    int a,b,c;
    p = max;
    printf("please enter a and b:\n");
    scanf("%d %d",&a,&b);
    c = (*p)(a,b);
    printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
    return 0;
}

int max(int x,int y){
    int z;
    if(x>y)
        z=x;
    else
        z=y;
    return(z);
}
