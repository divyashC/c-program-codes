#include <stdio.h>

int main(){

   int h;
   printf("Enter height in (cm): ");
   scanf("%d", &h);


   if (h>150){
       printf("\nTall\n");
   }

   else if (h<=150 && h>=100){
       printf("\nNormal\n");
   }

   else{
       printf("\nDwarf\n");
   }

   return 0;

}