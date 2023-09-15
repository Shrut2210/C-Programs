#include<stdio.h>

float simint(int,int,int);

int main(){
    int P,R,N;
    printf("enter amount : ");
    scanf("%d", &P);
    printf("enter rate : ");
    scanf("%d", &R);
    printf("enter year : ");
    scanf("%d", &N);

    printf("simple interest is %0.1f", simint(P,R,N));
}

float simint(int p, int r, int n){
    return p*n*r*0.01;
}