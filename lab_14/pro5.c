#include<stdio.h>

int main(){
    int arrayh[5],arrayw[5],i,count=0;

    printf("for height : \n");
    for(i=0;i<5;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &arrayh[i]);
    }

    printf("for weight : \n");
    for(i=0;i<5;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &arrayw[i]);
    }

    for(i=0;i<5;i++){
        if(arrayh[i]>170 && arrayw[i]<50){
            count++;
        }
    }
    printf("total persons = %d", count);
}