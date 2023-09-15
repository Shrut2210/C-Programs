#include<stdio.h>
#include<math.h>

int main(){

	int n;
	printf("enter a number");
	scanf("%d", &n);

	if(n >= 18){
		printf("adult");
	}
	else{
		printf("not adult");
	}
	return 0;
}