/*************************************************************************
	> File Name: pointer_char.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月13日 (週二) 11時40分14秒
 ************************************************************************/

#include<stdio.h>

int main(){
    char a[] = "my name is Jason",b[20];
    int i;

    for(i=0;*(a+i)!='\0';i++)
        *(b+i)=*(a+i);
    *(b+i)='\0';

    printf("string a is:%s\n",a);
    printf("string b is:");

    for(i = 0;b[i]!='\0';i++)
        printf("%c",b[i]);
    printf("\n");

    char *p1,*p2;
    p1 = a;
    p2 = b;
    for(;*p1!='\0';p1++,p2++)
        *p2 = *p1;
    *p2 = '\0';
    printf("string a is:%s\n",a);
    printf("string b is:%s\n",b);

    return 0;
}
