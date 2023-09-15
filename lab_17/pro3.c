#include<stdio.h>
int main(){
	int *a,n,*b,m;
	printf("enter n : ");
	scanf("%d", &n);
	printf("enter m : ");
	scanf("%d", &m);
	
	a=&n;
	b=&m;
	printf("sum is = %d", *a+*b);
}
