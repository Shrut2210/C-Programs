#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int no[n],i,search;
	
	for(i=0;i<n;i++){
		scanf("%d", &no[i]);
	}
	
	scanf("%d", &search);
	
	for(i=0;i<n;i++){
	if(no[i]==search){
		printf("%d", i+1);
		break;
	}
}
	if(no[i]!=search){
		printf("-1");
	}
}
