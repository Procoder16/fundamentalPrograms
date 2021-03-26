//NAME: SOUMIK MUKHERJEE
//ROLL: 2005547
//SECTION: B10
#include <stdio.h>
#include <string.h>
int main()
{   
    char myString[100];
    printf("Enter a string : ");
    fgets(myString, 100, stdin);

    int i;
    int e;
    int s = 0;

    for (i = 0; i < strlen(myString); i++)
    {
        
        if (myString[i] == ' ' || i == strlen(myString) - 1)
        {
            
            e = i;
            printf("%d ", (e - s));
            s = i + 1;
        }
    }

    return 0;
}

