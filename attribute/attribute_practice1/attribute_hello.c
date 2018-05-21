#include<stdio.h>
#include<stdlib.h>


static __attribute__((constructor)) void before(){
    printf("Hello");
}

static __attribute__((destructor)) void after(){
    printf("World");
}

int main(int args,char **argv){
    printf("\n ---------- \n");

    return EXIT_SUCCESS;
}
