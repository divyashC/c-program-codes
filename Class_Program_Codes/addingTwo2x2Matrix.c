#include <stdio.h>
int main (){

   int i=2, j=2;
   int rows, columns;
   int A[2][2], B[2][2];
	int C[2][2];

	printf("Enter elements of Matrix A\n");

	for(rows = 0; rows < i; rows++){

  		for(columns = 0; columns < j; columns++){
           printf("Element %d,%d: ", rows,columns);
     		scanf("%d", &A[rows][columns]);
   	}
 	}


	printf("\nEnter elements of Matrix B\n");
	for(rows = 0; rows < i; rows++){

  		for(columns = 0; columns < j; columns++){
           printf("Element %d,%d: ", rows,columns);
     		scanf("%d", &B[rows][columns]);
   	}
 	}

	for(rows = 0; rows < i; rows++)
 	{
  		for(columns = 0; columns < j; columns++){

     		C[rows][columns] = A[rows][columns] + B[rows][columns];
  	 	}
 	}

	printf("\nThe Sum of Matrix A and B is\n");

	for(rows = 0; rows < i; rows++){

  		for(columns = 0; columns < j; columns++){

     		printf("%d \t ", C[rows][columns]);
   	}

   	printf("\n");
 	}

   return 0;

}
