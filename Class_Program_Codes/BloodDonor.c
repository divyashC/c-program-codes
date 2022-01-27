#include <stdio.h>
int main () {

    int age;
    float weight;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight: ");
    scanf("%f", &weight);

    if (age>=18 && age<=55){

        if (weight>45){
            printf("You  are eligible!");
        }

        else {
            printf("You  are not eligible!");
        }

    }

    else {
        printf("You  are not eligible!");
     }

    return 0;
}