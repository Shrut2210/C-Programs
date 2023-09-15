#include<stdio.h>

int main(){
	int r,c,i,j,pn=0,nn=0,on=0;
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
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(array[i][j]>0){
				pn++;
			}
			else if(array[i][j]<0){
				nn++;
			}
			else{
				on++;
			}
		}
	}
	
	printf("number of positive int are %d\n number of negative int are %d\n number of zero are %d", pn,nn,on);
}
