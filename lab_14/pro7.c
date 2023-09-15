#include<stdio.h>
#include<math.h>

int main(){
    int n,i,sum=0;
    double ave,insum=0.0,gm,hm,x=1.0;

    printf("total number of element : ");
    scanf("%d", &n);

    int num[n];
    for(i=0;i<n;i++){
        printf("enter %d element : ", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+num[i];
        insum=insum+((double)1/(double)num[i]);
        x=x*((double)num[i]);
    }

    ave=(double)sum/n;
    gm=pow(x,0.5);
    hm=(double)n/insum;

    printf("ave = %lf\n gm = %lf\n hm = %lf", ave,gm,hm);

}