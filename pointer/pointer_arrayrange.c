/*************************************************************************
	> File Name: pointer_arrayrange.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月09日 (週五) 16時32分08秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int i,*p,a[10]={1,7,3,8,3,0,3,4,2,1};
    p = a;

    printf("original array \n");
    for(i = 0;i<10;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    sort(p,10);
    for(p=a,i=0;i<10;i++){
        printf("%d",*p);
        p++;
    }
    printf("\n");
    return 0;

}

void sort(int *x,int n){
    int i,j,k,t;
    for(i=0;i<n-1;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(*(x+j)>*(x+k)){
                k=j;
            }
        }
        if(k!=i){
            t=*(x+i);
            *(x+i)=*(x+k);
            *(x+k)=t;
        }
    }
}
