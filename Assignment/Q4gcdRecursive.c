#include <stdio.h>
int gcdf(int a, int b);
int main () {

   int a, b, c, gcd;

   printf("Enter number (a): ");
   scanf("%d", &a);
   printf("Enter number (b): ");
   scanf("%d", &b);

   if (a<b){
       c = a;
       a = b;
       b = c;
    }

   gcd = gcdf(a,b);

   printf("The GCD of %d and %d is %d", a, b, gcd);

   return 0;

}

int gcdf(int a, int b){

   if (b!=0){
       a = a%b;
       return gcdf(b,a);
    }

   else {
       return a;
    }

}