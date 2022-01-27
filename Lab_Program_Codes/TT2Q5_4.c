#include <stdio.h>

int main (){

   int i, j, m, n, max, min;

   printf("Enter the Number of Rows (m): ");
   scanf("%d", &m);
   printf("Enter the Number of Columns (n): ");
   scanf("%d", &n);

   int matrix[m][n];

   printf("\n");

   for (i=0; i<m; i++){
       for (j=0; j<n; j++){
           printf("Enter Element [%d][%d]: ", i+1,j+1);
           scanf("%d", &matrix[i][j]);
       }
   }

   min = matrix[0][0];
   max = matrix[0][0];

   for (i=1; i<m; i++){
       for (j=1; j<n; j++){

           if (min > matrix[i][j]){
               min = matrix[i][j];
           }

           if (max < matrix[i][j]){
               max = matrix[i][j];
           }
       }
   }

   printf("\nThe Maximum Value in the %d by %d array is %d and the Minimum value is %d\n", m,n,max,min);

   return 0;

}
