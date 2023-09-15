#include<stdio.h>

int main(){
	int a,b,c;
	printf("enter a number : ");
	scanf("%d", &a);
	
	b=a<<1;
	c=a>>1;
	printf("\nMultiplication by 2 is : %d", b);
	printf("\nDivide by 2 is : %d", c);
}