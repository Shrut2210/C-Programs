#include<stdio.h>

int main(){
	int n;
	printf("enter number of n :");
	scanf("%d", &n);

	if(n%2==0){
		printf("number is even");
	}
	else{
		printf("number is odd");
	}
}