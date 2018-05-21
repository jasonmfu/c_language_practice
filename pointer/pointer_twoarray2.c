/*************************************************************************
	> File Name: pointer_twoarray2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年03月13日 (週二) 09時27分25秒
 ************************************************************************/

#include<stdio.h>

int main(){
    float score[3][4] = {{65,67,70,60},{58,87,90,81},{90,99,100,98}};
    printf("score[0][0] = %f \n",score[0][0]);
    printf("**score = %f\n",**score);
    printf("*(*(score + 2)+1) = %f \n",*(*(score +2)+1));
    average(score,12);
    search(score,2);
    search_fail(score,3);


    return 0;

}

void average(float *p,int n){
    float *p_end;
    float sum = 0,aver;
    printf("*p = %f \n",*p);
    printf("p = %d \n",p);

    p_end = p+n-1;
    for(;p<=p_end;p++)
        sum=sum+(*p);
    aver=sum/n;
    printf("average=%4.3f\n",aver);
}

void search(float (*p)[4],int n){
    int i;
    printf("The score of No.%d are:\n",n);
    for(i=0;i<4;i++)
        printf("%5.2f ",*(*(p+n)+i));
    printf("\n");
}

void search_fail(float (*p)[4],int n){
    int i,j,flag;
    for(j=0;j<n;j++){
        flag = 0;
        for(i=0;i<4;i++)
            if(*(*(p+j)+i)<60)
                flag = 1;

        if(flag == 1){
            printf("No.%d failes,his score are: \n",j+1);
            for(i=0;i<4;i++){
                printf("%5.1f",*(*(p+j)+i));
            }
            printf("\n");
        }
    }
}
