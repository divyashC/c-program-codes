#include <stdio.h>

struct studentDetails {

	int stdNo;
	float CHE;
	float CPL;
	float EGP;

};

int main () {

	struct studentDetails student[50];

	int i;

	for(i=0; i<50; i++){

		printf("Enter Student Number (Student %d): ", i+1);
		scanf("%d", &student[i].stdNo);

		printf("Enter marks for CHE101: ");
		scanf("%f", &student[i].CHE);

		printf("Enter marks for CPL101: ");
		scanf("%f", &student[i].CPL);

		printf("Enter marks for EGP101: ");
		scanf("%f", &student[i].EGP);

		printf("\n");

	}

	float cheH = 0, cplH = 0, egpH = 0;
	int a, b, c;

    for(i=0;i<50;i++){

    	if(student[i].CHE > cheH){
    		cheH = student[i].CHE;
    		a = i;
    	}

    	if(student[i].CPL > cplH){
    		cplH = student[i].CPL;
    		b = i;
    	}

    	if(student[i].EGP > egpH){
    		egpH = student[i].EGP;
    		c = i;
    	}
    }

    printf("CHE101 Topper is Student %d with marks %.2f\n", student[a].stdNo, student[a].CHE);
    printf("CPL101 Topper is Student %d with marks %.2f\n", student[b].stdNo, student[b].CPL);
    printf("EGP101 Topper is Student %d with marks %.2f\n", student[c].stdNo, student[c].EGP);

	return 0;

}