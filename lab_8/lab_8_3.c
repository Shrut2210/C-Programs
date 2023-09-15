#include<stdio.h>

int main(){
    int a,b;
    printf("enter number for a : ");
    scanf("%d", &a);
    printf("enter number for b :");
    scanf("%d", &b);

    int i=a;
    while(i<=b){
        if(i%2==0){
            printf("%d\n", i);
        }
        i++;
    }
}