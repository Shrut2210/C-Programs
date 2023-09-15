#include<stdio.h>
int main(){
	char n;
	scanf("%c", &n);
	
	(n>'a'&&n<'z'||n>'A'&&n<'Z')?printf("char is alphabet"):printf("char is not alphabet"); 
}
