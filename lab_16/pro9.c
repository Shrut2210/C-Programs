#include<stdio.h>

int main(){
	int r,c,i,j;
	printf("enter number of rows : ");
	scanf("%d", &r);
	printf("enter number of cols : ");
	scanf("%d", &c);

	int array[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter element : ");
			scanf("%d", &array[i][j]);
		}
	}
	if(r==c)
	{
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i<=j){
				printf("%d ", array[i][j]);
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}
	}
	
	else{
		printf("enter sqaure matrix");
	}
}
