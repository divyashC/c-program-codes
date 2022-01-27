#include <stdio.h>
int main (){

   int i,j,n,product;

   for(i=1; i<=15; i++){

       n = i;

       for(j=1; j<=12; j++){
           product = n*j;
           printf("%d x %d = %d \n", i, j, product);
       }
       printf("\n");

   }

   return 0;

}
