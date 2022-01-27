#include <stdio.h>
int main () {

   int i, sum = 0;

   for (i=0; i<=100; i++){

       if (i%6 == 0){
           if (i%4 != 0){
               sum = sum + i;
               printf("Number ");
               printf("%d \n", i );
           }
       }
   }

   printf("\nThe sum of the numbers = %d ", sum);

   return 0;

}
