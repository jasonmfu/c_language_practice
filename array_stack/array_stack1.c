#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int data[100];
    int length;
}

Stack(){
    this->length = 0;
    for(int i = 0;i < 100;i++){
        data[i] = 0;
    }
};

void push(int num){
    bool success = false;
    if(this->length >= 0 && this->length < 100){
        this->data[this->length] = num;
        success = true;
    }
    if(success){
        this->length++
    }
    return;
}

void pop(){
    bool success = false;
    if(this->length > 0){
        this->data[this->length - 1] = 0;
        success = true;
    }
    if(success){
        this->length --;
    }
    return;
};

int size(){
    return this->length;
}

bool isEmpty(){
    return this->length == 0;
}

bool isFull(){
    return this->length == 100;
}

int main(){
    Stack *stack;
    int select,input;


    while(1){
        printf("\nplease input a number(1~6)(if input 0 the process will be close)");
        printf("\n(1)add stack top value:");
        printf("\n(2)delete sttack top value:");
        printf("\n(3)get stack top value:");
        printf("\n(4)get stack size:");
        printf("\n(5)check if stack is empty:");
        printf("\n(6)check if stack is full:");





























