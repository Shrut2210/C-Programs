#include<stdio.h>

int main(){
    int n, ne=0, no=0,i=1;

    while(i<=10){
        printf("enter element : \n");
        scanf("%d", &n);

        if(n%2==0){
            ne++;
        }
        else{
            no++;
        }
        i++;
    }
    printf("total even numbers = %d\n", ne);
    printf("total odd numbers = %d\n", no);
}