#include<stdio.h>

int main(){
    int n, i, j,x=65;
    printf("enter number : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",x);
                x++;
            }
            else{
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}