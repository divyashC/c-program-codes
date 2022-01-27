#include <stdio.h>
int main(){


   int preReading, curReading, numberOfUnits;
   float charge;

   printf("Enter Previous Meter Reading: ");
   scanf("%d", &preReading);

   printf("Enter Current Meter Reading: ");
   scanf("%d", &curReading);

   numberOfUnits = curReading - preReading;

   if (numberOfUnits<=100){
       charge = numberOfUnits*0.5;
   }

   else if (numberOfUnits>100 && numberOfUnits<=200){
       charge = numberOfUnits*1.5;
   }

   else {
       charge = numberOfUnits*2.5;
   }

   printf("\nThe number of units consumed = %d ", numberOfUnits);
   printf("\nActual Charge = Nu.%.2f ", charge);
   charge = charge + (0.3*charge);
   printf("\nCharge + Additional surcharge = Nu.%.2f ", charge);

   return 0;

}