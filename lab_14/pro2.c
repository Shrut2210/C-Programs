#include<stdio.h>
int main(){
    int n,i,np=0,nn=0;
    printf("enter total number of element : ");
    scanf("%d", &n);

    int num[n];
    for(i=0;i<n;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0;i<n;i++){
        if(num[i]>0){
            np++;
        }
        else{
            nn++;
        }
    }

    printf("total positive numbers : %d\n", np);
    printf("total negative numbers : %d", nn);
}