#include<stdio.h>
void prime(int);
void arm(int);
void perfect(int);

int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    prime(n);
    arm(n);
    perfect(n);
}

void prime(int a){
    int i;
    for(i=2;i<a;i++){
        if(a%i==0){
            printf("number is not prime\n");
        }
        else{
            printf("number is prime\n");
        }
    }
}
