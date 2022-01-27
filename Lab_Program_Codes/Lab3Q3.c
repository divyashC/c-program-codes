#include <stdio.h>
int maxcheck (int x, int y);
int mincheck (int x, int y);
int main (){

   int i, n[100], noV, max, min;
   max = 0;

   printf("Enter total number of values: ");
   scanf("%d", &noV);

   for (i=0; i<noV; i++){
       printf("Enter Number %d: ", i+1);
       scanf("%d", &n[i]);
       max = maxcheck (max, n[i]);
   }

   min = max;
   for (i=0; i<noV; i++){
       min = mincheck (min, n[i]);
   }

   printf("\nMinimum Value is: %d", min);
   printf("\nMaximum Value is: %d", max);

   return 0;

}

int maxcheck (int x, int y){

   int max;

   if (y>x){
       max = y;
   }

   else {
       max = x;
   }

   return max;

}

int mincheck (int x, int y){

   int min;

   if (y<x){
       min = y;
   }

   else {
       min = x;
   }

   return min;

}
