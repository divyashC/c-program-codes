#include <stdio.h>
int maxcheck (int *p, int n);
int main () {

   int n, i, maximum;

   printf("Enter the number of elements (n): ");
   scanf("%d",&n);

   int matrix[n];

   for(i = 0; i < n; i++){
       printf("Enter the element [%d]: ", i+1);
       scanf("%d", &matrix[i]);
   }

   maximum = maxcheck(matrix, n);


   printf("\nMaximum element in the matrix is %d\n", maximum);

   return 0;

}

int maxcheck (int *p, int n){

   int  i, max=0;

   for (i=0; i<n; i++){
       if (*p>max){
           max = *p;
       }
       p++;
   }

   return max;
}
