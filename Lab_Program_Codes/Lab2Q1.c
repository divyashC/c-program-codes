#include <stdio.h>
int main() {

  int i, spc, blank, element, n, j;
  printf("Enter the number of rows:  ");
  scanf("%d", &n);

  for (i = 1; i<=n; i++) {

     blank = n-i;
     for (spc = 1; spc <= blank; spc++) {
        printf("  ");
     }

     element = (2 * i) - 1;

     for (j=1; j<=element; j++) {
        printf("* ");
     }

     printf("\n");
  }

  return 0;
}





