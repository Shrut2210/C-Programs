#include<stdio.h>

int main(){
	int n,i,sum=0,j=1;
	printf("enter number  : ");
	scanf("%d", &n);
	
	for(i=0;i>=0;i=i+j){
		sum=sum+i;
		printf(" %d ", j);
	}
}

// 0+1=1 +
// 1 1 2 3 5 8 13 21 

