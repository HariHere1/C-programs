/*
 ============================================================================
 Name        : if.c
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
	int b;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%d%d",&a,&b);
	if(a==b){
		printf("Both numbers are same");
	}
	else{
		printf("Both numbers are not same");
	}

	return EXIT_SUCCESS;
}
