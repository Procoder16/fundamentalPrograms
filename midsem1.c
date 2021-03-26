#include <stdio.h>

int main()
{
	
	printf("SOUMIK MUKHERJEE");
	printf("\n2005547");
	printf("\nMID SEMESTER EXAMINATION");
    
	char ch;
    printf("\nEnter any character: ");
    scanf("%c", &ch);
    
	if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("'%c' is an Alphabet.", ch);
        if(ch>=65 && ch<=90){
        	printf("\nThis is an uppercase alphabet");
		}
		else{
			printf("\nThis is a Lowercase Alphabet");
		}
		if(ch=='a' || ch == 'e' || ch== 'i' || ch =='o' || ch=='u'||ch=='A' || ch == 'E' || ch== 'I' || ch =='O' || ch=='U'){
			printf("\nIt is a vowel");
		}
		else{
			printf("\nIt is a consonant");
		}
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("'%c' is a digit.", ch);
    }
    else
    {
        printf("'%c' is a special character.", ch);
    }

    return 0;
}
