#include<stdio.h>
int main(){
    int n1,n2,i;
    printf("enter size of array : ");
    scanf("%d", &n1);
    printf("enter size of array : ");
    scanf("%d", &n2);

    int *arrayp1[n1], *arrayp2[n2], *arrayp3[n1], array1[n1], array2[n2], array3[n1];
    arrayp1[n1]=&array1[n1];
    arrayp2[n2]=&array2[n2];
    arrayp3[n1]=&array3[n1];

    printf("for first array : \n");
    for(i=0;i<n1;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &array1[i]);
        arrayp1[i]=&array1[i];
    }

    printf("for second array : \n");
    for(i=0;i<n2;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &array2[i]);
        arrayp2[i]=&array2[i];
    }

    for(i=0;i<n1;i++){
        array3[i]=array1[i];
        arrayp3[i]=&array3[i];
    }

    for(i=0;i<n2;i++){
        array1[i]=array2[i];
        arrayp1[i]=&array1[i];
    }

    for(i=0;i<n1;i++){
        array2[i]=array3[i];
        arrayp2[i]=&array2[i];
    }

    for(i=0;i<n2;i++){
        printf("%d ", *arrayp1[i]);
    }

    printf("\n");
    for(i=0;i<n1;i++){
        printf("%d ", *arrayp2[i]);
    }
}