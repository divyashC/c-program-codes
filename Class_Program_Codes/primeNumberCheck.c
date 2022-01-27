#include <stdio.h>
int main() {

   int n, i, num=0;
   printf("Enter a integer: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++) {

       if (n%i == 0) {
           num++;
       }
   }

   if (num == 2){
       printf("The number %d is a prime.", n);
   }

   else{
       printf("The number %d is not prime.", n);
   }

   return 0;
}
