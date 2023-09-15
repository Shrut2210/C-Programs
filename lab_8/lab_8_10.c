#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	
	float i=1,sum=0;
	
	while(i<=n){
		if(i==n){
			printf("%0.1f = ", pow(i,2));
		}
		else{
			printf("%0.1f + ", pow(i,2));
		}
		sum=sum+pow(i,2);
		i++;
	}
	printf("%f", sum);
}
