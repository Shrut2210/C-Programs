#include<stdio.h>

int main(){
    int n, i, j, x=1;
    printf("enter number : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" %d ", x);
            x++;
        }
        printf("\n");
    }
}