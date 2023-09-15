#include<stdio.h>
void swipe(int, int);
void swipep(int *n,int *m);
int main(){
    int N,M;
    printf("enter first number : ");
    scanf("%d", &N);
    printf("enter second number : ");
    scanf("%d", &M);
    printf("\n");
    swipe(N,M);
    printf("\n");
    swipep(&N,&M);
}

void swipe(int n,int m){
    int k;
    k=n;
    n=m;
    m=k;
    printf("%d %d", n,m);
}

void swipep(int *n,int *m){
    int a,b,*c;
    n=&a;
    m=&b;

    *c=*n;
    *n=*m;
    *m=*c;
    printf("\n%d %d", *n,*m);
}