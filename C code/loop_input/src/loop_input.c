/*
 ============================================================================
 Name        : loop_input.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter no of numbers to be added!");
	int lim;
	int i;
	int sum=0;
	setbuf(stdout,NULL);
	scanf("%d",&lim);
	for(i=1;i<=lim;i++){
		sum=sum+i;

	}
	printf("Total : %d",sum);

	return EXIT_SUCCESS;
}
