#include<stdio.h>
int main(){
	int n;
	int sum=0;
	printf("enter a number :");
	scanf("%d", &n);
	
	while(n>0){
		sum=sum+n;
		printf("sum=%d\n", sum);
		n--;
	}
}
