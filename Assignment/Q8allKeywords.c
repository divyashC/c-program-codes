#include <stdio.h>
#include <stdlib.h>

void printfun(int n);

struct stddetails {

    long int stdno;
    double avg;

}Student[3];

typedef union stdmarks{
    float sub1;
    float sub2;
    float sub3;
}stdmarksunion;

int main() {

    stdmarksunion temp, one;

    short i,j;
    const totalsub = 3;

    for (i=0; i<3; i++){

        printf("\nStudent %d", i+1);

        printf("\nEnter Student Number: ");
        scanf("%ld", &Student[i].stdno);

        printf("Enter Marks for Subject 1: ");
        scanf("%f", &temp.sub1);
        printf("Enter Marks for Subject 2: ");
        scanf("%f", &temp.sub2);
        printf("Enter Marks for Subject 3: ");
        scanf("%f", &temp.sub3);

        Student[i].avg = ( temp.sub1 + temp.sub2 + temp.sub3 )/totalsub;

    }

    printfun(3);


    return 0;
}

void printfun(int n){

    int i=0;
    char grade;

    do {
        printf("\n\nStudent %d", i+1);

        printf("\nStudent Number: %d",Student[i].stdno);
        printf("\nAverage: %.2f",Student[i].avg);

        if (Student[i].avg>90){
            grade = 'A';
        }

        else if (Student[i].avg<90 && Student[i].avg>80){
            grade = 'B';
        }

        else {
            grade = 'C';
        }
        
        switch (grade){

        case ('A'):
            printf("\nGrade = A");
            break;

        case ('B'):
            printf("\nGrade = B");
            break;
        
        default:
            printf("\nGrade = C");
            break;

        }
        i++;

    }
    while (i<n);

}