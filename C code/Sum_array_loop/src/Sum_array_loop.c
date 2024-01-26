/*
 ============================================================================
 Name        : Sum_array_loop.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter the number of elements in the array ");
	int i,a[10],n,sum=0;
	setbuf(stdout,NULL);
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		sum=sum+a[i];
	}
	printf("Sum : %d",sum);

	return EXIT_SUCCESS;
}
