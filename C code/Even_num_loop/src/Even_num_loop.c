/*
 ============================================================================
 Name        : Even_num_loop.c
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
	int i;
	int n;
	setbuf(stdout,NULL);
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(i%2==0){
		printf(" %d",i);
		}
	}

	return EXIT_SUCCESS;
}
