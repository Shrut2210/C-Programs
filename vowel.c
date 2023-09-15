#include<stdio.h>

int main(){
	char n;
	printf("enter any character :");
	scanf("%c", &n);
	
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'){
		printf("character is vowel");
	}
	else{
		printf("character is consonant");
	}
}
