#include <stdio.h>
int main () {

    int i, sNum=1;
    int A[9] = {3, 0, 4, -1, 0, 5, 7, 0, 3};

    for (i=0; i<9; i++){

        if (A[i]==0){
            A[i]=sNum;
            sNum++;
        }

    }

    for (i=0; i<9; i++){

        printf("%d ", A[i]);

    }

    return 0;
}