#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    char str1[n] , str2[n];
    printf("enter string :");
    scanf("%s", str1);
    printf("enter string :");
    scanf(" %s", str2);
    
    printf("length of first string is %d\nlength of second string is %d\n", strlen(str1), strlen(str2));

    if(strcmp(str1,str2)==0){
        printf("both string are same\n");
    }
    else{
        printf("both strings are diff.\n");
    }

    printf("%s\n", strcpy(str2,str1));
    printf("%s\n", strcpy(str1,str2));

    printf("%s\n", strupr(str1));
}