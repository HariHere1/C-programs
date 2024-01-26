/*
 ============================================================================
 Name        : break_eg&continue_eg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=10;
	setbuf(stdout,NULL);
	for(i=0;i<=10;i++){
		printf("\n""Hey");
		if(i==5){
			break;
		}
		printf("\n""Hello");
		}
		printf("\n""Thanks");


	return EXIT_SUCCESS;
}
