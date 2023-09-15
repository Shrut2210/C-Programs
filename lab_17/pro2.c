#include<stdio.h>
int main(){
    int *pint, nint;
    float *pf, nf;
    double *pd, nd;
    char *pchar, nchar;

    printf("enter int value : ");
    scanf("%d", &nint);
    printf("enter float value : ");
    scanf("%f", &nf);
    printf("enter double value : ");
    scanf("%lf", &nd);
    printf("enter char : ");
    scanf(" %c", &nchar);

    pint=&nint;
    pf=&nf;
    pd=&nd;
    pchar=&nchar;

    printf(" int value is %d\n float value is %f\n double value is %lf\n char is %c", *pint, *pf, *pd, *pchar);
}