#include<stdio.h>

int main(){
	int r,c,i,j;
	printf("enter number of rows : ");
	scanf("%d", &r);
	printf("enter number of cols : ");
	scanf("%d", &c);

	
	int array1[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter element : ");
			scanf("%d", &array1[i][j]);
		}
	}
	printf("original matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ", array1[i][j]);
		}
		printf("\n");
	}
	printf("transpose matrix\n");
	for(j=0;j<c;j++){
		for(i=0;i<r;i++){
			printf("%d ", array1[i][j]);
		}
		printf("\n");
	}
}
