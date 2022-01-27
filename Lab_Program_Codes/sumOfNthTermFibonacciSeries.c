#include <stdio.h>
int main (){

   int n, i, sum=1;
   printf("Enter n: ");
   scanf("%d", &n);

   int Fib[n];
   Fib[0] = 0;
   Fib[1] = 1;

   for (i=2; i<n; i++){
       Fib[i] = Fib[i-2] + Fib[i-1];
       sum = sum + Fib[i];
   }

   printf("The Fibonacci numbers are: \n");

   for (i=0; i<n; i++){
       printf("%d ", Fib[i]);
   }

   printf("\nThe sum of %d Fibonacci numbers = %d", n, sum);

   return 0;

}
