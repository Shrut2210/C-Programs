#include<stdio.h>
int main(){
	int n,sum0=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0;
	printf("enter number : ");
	scanf("%d", &n);
	
	for(;n>0;n=n/10){
		int digit=n%10;
		
		if(digit==0){
			sum0++;
		}
		else if(digit==1){
			sum1++;
		}
		else if(digit==2){
			sum2++;
		}
		else if(digit==3){
			sum3++;
		}
		else if(digit==4){
			sum4++;
		}
		else if(digit==5){
			sum5++;
		}
		else if(digit==6){
			sum6++;
		}
		else if(digit==7){
			sum7++;
		}
		else if(digit==8){
			sum8++;
		}
		else if(digit==9){
			sum9++;
		}
	}
	printf("%d %d %d %d %d %d %d %d %d %d", sum0,sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9);
}
