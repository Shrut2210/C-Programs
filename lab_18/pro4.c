#include<stdio.h>

float max(float,float,float);

int main(){
    float n,m,k;
    printf("enter first number : ");
    scanf("%f", &n);
    printf("enter second number : ");
    scanf("%f", &m);
    printf("enter third number : ");
    scanf("%f", &k);

    printf("max is = %f\n", max(n,m,k));
}

float max(float n,float m, float k){
    if(n>m){
        if(n>k){
            return n;
        }
        else{
            return k;
        }
    }
    else{
        if(m>k){
            return m;
        }
        else{
            return k;
        }
    }
}