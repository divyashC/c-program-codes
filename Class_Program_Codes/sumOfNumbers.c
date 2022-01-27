#include <stdio.h>
int main(){

	int i,n, sum=0;

	printf("Enter the value of N: ");
	scanf("%d", &n);

	for (i=1; i<=n; i++){
		sum = sum + i;
	}

	printf("The sum of first %d Natural numbers is %d", n,sum);

	return 0;

}
