#include<stdio.h>
int sum(int, int);

int main(){
    int n,m;
    printf("enter first element : ");
    scanf("%d", &n);
    printf("enter second element : ");
    scanf("%d", &m);

    printf("sum = %d", sum(n,m));
}

int sum(int n, int m){
    return n+m;
}