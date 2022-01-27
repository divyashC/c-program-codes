#include <stdio.h>
int add (int x, int y);
int main (){

   int a, i, n, sum=0;

   printf("For how many numbers the sum has to be calculated? = ");
   scanf("%d", &a);

   for (i=1; i<=a; i++){
       printf("Enter number %d: ", i);
       scanf("%d", &n);
       sum = add(n,sum);
   }

   printf("The sum of %d user inputted numbers is %d", a, sum);

   return 0;
}

int add (int x, int y ){

   y = x + y;

   return y;
}
