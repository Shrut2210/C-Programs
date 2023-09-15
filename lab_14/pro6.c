#include<stdio.h>

int main(){
    int n,i,sum=0,count=0;
    float ave;

    printf("total number of element : ");
    scanf("%d", &n);

    int num[n];
    for(i=0;i<n;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+num[i];
    }

    ave=(float)sum/n;

    for(i=0;i<n;i++){
        if(num[i]>ave){
            count++;
        }
    }
    printf("total numbers : %d", count);
}