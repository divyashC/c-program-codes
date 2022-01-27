#include <stdio.h>
int lcmf(int a, int b, int c);
int main () {

  int a, b, c, lcm;

  printf("Enter number (a): ");
  scanf("%d", &a);
  printf("Enter number (b): ");
  scanf("%d", &b);

  if (a>b){
      c = b;
  }

  else {
      c = a;
  }

  lcm = lcmf(a,b,c);

  printf("The LCM of %d and %d is %d", a, b, lcm);

  return 0;

}

int lcmf(int a, int b, int c){

  int lcm;

   if (c%a==0 && c%b==0){
       lcm = c;
       return lcm;
    }

   else{
       c++;
       lcmf(a,b,c);
   }

}
