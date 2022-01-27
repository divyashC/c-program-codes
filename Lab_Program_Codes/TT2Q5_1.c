#include <stdio.h>
int gcdf (int a, int b);
int main () {

   int a, b, gcd;

   printf("Enter Number A and B: ");
   scanf("%d %d", &a, &b);

   gcd = gcdf(a,b);

   printf("The GCD of %d and %d is %d", a, b, gcd);

   return 0;

}

int gcdf(int a, int b){

   if (b==0){
       return a;
   }

   else {
       return gcdf(b, a%b);
   }

}
