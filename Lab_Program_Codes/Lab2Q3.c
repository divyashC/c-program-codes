#include <stdio.h>
int main (){

   int remainder, i,  sum=0;

   printf("Palindrome numbers between 10-500 are: \n");

   for (i=10; i<=500; i++){

       int reversedN = 0, n=i;

       while (n>0) {
           remainder = n % 10;
           reversedN = reversedN * 10 + remainder;
           n = n/10;
       }

       if (i == reversedN){
           printf("\t%d",i);
           sum = sum + i;

       }

   }

   printf("\n\nThe sum of palindrome numbers between 10-500 is %d\n", sum);

   return 0;

}



