#include <stdio.h>
int main () {

   int m, n, i, j, even=0, odd=0;

   printf("Enter the number of rows (m): ");
   scanf("%d",&m);

   printf("Enter the number of columns (n): ");
   scanf("%d",&n);

   int matrix[m][n];

   for (i = 0; i < m; i++){

       for(j = 0; j < n; j++){
           printf("Enter the element [%d, %d]: ", i,j);
           scanf("%d", &matrix[i][j]);

           if (matrix[i][j]%2 == 0){
               even++;
           }

           else{
               odd++;
           }
       }
   }

   printf("\nEven Elements in the matrix = %d", even);
   printf("\nOdd Elements in the matrix = %d", odd);

   return 0;

}
