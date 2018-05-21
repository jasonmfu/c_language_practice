#include<stdio.h>
#include<stdlib.h>

__attribute__((constructor(101))) void pre_proc_1(void){
    printf("\n %d pre_proc_1 \n",__LINE__);
}

__attribute__((destructor(101))) void end_proc_1(void){
    printf("\n %d end_proc_1 \n",__LINE__);
}

__attribute__((constructor(102))) void pre_proc_2(void){
    printf("\n %d pre_proc_2 \n",__LINE__);
}

__attribute__((destructor(102))) void end_proc_2(void){
    printf("\n %d end_proc_2 \n",__LINE__);
}

int main(int args, char **argv){
    return EXIT_SUCCESS;
}
