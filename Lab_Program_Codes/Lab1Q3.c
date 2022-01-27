#include <stdio.h>
int main () {

   int n, max=0, i=0;

   printf("Enter 3 Numbers: \n");

   for (i=0; i<3; i++){

       scanf("%d", &n);

       if (n>max){
           max = n;
       }
   }

   printf("\nThe largest number among those 3 is %d", max);

   return 0;

}
