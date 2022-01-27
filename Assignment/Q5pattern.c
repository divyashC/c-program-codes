#include <stdio.h>
int main(){

   int i, j;

   for(i=0; i<5; i++){

       for(j=5; j>5-i; j--){
           printf("%d  ", j);
        }

       for(j=0; j<5-i; j++){
           printf("%d  ", (5 - i));
        }

       printf("\n");
    }

   return 0;
}