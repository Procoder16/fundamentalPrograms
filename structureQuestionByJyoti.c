#include<stdio.h>
#define SIZE 100
 
struct student {
   char name[30];
   int rollno;
   int marks;
}; 
int main() {
   int i, j, max, count, total, n, a[SIZE], ni;
   struct student st[SIZE];
 
   printf("ENTER THE NUMBER OF RECORDS YOU WANT TO ENTER:");
   scanf("%d", &n);
   
   for (i = 0; i < n; i++) {
      printf("\nENTER NAME, ROLL NO AND MARKS OF THE STUDENT NUMBER %d : ", i+1);
      scanf("%s", &st[i].name);
      scanf("%d", &st[i].rollno);
      scanf("%d", &st[i].marks);
   }
   
   printf("\nNAMES OF THE STUDENTS WHO HAVE SCORED BETWEEN 60 TO 80 ARE:\n");       
      for (i = 0; i < n; i++) {
         if (st[i].marks>=60 && st[i].marks<=80){
           printf("%s \n",st[i].name);
         }
      }
    return 0;  
}