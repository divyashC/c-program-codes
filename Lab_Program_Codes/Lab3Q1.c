#include <stdio.h>
int swap (int x, int y);
int main (){

   int n1, n2, n2swap;
   printf("Enter two numbers: \n");
   scanf("%d \n%d", &n1, &n2);


   n2swap = swap (n1, n2);
   n1 = n2;

   printf("Number 1 = %d \nNumber 2 = %d", n1, n2swap);

   return 0;

}

int swap (int x, int y){

   y = x;

   return y;
}
