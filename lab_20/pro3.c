#include<stdio.h>

struct a1{
    char name[20];
    int num;
    float price;
    double profit;
};

union a2{
    char name[20];
    int num;
    float price;
    double profit;
};

void main(){
    struct a1 a11;
    union a2 a12;

    // printf("%ld\n", sizeof(a11.name));
    // printf("%ld\n", sizeof(a11.num));
    // printf("%ld\n", sizeof(a11.price));
    // printf("%ld\n", sizeof(a11.profit));

    printf("%ld\n", sizeof(a11));
    printf("%ld", sizeof(a12));
}