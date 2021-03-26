//NAME: SOUMIK MUKHERJEE
//ROLL: 2005547
//SECTION: B10
#include <stdio.h>
int FUNPRIME(int number){
    if (number <= 1)
      { 
          return 0;
      }
   for (int j = 2; j <= number/2; j++){
      if (number % j == 0){
         return 0;
      }
      return 1;
   }
}
int main(){
    int n;
   printf("ENTER THE LENGTH OF THE ARRAY:"); 
   scanf("%d", &n);
   int arr[n];
   printf("\nENTER THE ELEMENTS OF THE ARRAY:");
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int countPrime=0;
   int isPrimeNum=0;
   for(int i=0;i<n;i++){
      isPrimeNum=FUNPRIME(arr[i]);
      if(isPrimeNum==1)
         countPrime++;
   }
   int countComposite=n-countPrime;
   printf("NO OF PRIME NUMBERS IN THE GIVEN ARRAY : %d",countPrime);
   printf("\nNO OF COMPOSITE NUMBERS IN THE GIVEN ARRAY : %d",countComposite);
   return 0;
}