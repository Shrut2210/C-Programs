#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char ch[10];

    fp=fopen("w.txt","w");
    
    if(fp==NULL){
        printf("file doesn't exist!");
    }
    else{
        printf("write anything : \n");
        fgets(ch,10,stdin);
        fputs(ch,fp);
    }

    fclose(fp);
}