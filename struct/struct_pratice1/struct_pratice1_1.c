#include<stdio.h>
#include<stdlib.h>

int main(int argv,char **argc){

    struct Date{
        int month;
        int day;
        int year;
    };


    struct Student{
        int num;
        char name[20];
        char sex;
        int age;
        char addr[30];
        struct Date birthday; //number birthday is below Date types
    }student1 = {10101,"Li Lin",'M',24,"123 Beijing Road"},student2; // = struct Student student1,studen2;
    printf("NO.%1d\n name:%s\n sex:%c\n address:%s\n",student1.num,student1.name,student1.sex,student1.addr);
}


