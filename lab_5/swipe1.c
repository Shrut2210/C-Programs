#include<stdio.h>

int main(){
	int a,b;
	printf("enter a number of a :");
	printf("enter a number of b :");
	scanf("%d %d", &a, &b);

	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n%d \n%d", a, b);
}