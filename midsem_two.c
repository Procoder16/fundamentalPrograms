#include <stdio.h>
#include <math.h>
int main(){
	
	printf("SOUMIK MUKHERJEE");
	printf("\n2005547");
	printf("\nMID SEMESTER EXAMINATION");
    int k;
    printf("\nEnter the number: ");
    scanf("%d", &k);

    double num = log(k)/log(2);
    if(pow(2,num) == (double)k)
        printf("%d ", k);
    else
        printf("%d ", (int)pow(2, (int)num));

    printf(("%d "), (int)pow(2, (int)num+1));

    return 0;
}

