/*
 ============================================================================
 Name        : mark.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter your mark out of 100");
	int mark;
	setbuf(stdout,NULL);
	scanf("%d",&mark);
	if(mark>50&&mark==100) {
		printf("You have passed the test");
	}

	else if(mark<50) {
			printf("You have failed the test");
		}
	else if(mark==50) {
				printf("You have passed the test");
			}
	else if(mark>100) {
					printf("Wrong input");
	}
	else{
		printf("You have entered the wrong input");
	}


	return EXIT_SUCCESS;
}
