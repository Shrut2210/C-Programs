#include<stdio.h>

int main(){

    printf("odd between 1 to 10 with while\n");
    int i=1;
    while(i<=10){
        if(i%2!=0){
        printf("%d\n", i);
        }
        i++;
    }
    printf("\n");

    printf("odd between 1 to 10 with do while\n");
    i=1;
    do{
        if(i%2!=0){
        printf("%d\n", i);
        }
        i++;
    }while(i<=10);
    printf("\n");

    int n;
    printf("enter number : ");
    scanf("%d", &n);

    printf("odd between 1 to n with while\n");
    i=1;
    while(i<=n){
        if(i%2!=0){
        printf("%d\n", i);
        }
        i++;
    }
    printf("\n");

    printf("odd between 1 to n with do while\n");
    i=1;
    do{
        if(i%2!=0){
        printf("%d\n", i);
        }
        i++;
    }while(i<=n);
    printf("\n");
}