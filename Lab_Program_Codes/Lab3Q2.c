#include <stdio.h>
int fact(int x);

int main(){

   int sum;
   sum = fact(1)/1 + fact(2)/2 + fact(3)/3 + fact(4)/4 + fact(5)/5;
	printf("The sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5");
   printf("\n = %d",sum);

   return 0;

}

int fact(int x){

   int i, product=1;
   for (i=1; i<=x; i++){
		product = product*i;
	}

   return product;
}
