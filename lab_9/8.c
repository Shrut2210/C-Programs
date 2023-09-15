#include<stdio.h>
int main(){
	int n, i,digit;
	scanf("%d", &n);
	
	while(n>0){
		digit=n%10;
		switch(digit){
			case 0: printf("zero");
			case 1: printf("one");
			case 2: printf("two");
			case 3: printf("three");
			case 4: printf("four");
			case 5: printf("five");
			case 6: printf("six");
			case 7: printf("seven");
			case 8: printf("eight");
			case 9: printf("nine");
		}
		n=n/10;
	}
	
}
