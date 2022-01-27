#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {

    int random, n, i;

    srand(time(NULL));
    random = rand() %1000 ;

    for (i=0; i<5; i++){

        printf("Enter Your Guess %d: ", i+1);
        scanf("%d", &n);

        if (n==random){
            printf("\nCongratulations!!!! You won the game!");
            break;
        }

    }

    if (n!=random){
                printf("\nSorry you lost the game after 5 tries!");
                printf("\nThe number was %d", random);
            }

    return 0;
}