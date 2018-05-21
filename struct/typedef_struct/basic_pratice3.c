#include<stdio.h>

struct staff{
    int id;
    int age;
};

typedef struct {
    int id;
    int age;
}student;

void main(){
    int i;
    //============================
    //struct first define usage

    struct staff sta[2]={
        [0] = {.id = 100001,.age = 22,},
        [1] = {.id = 100002,.age = 23,},
    };
    //============================
    //struct another define usage

    student stu[2]={
        [0] = {.id = 903135,.age = 19,},
        [1] = {.id = 903137,.age = 20,},
    };

    printf("\n");

    for(i=0;i<2;i++){
        printf("struct student[%d].id = %d\n",i+1,stu[i].id);
        printf("struct student[%d].age = %d\n",i+1,stu[i].age);
    }
}

