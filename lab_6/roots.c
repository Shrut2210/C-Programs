#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d;
	scanf("%f %f %f", &a, &b, &c);
	
	d=pow(b,2);
	printf("%f\n", ((-b+(sqrt(pow(b,2)-4*a*c)))/2));
	printf("%f", ((-b-(sqrt(pow(b,2)-4*a*c)))/2));
}
