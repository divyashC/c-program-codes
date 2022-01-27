#include <stdio.h>

int main() {

	int i, N[10], sum=0;

	printf("Enter 10 integers: \n");

	for(i=0;i<10;i++){

		scanf("%d\n", &N[i]);

		if(N[i]%2==0){
		sum = sum + N[i];
		}
	}


	printf("The sum of even integers = %d", sum);

	return 0;

}
