#include <stdio.h>
int main () {

   int n, i, num[32], j=0;

   printf("Enter int (n): ");
   scanf("%d", &n);

   for (i=0; n>0; i++){
       num[i] = n%2;
       n = n/2;
       j++;
   }

   printf("Binary: ");
   for (i=0; i<j; i++){
       printf("%d", num[i]);
   }

   return 0;

}
