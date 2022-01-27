#include <stdio.h>
int main (){

   int i, sum=0;

   for (i=0; i<=100; i++){
       if (i%2 == 0){
           sum = sum + i;
       }
   }

   printf ("The sum of all even numbers between 0-100 is %d", sum);

   return 0;

}
