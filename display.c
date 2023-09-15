#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char ch;
    fp=fopen("dis.txt","r");

    do{
        ch=getc(fp);
        putchar(ch);
    }while (ch!=EOF);
    
    fclose(fp);
    
}