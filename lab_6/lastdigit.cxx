#include<stdio.h>

int main(){
	int n,digit;
	printf("enter any number (with min 3 digit) : ");
	scanf("%d", &n);
	
	digit=n%10;
	
	if(digit%2==0){
		printf("last digit is evan");
	}
	else{
		printf("last digit is odd");
	}
}
	