#include<stdio.h>

int main(){
    double r,g,b,R,G,B,max,C,M,Y,K;
    scanf("%lf %lf %lf", &r, &g, &b);

    R=r/255;
    G=g/255;
    B=b/255;

    max=(R>G)?((R>B)?R:B):((G>B)?G:B);

    C=(max-R)/max;
    M=(max-G)/max;
    Y=(max-B)/max;
    K=1-max;

    printf("C=%lf M=%lf Y=%lf K=%lf", C, M, Y, K);
    return 0;
}