#include<stdio.h>

struct book{
    char title[30];
    char author[30];
    int publicdate;
    float price;
};

int main(){
    struct book b[3];
    int i;

    for(i=0;i<3;i++){
    printf("enter book name : ");
    scanf(" %s", b[i].title);
    printf("enter author name : ");
    scanf(" %s", b[i].author);
    printf("enter publication date : ");
    scanf(" %d", &b[i].publicdate);
    printf("enter price : ");
    scanf("%f", &b[i].price);
    }

    for(i=0;i<3;i++){
        printf("title is : %s\n", b[i].title);
        printf("author name is : %s\n", b[i].author);
        printf("publication date is : %d\n", b[i].publicdate);
        printf("price is : %f\n", b[i].price);
    }
}