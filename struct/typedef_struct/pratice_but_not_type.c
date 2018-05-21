#include<stdio.h>
#include<string.h>

struct student{
    int no;
    char name[10];
};

struct student *struct_call_by_address(struct student *pboy){
    pboy->no = 10;
    strcpy(pboy->name,"jason");
    printf("in function \n");
    printf("no = %d,name = %s \n",pboy->no,pboy->name);
    return pboy;
}

int main(){
    struct student boy = {20,"john"};
    struct student *pboy = 0;

    printf("before function \n");
    printf("no = %d,name = %s \n",boy.no,boy.name);
    pboy = struct_call_by_address(&boy);
    printf("after function\n");
    printf("no = %d,name = %s \n",boy.no,boy.name);
    printf("no = %d,name = %s \n",pboy->no,pboy->name);
}
    

