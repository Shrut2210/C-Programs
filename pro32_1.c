#include<stdio.h>

int main(){
	int a,b;
	printf("enter width -(1 to b) ");
	scanf("%d", &a);
	
	printf("enter length -(a to 16) ");
	scanf("%d", &b);
	
	if(a>=1 || a<=b || b<=16){
		printf("%d", (a*b)/2);
	}
	else{
		printf("not valid input");
	}
}
