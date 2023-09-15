#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    char ope;
    scanf(" %c", &ope);

    switch(ope){
        case '+': printf("sum = %d", (a+b));
        break;

        case '-': printf("substraction = %d", (a-b));
        break;

        case '*': printf("multiplication = %d", (a*b));
        break;

        case '/': printf("division = %d", (a/b));
        break;
    }

}