#include<stdio.h>

struct student{
    int age;
    char name[10];
};

struct student Twice[3] = 
{
    5,{'T','o','n','y','\0'},
    9,{'B','o','b','\0'},
    20,{'J','a','s','o','n','\0'}
};

int main(){

    struct student *One = Twice;

    for(int i = 0;i < 3;i++){
        printf("%d \n",One[i].age);
        printf("%s \n",One[i].name);
    }
    return 0;
}

