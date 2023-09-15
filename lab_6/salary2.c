#include<stdio.h>

int main(){
	float n,HRA,DA;
	printf("enter salary : ");
	scanf("%f", &n);

	if(n>=10000 && n<20000){
		HRA=n*0.10;
		DA=n*0.80;
		printf("Growth salary is %f", n+HRA+DA);
	}
	else if(n>=20000 && n<30000){
		HRA=n*0.25;
		DA=n*0.90;
		printf("Growth salary is %f", n+HRA+DA);
	}
	else{
		HRA=n*0.30;
		DA=n*0.95;
		printf("Growth salary is %f", n+HRA+DA);
	}
}