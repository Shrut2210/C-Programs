#include<stdio.h>

int main(){
	int a,b,c,smax;
	scanf("%d %d %d", &a, &b, &c);
	
	smax=(a>b&&a>c)?((b>c)?b:c):((b>a&&b>c)?((a>c)?a:c):((a>b)?a:b));
	
	printf("%d", smax);
}
