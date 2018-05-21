#include<stdio.h>

struct my_structure{
    char name[20];
    int num;
    int rank;
};

struct my_structure test = {"structure test",2,1};

int main(){
    struct my_structure *ptr;
    ptr = &test;

    printf("name:%s \n",ptr->name);
    printf("number:%d \n",ptr->num);
    printf("rank:%d \n",ptr->rank);

    return 0;
}

