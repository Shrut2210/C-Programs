#include<stdio.h>
int main(){
    int i,n;
    printf("enter size of string : ");
    scanf("%d", &n);

    char *strp[n], str[n];

    printf("enter string : ");
    scanf(" %s", str);

    strp[n]=&str[n];
    for(i=0;i<n;i++){
        strp[i]=&str[i];
    }

    for(i=0;i<n;i++){
        if(*strp[i]=='\0'){
            printf("length is %d", i);
            break;
        }
    }
}