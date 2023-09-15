#include<stdio.h>

int main(){
	char n;
	printf("enter charcter : ");
	scanf("%c", &n);

	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
		printf("%c is vowel", n);
		return 0;
	}
	printf("%c is consonant", n);
	return 0;
}
