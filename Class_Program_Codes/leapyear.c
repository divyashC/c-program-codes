#include <stdio.h>

int main(){

	int year;
	printf("Enter a year");
	scanf("%d", &year);

	if (year%4 == 0){

		printf("Year is leap");
	}

	else{

		printf("Year is not leap");
	}

	return 0;

}
