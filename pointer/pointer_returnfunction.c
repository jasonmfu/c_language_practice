/*************************************************************************
	> File Name: pointer_returnfunction.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月14日 (週三) 10時12分43秒
 ************************************************************************/

#include<stdio.h>

int main(){
    float score[][4]={{60,70,80,90},{56,89,67,88},{45,78,90,66}};
    float *search(float (*pointer)[4],int n);
    float *search_fail(float(*pointer)[4]);
    float *p;
    int i,j,k;
    printf("enter the number of student:");
    scanf("%d",&k);
    printf("The score of No.%d are:\n",k);

    p=search(score,k);
    for(i=0;i<4;i++)
        printf("%5.2f\t",*(p+i));
    printf("\n");


    for(i=0;i<3;i++){
        p = search_fail(score+i);
        if(p==*(score+i)){
            printf("No.%d score:",i);
            for(j=0;j<4;j++)
                printf("%5.2f ",*(p+j));
            printf("\n");
        }
    }

    return 0;
}

float *search(float(*pointer)[4],int n){
    float *pt;
    pt = *(pointer + n);
    return(pt);
}

float *search_fail(float (*pointer)[4]){
    int i = 0;
    float *pt;
    pt = NULL;
    for(;i<4;i++)
        if(*(* pointer+i)<60)pt=*pointer;
    return(pt);
}
