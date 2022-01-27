#include <stdio.h>
int main () {

   int a, b, c, gcd, i, *p, *q;
   p = &a;
   q = &b;
   printf("Enter number (a): ");
   scanf("%d", p);
   printf("Enter number (b): ");
   scanf("%d", q);

   if (*p>*q){
       c = *q;
   }
   else {
       c = *p;
   }

   for (i=1; i<=c; i++){
       if (*p%i==0 && *q%i==0){
           gcd = i;
       }
   }

   printf("The GCD of %d and %d is %d", a, b, gcd);

   return 0;

}