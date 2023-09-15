#include<stdio.h>

int main(){
    int n;
    printf("enter number of day (1-7) ");
    scanf("%d", &n);

    switch(n){
        case 1: printf("Sunday");
        break;

        case 2: printf("Monday");
        break;

        case 3: printf("Tuesday");
        break;

        case 4: printf("Wednesday");
        break;

        case 5: printf("Thursday");
        break;

        case 6: printf("Friday");
        break;

        case 7: printf("Saturday");
        break; 
    }
    if(n>7){
        printf("enter number between 1 to 7 ");
    }
    return 0;
}