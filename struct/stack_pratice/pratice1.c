#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;

Node* creates(void);
int isEmpty(Node*);
int stacktop(Node*);
Node* add(Node*,int);
Node* delete(Node*);
void list(Node*);


int main(void){
    Node *sTop;
    int input ,select;

    sTop = creates();

    while(1){
        printf("\n\nplease input a number(1~4)(-1 is close process):");
        printf("\n(1)input to stack top");
        printf("\n(2)show the stack top");
        printf("\n(3)delete stack top's value");
        printf("\n(4)show the all stack's value");
        printf("\n\$c>");

        scanf("%d",&select);

        if(select == -1){
            break;
        }

        switch(select){
            case 1:
                printf("\ninput value");
                scanf("%d",&input);
                sTop = add(sTop, input);
                break;
            case 2:
                printf("\nstack top value = %d",stacktop(sTop));
                break;
            case 3:
                sTop = delete(sTop);
                break;
            case 4:
                list(sTop);
                break;
            default:
                printf("\ninput number error");
        }
    }
    printf("\n");

    return 0;
}

Node* creates(){
    return NULL;
}

int isEmpty(Node* top){
    return (top == NULL);
}

int stacktop(Node* top){
    if(top == NULL){
        printf("\nstack top is NULL");
        return NULL;
    }
    return top->data;
}

Node* add(Node* top,int item){
    Node* newnode;
    newnode = (Node*) malloc(sizeof(Node));

    if(newnode == NULL){
        printf("\n memory distribute error");
        exit(1);
    }
    newnode->data = item;
    newnode->next = top;
    top = newnode;

    return top;

}

Node* delete(Node* top){
    Node* tmpnode;
    
    tmpnode = top;
    if(tmpnode == NULL){
        printf("\nstack is NULL");
        return NULL;
    }
    top == top->next;
    free(tmpnode);

    return top;
}

void list(Node* top){
    Node* tmpnode;
    tmpnode = top;

    printf("\nstack's value:");

    while(tmpnode != NULL){
        printf("\n%d",tmpnode->data);
        tmpnode = tmpnode->next;
    }
    
}




