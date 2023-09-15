#include<stdio.h>

int main(){
    int n,i,max=0,max2=0;
    printf("enter size of array : ");
    scanf("%d", &n);

    int array[n];
    for(i=0;i<n;i++)
    {
        printf("enter %d element : ", i+1);
        scanf("%d", &array[i]);
    }

    for(i=0;i<n;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }

    for(i=0;i<n && array[i]!=max;i++)
    {
        if(max2<max && max2<array[i])
        {
            max2=array[i];
        }
    }
    printf("largest is %d and second largest is %d", max, max2);
}