#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct student{
    int age;
    char name[10];
};
struct student lynn = {20,{'l','y','n','n','\0'}};

void new_one(struct student *one){
    one->age = 1000 + one->age;
    for(int i = 0;one->name[i] != '\0';i++){
        one->name[i] = toupper(one->name[i]);
    }
};

int main(){
    new_one(&lynn);
    printf("%d \n",lynn.age);
    printf("%s \n",lynn.name);

    return 0;
}

