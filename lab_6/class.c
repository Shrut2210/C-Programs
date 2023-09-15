#include<stdio.h>

int main(){
	float a,b,c,d,e,f;
	printf("enter marks for sub1 :");
	scanf("%f", &a);
	printf("enter marks for sub2 :");
	scanf("%f", &b);
	printf("enter marks for sub3 :");
	scanf("%f", &c);
	printf("enter marks for sub4 :");
	scanf("%f", &d);
	printf("enter marks for sub5 :");
	scanf("%f", &e);
	
	f=(a+b+c+d+e)/5;
	printf(" percentage = %f\n", (a+b+c+d+e)/5);
	
	if(f<35){
		printf("Fail class");
	}
	else if(f<45 && f>=35){
		printf("Pass class");
	}
	else if(f<60 && f>=45){
		printf("Second class");
	}
	else if(f<70 && f>=60){
		printf("First class");
	}
	else{
		printf("Distinaction");
	}
}
