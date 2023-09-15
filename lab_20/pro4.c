#include<stdio.h>

struct student{
    char name[30];
    int age;
    float perc;
};

int main(){
    struct student s[5];
    int i;

    for(i=0;i<5;i++){
        printf("for %d student \n", i+1);
    printf("enter student name : ");
    scanf(" %s", s[i].name);
    printf("enter student age: ");
    scanf(" %d", &s[i].age);
    printf("enter percentage : ");
    scanf("%f", &s[i].perc);
    }

    for(i=0;i<5;i++){
        printf("name is : %s\n", s[i].name);
        printf("age is : %d\n", s[i].age);
        printf("per is : %f\n", s[i].perc);
    }
}