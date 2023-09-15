#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("enter a number for a , b, c :");
	scanf("%d %d %d", &a, &b, &c);
	
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("max = %d", max);
}
