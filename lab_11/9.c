#include<stdio.h>
#include<math.h>

int main(){
	int n,count=0,swipe,digit;
	printf("enter number :");
	scanf("%d", &n);
	int x=n%10, a=n;
	
	for(;n>0;n=n/10){
		digit = n%10;
		count++;
	}
	count=count-1;
	int y=digit;
	
	swipe=x*pow(10,count);
	swipe=swipe+a-y*pow(10,count);
	swipe=swipe-x;
	swipe=swipe+y;
	
	printf("swiping first and last digit is %d", swipe);
}
