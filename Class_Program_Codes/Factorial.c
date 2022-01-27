#include<stdio.h>
int fact(int i);
int main(){

    int n,i,sum=0;
    printf("Enter the Value of N:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum = sum + fact(i);
    }

    printf("the sum of n! is %d",sum);
    return 0;

}

int fact(int i) {

    int j, product = 1;

    for(j=1;j<=i;j++){
        product=product*j;
    }

    return product;
}