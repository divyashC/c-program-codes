#include <stdio.h>
int main () {

   int i, n[10], greatest;

   printf("Enter 10 Numbers: \n");

   for (i=0; i<10; i++){
       scanf("%d", &n[i]);
   }

   greatest = n[0];

   for (i=0; i<10; i++){

       if (n[i]>greatest){
           greatest = n[i];
       }

   }

   printf("The largest number among 10 user inputted numbers is %d", greatest);

   return 0;

}
