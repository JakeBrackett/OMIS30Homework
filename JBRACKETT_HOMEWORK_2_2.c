#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2, sum;
	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Enter another number: ");
	scanf("%d", &num2);
	sum = num1+num2;
	if(sum > 0)
		printf("The sum of %d and %d is positive\n", num1, num2);
	else if(sum < 0)
		printf("The sum of %d and %d is negative\n", num1, num2);
	else
		printf("The sum of %d and %d is zero\n", num1, num2);
	return 0;
}
