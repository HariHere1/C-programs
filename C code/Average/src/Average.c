/*
 ============================================================================
 Name        : Average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,num3;
	setbuf(stdout,NULL);
	printf("Enter 3 numbers");
	scanf("%f%f%f",&num1,&num2,&num3);
	float avg;
	avg=(num1+num2+num3)/3;
	printf("average is :%f",avg);

	return EXIT_SUCCESS;
}
