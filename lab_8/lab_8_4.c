#include<stdio.h>

int main(){
    int n,sum=0;
    printf("enter number for n : ");
    scanf("%d", &n);

    int i=1;
    while(i<=n){
        sum=sum+i;
        if(i==n){
            printf("%d", sum);
        }
        else{
        printf("%d + ",sum);
        }
        i++;
    }
    printf(" = %d", sum);
}