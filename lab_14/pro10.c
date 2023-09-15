#include<stdio.h>
int main(){
    int n,i,j,min=0;
    printf("enter total number of element : ");
    scanf("%d", &n);

    int num[n];
    for(i=0;i<n;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &num[i]);
    }

    int new_num[n];
    for(i=0;i<n;i++){
        new_num[i]=0;
    }

    for(j=0;j<n;j++){
        new_num[num[j]-1]=num[j];
    }
	
	printf("missing elements are : ");
    for(j=0;j<n;j++){
        if(new_num[j]==0){
        	printf("%d ", j+1);
		}
    }
}
