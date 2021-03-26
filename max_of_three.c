//WAP TO INPUT THREE DISTINCT NUNBERS AND PRINT THE MAXIMUM OF THEM

#include<stdio.h>

int main(){
	
	int a,b,c;
	printf("Enter the three nuumbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
		if(a>c){
			printf("MAX=%d",a);
		}
		else{
			printF("MAX=%d",c);
		}
	}
	else{
		if(b>c){
			printf("MAX=%d",b);
		}
		else{
			printf("MAX=%d",c);
		}
	}
	return 0;
} 
