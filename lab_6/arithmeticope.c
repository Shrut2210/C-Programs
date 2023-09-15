#include<stdio.h>

int main(){
	double a,b;
	printf("enter number for a and b: ");
	scanf("%lf %lf", &a, &b);
	char ope;
	printf("enter operation: ");
	scanf(" %c", &ope);

	if(ope=='+'){
	printf("Addition = %lf", a+b);
	}
	else if(ope=='-'){
	printf("Subtraction = %lf", a-b);
	}
	else if(ope=='*'){
	printf("Multiplication = %lf", a*b);
	}
	else if(ope=='/'){
	printf("Division = %lf", a/b);
	}
	else{
		printf("Not valid input");
	}
}