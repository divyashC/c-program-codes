#include <stdio.h>
int main () {

   int num, count=0;

   printf("Enter int (n): ");
   scanf("%d", &num);

   while(num!=0){
       if ((num & 1) == 1){
           break;
       }
       num = num>>1;
       count++;
   }

   printf("Total number of trailing zeros = %d", count);

   return 0;

}