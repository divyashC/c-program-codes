#include<stdio.h>
int sumAndProduct (int a, int b, int *s, int*p);
int main() {

  int a, b, sum, product;

  printf("Enter Number a: ");
  scanf("%d", &a);
  printf("Enter Number b: ");
  scanf("%d", &b);

  sumAndProduct(a, b, &sum, &product);

  printf("\nThe sum of %d and %d is %d and product is %d", a, b, sum, product);
  
  return 0;

}

int sumAndProduct (int a, int b, int *s, int*p) {

  *s = a + b;
  *p = a * b;
   return 0;

}