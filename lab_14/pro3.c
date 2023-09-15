#include<stdio.h>
int main(){
    int n,i,ne=0,no=0;
    printf("enter total number of element : ");
    scanf("%d", &n);

    int num[n];
    for(i=0;i<n;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0;i<n;i++){
        if(num[i]%2==0){
            ne++;
        }
        else{
            no++;
        }
    }

    printf("total even numbers : %d\n", ne);
    printf("total odd numbers : %d", no);
}