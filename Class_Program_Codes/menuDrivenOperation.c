#include <stdio.h>
int main (){

   int menuOption, numA, numB, numC;

   printf("Choose the option:");
   printf("\n\t1 Add \n\t2 Subtract \n\t3 Product \n\t4 Division \n\t5 Modulus Operation");
   printf("\n\nEnter number 1-5 from the above option: ");
   scanf("%d", &menuOption);


   if (menuOption<=5){

       printf("Enter the value of operant A: ");
       scanf("%d", &numA);

       printf("Enter the value of operant B: ");
       scanf("%d", &numB);

       switch(menuOption){

           case 1:
               printf("\nYou have selected Option 1 to add");
               numC = numA + numB;
               break;

           case 2:
               printf("\nYou have selected Option 2 to subtract");
               numC = numA - numB;
               break;

           case 3:
               printf("\nYou have selected Option 3 to multiply");
               numC = numA*numB;
               break;

           case 4:
               printf("\nYou have selected Option 4 to divide");
               numC = numA/numB;
               break;

           case 5:
               printf("\nYou have selected Option 5 to find the modulus");
               numC = numA%numB;
               break;
       }

       printf("\nThe value is %d", numC);

   }

   else {
       printf("Error! You chose wrong menu option");
   }

   return 0;

}
