#include<stdio.h>
int main(){
    int r, c, i,j;
    printf("enter array row : ");
    scanf("%d", &r);
    printf("enter array col : ");
    scanf("%d", &c);

    int *arrayp1[r][c], *arrayp2[r][c], array1[r][c], array2[r][c];
    arrayp1[r][c]=&array1[r][c];
    arrayp2[r][c]=&array2[r][c];

    printf("for first matrix : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter element : ");
            scanf("%d", &array1[i][j]);
            arrayp1[i][j]=&array1[i][j];
        }
    }

    printf("for second matrix : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter element : ");
            scanf("%d", &array2[i][j]);
            arrayp2[i][j]=&array2[i][j];
        }
    }

    if(r==c){
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                array1[i][j]=array1[i][j]+array2[i][j];
                arrayp1[i][j]=&array1[i][j];
            }
        }
    }
    else{
        printf("matrixs not have same col and row ");
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ", *arrayp1[i][j]);
        }
        printf("\n");
    }
}