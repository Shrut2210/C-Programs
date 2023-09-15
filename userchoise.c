#include<stdio.h>

int main(){
	int a,b;
	printf("enter number of a and b : ");
	scanf("%d %d", &a,&b);
	char*str = "choice";
	printf("enter choice for perfomance :");
	
	if(choice=="addition"){
		printf(" sum = %d", a+b);
	}
	if(choice=="subtraction"){
		printf(" sub = %d", a-b);
	}
	if(choice=="multiplication"){
		printf(" multi =%d", a*b);
	}
	if(choice=="division"){
		printf(" div = %d", a/b);
	}
}
