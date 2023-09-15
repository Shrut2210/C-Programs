#include<stdio.h>

int main(){
	char n, s, into;
	printf("enter char :");
	scanf("%c", &n);
	printf("enter string : ");
	scanf(" %s", &s);
	
	printf("enter convert into i for int and f for float : ");
	scanf(" %c", &into);
	
	if(into=='i'){
		printf("%d\n", (int)n);
		printf("%d\n", (int)s);
	}
	else if(into=='f'){
		printf("%f\n", (float)n);
		printf("%f\n", (float)s);
	}
	else{
		printf("enter valid input");
	}
	return 0;
}
