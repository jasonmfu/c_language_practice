#include<stdio.h>

struct dog{
    char name[10];
    char breed[10];
    int age;
    char color[10];
};



void main(){
    struct dog my_dog ={"tyke","mix",1,"white"};
    struct dog *ptr_dog;
    ptr_dog = &my_dog;

    printf("name:%s\n",ptr_dog->name);
    printf("breed:%s\n",ptr_dog->breed);
    printf("age:%d\n",ptr_dog->age);
    printf("color:%s\n",ptr_dog->color);

    strcpy(ptr_dog->name,"jack");

    ptr_dog->age++;
    strcpy(ptr_dog->color,"black");

    printf("new name:%s\n",ptr_dog->name);
    printf("new age:%d\n",ptr_dog->age);
    printf("new color:%s\n",ptr_dog->color);


}
