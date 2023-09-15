#include<stdio.h>

int main(){
	int n;
	printf("enter ascii decimal value :");
	scanf("%d", &n);
	
	if(n>64 && n<91){
		printf("Given number reprents Upper Case character");
		printf("\n%c", n);
	}
	else if(n>96 && n<123){
		printf("Given number reprents Lower Case character");
	}
	else if(n>47 && n<58){
		printf("Given number %c reprents Hexadigit code", n);
	}
	else{
		printf("Given number %c reprents Special Symbol", n);
	}
}