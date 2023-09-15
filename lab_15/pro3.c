#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("enter number :");
	scanf("%d", &n);
	
	int num[n];
	for(i=0;i<n;i++){
		printf("enter %d element : ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=0;i<n;i++){
		if(num[i]%3==0){
			count++;
		}
	}
	printf("total numbers which are divisible by 3 are : %d\n", count);
	
	for(i=0;i<n;i++){
		if(num[i]%3==0){
			printf("%d,",num[i]);
		}
	}
	printf("\b");
	return 0;
}
