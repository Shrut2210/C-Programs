#include<stdio.h>

int main(){
	int r,c,i,j;
	printf("enter number of rows : ");
	scanf("%d", &r);
	printf("enter number of cols : ");
	scanf("%d", &c);

	int array1[r][c],array2[r][c];
	printf("for 1st matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter element : ");
			scanf("%d", &array1[i][j]);
		}
	}
	printf("for 2nd matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter element : ");
			scanf("%d", &array2[i][j]);
		}
	}
	
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				array1[i][j]=array1[i][j]+array2[i][j];
			}
		}

		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d ", array1[i][j]);
			}
			printf("\n");
		}
}
