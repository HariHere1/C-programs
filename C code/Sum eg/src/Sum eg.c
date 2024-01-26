/*
 ============================================================================
 Name        : Sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	float b;
	setbuf(stdout,NULL);
	printf("Enter a integer number");
	scanf("%d",&a);
	printf("Enter a floating point number");
	scanf("%f",&b);
	float sum;
	sum=a+b;
	printf("Sum : %f ",sum);

	return EXIT_SUCCESS;
}
