#include<stdio.h>
int main(){
	int n,i;
	printf("enter number : ");
	scanf("%d", &n);
	
	int num1[n], num2[n];
	for(i=0;i<n;i++){
		printf("enter %d element : ", i+1);
		scanf("%d", &num1[i]);
	}
	for(i=0;i<n;i++){
		num2[i]=num1[i];
	}
	for(i=0;i<n;i++){
		printf("%d ", num2[i]);
	}
	return 0;
}
