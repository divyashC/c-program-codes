#include <stdio.h>
int main () {

   int a, b, c, *p, *q;

   printf("Enter number A: ");
   scanf("%d", &a);

   printf("Enter number B: ");
   scanf("%d", &b);

   printf("\nNumbers before swap: \nA = %d   B = %d", a, b);

   c = a;
   p = &b;
   q = &c;
   a = *p;
   b = *q;

   printf("\nNumbers after swap: \nA = %d  B = %d", a, b);

   return 0;

}