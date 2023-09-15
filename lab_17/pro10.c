#include<stdio.h>
int main(){
    int n,i,j,max=0,temp;
    printf("enter size of array : ");
    scanf("%d", &n);

    int *arrayp[n], array[n];

    for(i=0;i<n;i++){
        printf("enter %d element :", i+1);
        scanf("%d", &array[i]);
        arrayp[i]=&array[i];
    }

    for(i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    temp=max;

    for(i=0;i<n;i++){
        temp=max;
        for(j=i;array[j]!='\0';j++){
            if(array[j]<temp){
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
                arrayp[i]=&array[i];
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d ", *arrayp[i]);
    }
}