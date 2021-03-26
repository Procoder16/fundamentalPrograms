// WAP TO INPUT THE MAX OF TWO NUMBERS

#include<stdio.h>

int main(){
	
	int a,b;
	printf("Enter the two numbers:\n");
	scanf("%d %d",&a,&b);
	
	if(a>b){
		printf("MAX=%d",a);
	}
	else{
		printf("MAX=%d",b);
	}
	
	return 0;
}
