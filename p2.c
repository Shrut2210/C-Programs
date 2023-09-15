#include<stdio.h>

int main(){
	int n,i,j,k;
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("   ");
		}
		for(k=1;k<=2*i-1;k++){
		if(k%2==0){
			printf("   ");
		}
		else{
			printf(" %d ", i);
		}
	}
		printf("\n");
	}
	for(i=n;i>0;i--){
		for(j=1;j<=n-i;j++){
			printf("   ");
		}
		for(k=1;k<=2*i-1;k++){
		if(k%2==0){
			printf("   ");
		}
		else{
			printf(" %d ", i);
		}
	}
		printf("\n");
	}

}
