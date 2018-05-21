#include<stdio.h>
#include"test.h"

int main(){
    #if defined MACRO1
    printf("1\n");
    #else
    #if defined MACRO2
    printf("2\n");
    #else
    printf("0\n");
    #endif
    #endif

    return 0;
}




