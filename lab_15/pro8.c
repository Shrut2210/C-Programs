#include<stdio.h>
#include<math.h>

int main(){
    int n,i,temp=0;
    printf("enter size of array : ");
    scanf("%d", &n);

    int array[n];
    for(i=0;i<n;i++)
    {
        printf("enter %d element : ", i+1);
        scanf("%d", &array[i]);
    }

    for(i=0;i<n/2;i++)
    {
       temp=array[i];
       array[i]=array[n-1-i];
       array[n-1-i]=temp;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", array[i]);
    }
}