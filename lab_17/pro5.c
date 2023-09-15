#include<stdio.h>
int main(){
	int n,i;
	printf("enter size of array : ");
	scanf("%d", &n);

	int *array[n], array1[n];
	array[n]=&array1[n];
	
	for(i=0;i<n;i++){
		printf("enter %d element : ", i+1);
		scanf("%d", &array1[i]);
		array[i]=&array1[i];
	}
	
	for(i=0;i<n;i++){
		printf("%d ", *array[i]);
	}
}
