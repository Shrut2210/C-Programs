#include<stdio.h>
int main(){
	int n,search,i;
	printf("enter number of element : ");
	scanf("%d", &n);
	
	int array[n];
	for(i=0;i<n;i++){
		printf("enter %d element : ", i+1);
		scanf("%d", &array[i]);
	}
	
	printf("enter number for search : ");
	scanf("%d", &search);
	
	for(i=0;i<n;i++){
		if(search==array[i]){
			printf("search element is %d and its position is %d", array[i],i+1);
			break;
		}
	}
	
	return 0;
}
