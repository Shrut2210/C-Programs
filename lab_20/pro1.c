#include<stdio.h>

struct employee{
    char name[30];
    int sar;
    int leave;
    char email[50];
    int num;
};

int main(){
    struct employee first;

    printf("enter name : ");
    scanf("%s", first.name);
    printf("enter salary : ");
    scanf("%d", &first.sar);
    printf("enter total leave : ");
    scanf("%d", &first.leave);
    printf("enter email : ");
    scanf(" %s", first.email);
    printf("enter phone num : ");
    scanf("%d", &first.num);
    

    printf("name is : %s\n ", first.name);
    printf("salary is : %d\n ", first.sar);
    printf("leave is : %d\n ", first.leave);
    printf("email is : %s\n ", first.email);
    printf("phone num is : %d\n ", first.num);

}