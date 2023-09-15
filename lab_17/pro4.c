#include<stdio.h>
int main(){
	int *a,n,*b,m;
	printf("enter n : ");
	scanf("%d", &n);
	printf("enter m : ");
	scanf("%d", &m);
	
	a=&n;
	b=&m;
	printf("without swaping\n");
	printf("n is : %d\n", *a);
	printf("m is : %d\n", *b);
	
	a=&m;
	b=&n;
	printf("with swap \n");
	printf("n is : %d\n", *a);
	printf("m is : %d", *b);
}
