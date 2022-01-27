#include <stdio.h>
int main (){

   int n[101], i, j, count, num, sum=0;

   for (i=0; i<101; i++){
       n[i]=i;
   }

   printf("The prime numbers between 0-100 are:\n");

   for (i=2; i<101; i++){
       num=n[i];
       count = 0;

       for (j=2; j<num; j++){

           if (num%j == 0){
               count++;
           }
       }

       if (count==0){
           printf("%d ", num);
           sum = sum + num;
       }

   }

    printf("\nThe sum of prime numbers between 0-100 = %d", sum);

   return 0;

}
