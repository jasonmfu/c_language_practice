#include<stdio.h>
#include<string.h>

typedef struct {
    int no;
    char name[10];
}student, *pstudent;


pstudent struct_call_by_address(pstudent pboy){
    pboy->no = 10;
    strcpy(pboy->name, "oomusou");
    printf("in function:\n");
    printf("no=%d, name=%s\n", pboy->no, pboy->name);
    return pboy;
}

int main (){
    student boy = {20,"john"};
    pstudent pboy = 0;
    printf("before function\n");
    printf("no=%d, name = %s\n",boy.no,boy.name);
    pboy = struct_call_by_address(&boy);
    printf("after function\n");
    printf("no = %d,name = %s\n",boy.no,boy.name);
    printf("no = %d,name = %s\n",pboy->no,pboy->name);
}
