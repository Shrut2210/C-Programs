#include<stdio.h>
int main(){
	int n,x=0,y=1,i,sum=0;
	printf("enter base : ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		sum = sum + x;
		printf("%d ", sum);
		x=y;
		y=sum;
		sum=y;
	}

}
