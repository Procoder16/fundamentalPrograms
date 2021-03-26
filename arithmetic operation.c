#include<stdio.h>

void main(){
	float a,b;
	printf("Enter two number:\n");
	scanf("%f %f",&a,&b);
	float addition=a+b;
	float subtraction=a-b;
	float product=a*b;
	float division=a/b;
	
	printf("Added value is %2f\n",addition);
    printf("Subtracted value is %2f\n",subtraction);
	printf("Multipled value is %2f\n",product);
	printf("Divided value is %2f\n",division);	
}
