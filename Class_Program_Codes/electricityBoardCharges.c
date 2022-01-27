#include <stdio.h>

int main(){

   char customerName[20];
   int numberOfUnits, charge;

   printf("Enter Customer Name: ");
   scanf("%s", customerName);

   printf("Enter Number of Units Consumed: ");
   scanf("%d", &numberOfUnits);

   if (numberOfUnits<=200){
       charge = numberOfUnits*80;
   }

   else if (numberOfUnits>200 && numberOfUnits<=300){
       charge = numberOfUnits*90;
   }

   else if (numberOfUnits>300){
       charge = numberOfUnits*100;
   }

   printf("\nCustomer Name = %s", customerName);
   printf("\nThe number of units consumed = %d ", numberOfUnits);
   printf("\nCharge = Nu.%d ", charge);

   return 0;

}
