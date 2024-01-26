
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	int num2;
	int sum;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers")
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("Sum : %d",sum);

	return EXIT_SUCCESS;
}
