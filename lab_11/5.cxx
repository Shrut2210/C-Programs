#include<stdio.h>
int main(){
	int n,i,fact=1;
	printf("enter number : ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("factorial of given number is %d", fact);
}