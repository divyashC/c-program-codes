#include <stdio.h>
int main () {

    int array[8] = {3,5,10,7,90,35,0,14};
    int i, j, temp;

    printf("Original Array: \n");
    for (i=0; i<8; i++){
        printf("%d ", array[i]);
    }

    for (i=0; i<8; i++){

        for (j=i+1; j<8; j++){

            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nArray Elements in Ascending order is: \n");
    for (i=0; i<8; i++){
        printf("%d ", array[i]);
    }

    return 0;
}