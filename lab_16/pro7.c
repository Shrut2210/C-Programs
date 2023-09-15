#include<stdio.h>
 
int main(){
	int r,c, i, j, sum=0;
	printf("enter number of rows : ");
	scanf("%d", &r);
	printf("enter number of cols : ");
	scanf("%d", &c);

	int array[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter element :");
			scanf("%d", &array[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
				printf("%d ", array[i][j]);
				sum=sum+array[i][j];
			}
		}
	}
	
	printf("\nsum of diagonal is = %d", sum);
}
