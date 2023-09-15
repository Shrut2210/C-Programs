#include<stdio.h>
int main(){
	int n,i,count=0,j,x=0;
	printf("enter element of array : ");
	scanf("%d", &n);
	
	int array[n];
	for(i=0;i<n;i++){
		printf("enter element : ");
		scanf("%d", &array[i]);
	}
	
	printf("duplicate numbers are : ");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(array[i]==array[j]){
				count++;
				break;
			}
		}
	}
	printf("%d", count);
}
