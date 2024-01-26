/*
 ============================================================================
 Name        : Array_eg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter the size of the array");
	int a[100];
	int i,limit;
	setbuf(stdout,NULL);
	scanf("%d",&limit);
	printf("Enter the elements into the array");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("Result : ");
	for (i=0;i<limit;i++){
		printf("%d""\t",a[i]);
	}

	return EXIT_SUCCESS;
}
