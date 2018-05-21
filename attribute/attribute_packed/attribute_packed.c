#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[7];
    uint32_t id;
    char subject[5];
}

int main(int argc,char **argv){
    printf("atudent size = %d \n",sizeof(student));
}
