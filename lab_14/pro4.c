#include<stdio.h>
int main(){
    int n,i,max=0,min=0,sum=0;
    float ave;
    printf("enter total number of element : ");
    scanf("%d", &n);

    int num[n];
    for(i=0;i<n;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+num[i];

        if(num[i]<min){
            min=num[i];
        }

        if(num[i]>max){
            max=num[i];
        }
    }

    ave=(float)sum/n;

    printf(" sum = %d\n ave = %f\n max = %d\n min = %d", sum, ave, max, min);

}