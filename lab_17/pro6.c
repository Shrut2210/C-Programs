#include<stdio.h>
int main(){
    int n,i;
    printf("enter size of array : ");
    scanf("%d", &n);

    int *arrayp1[n], *arrayp2[n], array1[n], array2[n];
    arrayp1[n]=&array1[n];
    arrayp2[n]=&array2[n];

    for(i=0;i<n;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &array1[i]);
        arrayp1[i]=&array1[i];
    }

    for(i=0;i<n;i++){
        array2[i]=array1[i];
        arrayp2[i]=&array2[i];
    }

    for(i=0;i<n;i++){
        printf("%d ", *arrayp2[i]);
    }
}