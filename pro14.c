#include<stdio.h>

int main(){
	int n,i,j;
	printf("enter number for line :");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i%2==0){			
			printf("#");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
