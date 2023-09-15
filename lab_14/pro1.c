#include<stdio.h>
int main(){
    int n,i;
    printf("enter total number of element : ");
    scanf("%d", &n);

    int num[n];
    for(i=0;i<n;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0;i<n;i++){
        printf("%d ", num[i]);
    }

    printf("\n");
    for(i=n-1;i>=0;i--){
        printf("%d ", num[i]);
    }
}