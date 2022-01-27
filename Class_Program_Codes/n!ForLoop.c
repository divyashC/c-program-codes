#include <stdio.h>
int main(){

	int i,n, product=1;

	printf("Enter the value of N: ");
	scanf("%d", &n);

	for (i=1; i<=n; i++){
		product = product*i;
	}

	printf("%d! = %d", n,product);

	return 0;

}
