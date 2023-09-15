#include<stdio.h>
int main(){
	int x,y,i,multi=1;
	printf("enter base : ");
	scanf("%d", &x);
	printf("enter exponant : ");
	scanf("%d", &y);
	
	for(i=1;i<=y;i++){
		multi=multi*x;
	}
	printf("power of given number is %d", multi);
}