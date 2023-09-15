#include<stdio.h>
int main(){
    int n,i,j,max=0,temp;
    printf("enter total number of element : ");
    scanf("%d", &n);

    int num[n];
    for(i=0;i<n;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &num[i]);
    }
	
	for(i=0;i<n;i++)
	{
		if(num[i]>max){
			max=num[i];
		}
	}
	temp=max;
	
	for(i=0;i<n;i++)
	{
		temp=max;
		for(j=i;num[j]!='\0';j++)
		{
			if(num[j]<temp)
			{
				temp=num[j];
				num[j]=num[i];
				num[i]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ", num[i]);
	}
	
}
