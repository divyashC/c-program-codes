#include <stdio.h>
int main (){

   float i, n, d=0, sum=0;

   printf("Enter the value of n: ");
   scanf("%f", &n);

   for (i=1;i<=n;i++){
       d = d + i;
       sum = sum + (i/d);
   }

   printf("%.2f", sum);

   return 0;

}
