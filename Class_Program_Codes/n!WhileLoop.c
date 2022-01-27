#include <stdio.h>
int main(){

	int i,n, product=1;

	printf("Enter the value of N: ");
	scanf("%d", &n);

	i=n;

	while(i>=1){
		product = product*i;
		i++;
	}

	printf("%d! = %d", n,product);

	return 0;

}
