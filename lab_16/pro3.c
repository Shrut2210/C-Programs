#include<stdio.h>
#define r 20
#define c 3

int main(){
	int array[r][c],i,j;
	char array1[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<1;j++){
			printf("enter %d student name : ", i+1);
			scanf(" %s", &array1[i][0]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=1;j<c;j++){
			printf("enter %d element marks :", j+1);
			scanf("%d", &array[i][1]);
			printf("enter %d element roll no :", j+1);
			scanf("%d", &array[i][2]);
		}
	}	
		
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%s ", array1[i][0]);
			printf("%d ", array[i][1]);
			printf("%d ", array[i][2]);
		}
		printf("\n");
	}
	
}
