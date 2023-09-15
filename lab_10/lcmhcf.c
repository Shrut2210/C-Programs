#include<stdio.h>
int main(){
	int a,b;
	printf("enter first element : ");
	scanf("%d", &a);
	printf("enter second element : ");
	scanf("%d", &b);
	
		/*if(a%b==0){
			printf("LCM is %d", a);
			printf("\nHCF is %d,", b);
		}
		else if(b%a==0){
			printf("LCM is %d", b);
			printf("\nHCF is %d", a);
		}
		else if(a%b!=0){
			
		}*/
		
		
		int num1,num2,temp,hcf,lcm;
		num1=a;
		num2=b;
		
		while(num2!=0){
			temp=num2;
			num2=num1%num2;
			num1=temp;
		}
		hcf=num1;
		lcm=(a*b)/hcf;
		
		printf("%d", hcf);
		printf("\n%d", lcm);
		
}
