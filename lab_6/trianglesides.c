#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==b&&b==c&&a==c){
		printf("Equilateral");
	}
	else if(a==b||b==c||a==c){
		printf("Isosceles");
	}
	else if(pow(c,2)==pow(a,2)+pow(b,2)){
		printf("Right angle");
	}
	else{
		printf("Scalene");
	}
}
