#include<stdio.h>
int main(){
	int x=5,y,i,r=1;
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		r=x*r;
	}
	printf("%d",r);
}
