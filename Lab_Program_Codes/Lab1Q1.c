#include <stdio.h>
int main(){

   int a, credits;
   char major[20];

   printf("Choose one of the option\n");
   printf("\n\t Enter Digit 1 for Full-time or \n\t Enter Digit 2 for Part-time \n\t = ");
   scanf("%d", &a);

   if (a==1){

       printf("Enter your Major: ");
       scanf("%s", major);
       printf("\n%s is a good major", major);

   }

   else if (a==2){

       printf("Enter Credits: ");
       scanf("%d", &credits);

       if (credits>6){
         printf("That is a lot for a part-time student\n");
       }

       else{
         printf("That is nice\n");
       }

   }

   else if (a>2){

       printf("You neither chose full-time nor part-time");

   }

   return 0;
}
