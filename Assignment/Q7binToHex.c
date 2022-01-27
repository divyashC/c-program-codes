#include <stdio.h>
#include <math.h>
int main () {

   int bin, dec=0, last, exp=0;

   printf("Enter a Binary Number: ");
   scanf("%d", &bin);

   printf("\nBinary number is: %d", bin);

   while (bin!=0){
       last = bin%10;
       bin = bin/10;
       dec = dec + (last * pow(2,exp));
       exp++;
   }

   int arrayS=0, temp = dec;
   while(temp!=0){
      arrayS++;
      temp = temp/16;
   }

   int hex[arrayS], i, count=0;

   for (i=0; i<arrayS; i++){
       hex[i] = dec%16;
       dec = dec/16;
       count++;
   }

   printf("\nHexadecimal number is: ");

   for (i=0; i<count; i++){

       if (hex[i]==10){
           printf("A");
       }

       else if (hex[i]==11){
           printf("B");
       }

       else if (hex[i]==12){
           printf("C");
       }

       else if (hex[i]==13){
           printf("D");
       }

       else if (hex[i]==14){
           printf("E");
       }

       else if (hex[i]==15){
           printf("F");
       }

       else {
          printf("%d", hex[i]);
       }

   }

   return 0;

}