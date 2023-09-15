#include<stdio.h>

int max(int,int);
int min(int,int);

int main(){
    int n,m;
    printf("enter first number : ");
    scanf("%d", &n);
    printf("enter second number : ");
    scanf("%d", &m);

    printf("max is = %d\n", max(n,m));
    printf("min is = %d", min(n,m));
}

int max(int n,int m){
    if(n<m){
        return m;
    }
    else{
        return n;
    }
}
int min(int n,int m){
    if(n<m){
        return n;
    }
    else{
    return m;
    }
}