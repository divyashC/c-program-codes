#include <stdio.h>

struct student_details {

   char firstname[15];
   char lastname[15];
   int stdNo;
   float cpl;
   float egp;
   float che;
   float acs;
   float phy;
   float mat;
   float totalM;
   float avg;

};

int main (){

   struct student_details student[4], temp[1];

   int i, j;

   for (i=0; i<3; i++){

        printf("Student %d\n", i+1);

        printf("Enter First Name: ");
        scanf("%s", student[i].firstname);

        printf("Enter Last Name: ");
        scanf("%s", student[i].lastname);

        printf("Enter Student Number: ");
        scanf("%d", &student[i].stdNo);

		printf("Enter marks for CPL101: ");
		scanf("%f", &student[i].cpl);

		printf("Enter marks for EGP101: ");
		scanf("%f", &student[i].egp);

		printf("Enter marks for CHE101: ");
		scanf("%f", &student[i].che);

		printf("Enter marks for ACS101: ");
		scanf("%f", &student[i].acs);

		printf("Enter marks for PHY101: ");
		scanf("%f", &student[i].phy);

		printf("Enter marks for MAT101: ");
		scanf("%f", &student[i].mat);

		student[i].totalM = student[i].cpl + student[i].egp + student[i].che + student[i].acs + student[i].phy + student[i].mat;

		student[i].avg = student[i].totalM / 6;

		printf("\n");


   }


   for (i=0; i<3; i++){

       for (j=i+1; j<3; j++){

           if (student[i].avg < student[j].avg){
               temp[0] = student[i];
               student[i] = student[j];
               student[j] = temp[0];
           }
       }
   }

   printf("\nPosition\tFirst Name\tLast Name\tStudent Number\tCPL101\tEGP101\tCHE101\tACS101\tPHY101\tMAT101\tTotal Marks\tAverage\n");

   for (i=0; i<3; i++){

       printf("\n%d\t", i+1);

       printf("\t%s\t", student[i].firstname);
       printf("\t%s\t", student[i].lastname);
       printf("\t%d\t", student[i].stdNo);
       printf("\t%.2f", student[i].cpl);
       printf("\t%.2f", student[i].egp);
       printf("\t%.2f", student[i].che);
       printf("\t%.2f", student[i].acs);
       printf("\t%.2f", student[i].phy);
       printf("\t%.2f", student[i].mat);
       printf("\t%.2f", student[i].totalM);
       printf("\t\t%.2f", student[i].avg);

   }

   return 0;

}
