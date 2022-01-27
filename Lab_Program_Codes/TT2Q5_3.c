#include <stdio.h>
int main (){

   int i, n;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   i=0;
   while (i<n){
       printf("%d\n", n-i);
       i++;
   }

   return 0;

}
