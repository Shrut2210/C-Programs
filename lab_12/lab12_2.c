#include<stdio.h>

int main(){
    int n, i, j, sum1=0, sum2=0;
    printf("enter number : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d", j);
            sum1=sum1+j;
        }
        printf("\n");
        sum2=sum2+sum1;
    }
    printf("%d", sum2);
}