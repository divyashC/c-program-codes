#include <stdio.h>

int main (){

   int i, j, size, great;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &size);

   int n[size];

   for (i=0; i<size; i++){
       printf("Enter Element %d: ", i+1);
       scanf("%d", &n[i]);
   }

   printf("\nThe values stored in the array are: \n");
   for (i=0; i<size; i++){
       printf("%d ", n[i]);
   }

   for (i=0; i<size; i++){

       for (j=i+1; j<size; j++){

           if (n[i] > n[j]){
               great = n[i];
               n[i] = n[j];
               n[j] = great;
           }
       }

   }

   printf("\nThe values stored in the array in ascending order is: \n");
   for (i=0; i<size; i++){
       printf("%d ", n[i]);
   }

   return 0;

}
