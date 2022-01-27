#include <stdio.h>
int main () {

   int avg, m1, m2, m3, m4, m5;

   printf("Enter Marks for 5 Modules: \n");
   scanf("%d \n %d \n %d \n %d \n %d \n", &m1,&m2,&m3,&m4,&m5);

   avg = (m1 + m2 + m3 + m4 + m5)/5;

   if (avg>100){
       printf("\nError!! Invalid Marks Entered!!");
   }

   else{

       if (avg>=80 && avg<=100){
           printf("Average is %d & grade - Excellent", avg);
       }

       else if (avg>=70 && avg<80){
           printf("Average is %d & grade - Very Good", avg);
       }

       else if (avg>=60 && avg<70){
           printf("Average is %d & grade - Good", avg);
       }

       else if (avg>=50 && avg<60){
           printf("Average is %d & grade - Satisfactory", avg);
       }

       else if (avg<50){
           printf("Average is %d & grade - Fail", avg);
       }

   }

   return 0;

}
