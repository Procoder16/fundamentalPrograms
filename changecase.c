//WAP TO CHANGE THE CASE OF THE ALPHABET ENTERED

#include<stdio.h>

int main(){
	
	char ch;
	printf("Enter the character:\n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90){
		printf("It is an UPPERCASE alphabet.\n");
		printf("Lowercase Equivalent:%c",ch+32);
	}
	
	else if(ch>=97 && ch<=122){
		printf("It is an LOWERCASE alphabet.\n");
		printf("Uppercase Equivalent=%c",ch-32);
	}
	else{
		printf("NOT AN ALPHABET");
	}
	return 0;
} 
