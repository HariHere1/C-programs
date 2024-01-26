/*
 ============================================================================
 Name        : Number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter the limit");
	int i,limit,j;
	setbuf(stdout,NULL);
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
