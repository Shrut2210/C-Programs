#include<stdio.h>
int main(){
	int i;
	char array[100];
	printf("enter string :");
	gets(array);
	
	for(i=0;i<100;i++){
		if(array[i]=='\0'){
			printf("length of the string is : %d", i);
			break;
		}
	}
	return 0;
}
