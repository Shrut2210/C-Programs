#include<stdio.h>

void fibbo(int);

int main(){
    int n;
    printf("enter number of element : ");
    scanf("%d", &n);

    fibbo(n);
}

void fibbo(int n){
    int x=0,y=1,sum=0,i;
    for(i=1;i<=n;i++){
        sum=sum+x;
        printf("%d ", sum);
        x=y;
        y=sum;
        sum=y;
    }
}