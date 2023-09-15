#include<stdio.h>
int main(){
	int n;
	int sum=0;
	printf("enter number :");
	scanf("%d", &n);
	
	while(n>0){
		if(n%2==0){
			sum=sum+n;
		}
		else{
			sum=sum+n;
		}
		printf("sum = %d\n", sum);
		n--;
	}
}
