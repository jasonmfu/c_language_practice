/*************************************************************************
	> File Name: pointer_array.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月09日 (週五) 15時41分38秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int i,a[10]={3,0,5,8,2,5,1,8,4,8};

    printf("The original array \n");
    for(i = 0;i < 10;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    inv(a,10);

    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }
    printf("\n");

    return 0;
}

void inv (int x[],int n){
    int temp,i,j,m = (n-1)/2;
    for(i=0;i<=m;i++){
        j=n-1-i;
        temp = x[i];x[i]=x[j];x[j]=temp;
    }

    return;
}
