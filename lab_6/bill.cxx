#include<stdio.h>
#include<math.h>

int main(){
    float n;
    float price, tax, total;
    printf("Enter a Unit _");
    scanf("%f",&n);
    
    if(n<=50){
        price =n*0.50;
        printf("Price = %f\n", price);
    }
    else if (n<=150){
        price= 50*0.50 + (n-50)*0.75;
        printf("price = %f\n", price);
    }
    else if (n<=250){
        price=50*0.50 + 100*0.75 + (n-150)*1.20;
        printf("price = %f\n", price);
    }
    else {
        price=50*0.50 + 100*0.75 + 100*1.20 + (n-250)*1.50;
        printf("price = %f\n", price);
    }
    
    tax= price*0.20;
    total= tax + price;
    printf("total bill : %f", total);
    
    return 0;
}