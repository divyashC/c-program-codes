#include <stdio.h>
int main () {

   int m, n, i, j, maximum=0;

   printf("Enter the number of rows (m): ");
   scanf("%d",&m);

   printf("Enter the number of columns (n): ");
   scanf("%d",&n);

   int matrix[m][n];

   for (i = 0; i < m; i++){

       for(j = 0; j < n; j++){
           printf("Enter the element [%d, %d]: ", i,j);
           scanf("%d", &matrix[i][j]);

           if (matrix[i][j] > maximum){
               maximum = matrix[i][j];
           }
       }
   }

   printf("\nMaximum element in the matrix is %d\n", maximum);

   return 0;

}
