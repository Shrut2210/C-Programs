#include<stdio.h>
int main(){
    int n,i,j,max=0,temp,min=0;
    printf("enter total number of element : ");
    scanf("%d", &n);

    int num[n];
    for(i=0;i<n;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &num[i]);
    }

    int n2;
    printf("enter size of another array : ");
    scanf("%d", &n2);

    for(i=n;i<n+n2;i++)
    {
        printf("enter new %d element : ", i+1);
        scanf("%d", &num[i]);
    }

    char sort;
    printf("enter ascending for 'a' and descending for 'd' : ");
    scanf(" %c", &sort);

    if(sort=='a'){
        for(i=0;i<n+n2;i++)
	{
		if(num[i]>max){
			max=num[i];
		}
	}
	temp=max;

	
	for(i=0;i<n+n2;i++)
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

    for(i=0;i<n+n2;i++)
    {
        printf("%d ", num[i]);
    }
    }
	
	else if(sort=='d'){

	for(i=0;i<n+n2;i++)
	{
		if(num[i]<min){
			min=num[i];
		}
	}
	temp=min;
	
    for(i=0;i<n+n2;i++)
	{
		temp=min;
		for(j=0;num[j]!='\0';j++)
		{
			if(num[j]>temp)
			{
				temp=num[j];
				num[j]=num[i];
				num[i]=temp;
			}
		}
	}
    for(i=0;i<n+n2;i++)
    {
        printf("%d ", num[i]);
    }
    }
}
