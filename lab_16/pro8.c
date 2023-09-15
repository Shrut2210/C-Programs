#include<stdio.h>
#define r 3
#define c 3
 
int main(){
	int array[r][c], i, j, count=0;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter element :");
			scanf("%d", &array[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(array[i][j]==0){
			count++;
			}
		}
	}
	
	if(count>(i+j)/2){
		printf("given matrix is sparce");
	}
	else{
		printf("given matrix is not sparce");
	}
}
