/*
 ============================================================================
 Name        : Star_printing_loop.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter the Limit");
	int i,n,j;
	setbuf(stdout,NULL);
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			printf(" * ");
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
