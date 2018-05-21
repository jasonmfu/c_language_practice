#include<stdio.h>

struct list {
    int data;
    struct list *next;
};

struct list listone,listtwo,listthree;


int main(){
    listone.next = &listtwo;
    listtwo.next = &listthree;

    listone.next->next->data = 1;
    printf("listthree.data = %d \n",listthree.data);
}

