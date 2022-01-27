#include <stdio.h>

int main(){

   int rollNo, tMarks, avg, m1, m2, m3;
   char name[20];

   printf("Enter Name: ");
   scanf("%s", &name);

   printf("Enter Roll Number: ");
   scanf("%d", &rollNo);

   printf("Enter Marks for CPL101: ");
   scanf("%d", &m1);

   printf("Enter Marks for CHE101: ");
   scanf("%d", &m2);

   printf("Enter Marks for EGP101: ");
   scanf("%d", &m3);

   tMarks = m1 + m2 + m3;
   avg = tMarks/3;

   printf("\nName: %s", name);
   printf("\nRoll No: %d", rollNo);
   printf("\nTotal Marks: %d", tMarks);
   printf("\nPercentage: %d", avg);

   if (avg>=80 && avg<=100){
        printf("\nDivision: First");
    }

   else if (avg>=70 && avg<80){
       printf("\nDivision: Second");
    }

   else if (avg>=50 && avg<70){
       printf("\nDivision: Third");
   }

   else if (avg<50){
       printf("\nDivision: Fail");
   }

   return 0;

}
