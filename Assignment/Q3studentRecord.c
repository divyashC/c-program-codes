#include<stdio.h>

struct Student_Record{
   char firstname[15];
   char lastname[15];
   int Std_No;
   float marks[5];
   float totalM;
};

int main (){
   struct Student_Record student[5], temp[1];
   int i, j;

   for (i=0; i<5; i++){
       float total = 0;

       printf("Enter Name of Student %d: ", i+1);
       scanf("%s %s",student[i].firstname, student[i].lastname);

       printf("Enter Student Number: ");
       scanf("%d",&student[i].Std_No);

       for (j=0; j<5; j++){
           printf("Enter Marks of subject %d: ", j+1);
           scanf("%f",&student[i].marks[j]);

           total = total + student[i].marks[j];
       }
       student[i].totalM = total;
       printf("\n");
   }


   for (i=0; i<5; i++){

       for (j=i+1; j<5; j++){

           if (student[i].totalM < student[j].totalM){
               temp[0] = student[i];
               student[i] = student[j];
               student[j] = temp[0];
           }
       }
   }

   for (i=0; i<5; i++){

       if (student[0].totalM == student[i].totalM){
           printf("\nCongratulations!!!!!");
           printf("\n%s %s bearing Student No. %d has secured first position with Total marks %.2f\n", student[i].firstname, student[i].lastname, student[i].Std_No, student[i].totalM);
       }
   }

   return 0;
}