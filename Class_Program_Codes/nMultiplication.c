#include <stdio.h>
int main (){

   int N, i, product;

   printf("Enter a number N: ");
   scanf("%d", &N);

   printf("\nThe multiplication table for %d is \n\n", N);

   i=0;

   do {
     product = N*i;
     printf("\t %d * %d = %d \n", N,i,product);
     i++;
   }

   while (i<=15);

   return 0;

}
