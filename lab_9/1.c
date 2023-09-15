#include<stdio.h>
int main(){
	int n,i=1,sumo=0,sume=0;
	scanf("%d", &n);
	
	while(i<=n){
		if(i%2==0){
			sume=sume+i;
			printf(" - %d ", i);
		}
		else{
			sumo=sumo+i;
			if(i==1){
				printf("%d ", i);
			}
			else{
				printf(" + %d ", i);
			}
		}
		i++;
	}
	printf(" = %d", (sumo-sume));
}
