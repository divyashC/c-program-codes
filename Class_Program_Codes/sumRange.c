#include <stdio.h>

int main() {

	int a,b,sum;

	printf("Enter the value of a: ");
	scanf("%d", &a);

	printf("Enter the value of b: ");
	scanf("%d", &b);

	sum = a+b;

  	if(sum>=100 && sum<=200){

		printf("The sum %d falls in range", sum);
	}

	else{

		printf("The sum %d doesnt fall in range",sum);
	}

	return 0;

}
