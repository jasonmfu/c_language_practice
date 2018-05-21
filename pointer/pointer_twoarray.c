/*************************************************************************
	> File Name: pointer_twoarray.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月09日 (週五) 17時46分46秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int a[3][3]={3,1,5,12,42,23,0,1,2};
    int *p;

    printf("%d,%d \n",&a[1][2],*(a+1)+2);
    printf("%d,%d \n",a[1][2],*(*(a+1)+2));
    printf("%d,%d \n",*a[0]+2,*(*(a+0)+2));

    for(p=a[0];p<a[0]+9;p++){
        if((p-a[0])%3==0){
            printf("\n");
        }
        printf("%4d",*p);
    }
    printf("\n");

    int b[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int (*p1)[4],i,j;
    p1 = b;
    printf("please enter row and colum:");
    scanf("%d %d",&i,&j);
    printf("a[%d,%d]=%d\n",i,j,*(*(p1+i)+j));


    return 0;
}
