#include<stdio.h>

int main(){
    int n, i, j;
    printf("enter number : ");
    scanf("%d", &n);

    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            printf(" *");
        }
        printf("\n");
    }
}