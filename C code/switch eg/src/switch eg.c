/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter your choice ""\n"" 1 for Biriyani ""\n""2 for parata");
	int choice;
	setbuf(stdout,NULL);
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("You've selected Biriyani");
		break;

	case 2:
			printf("You've selected parata");
			break;
	default:
			printf("Happy to know that you are a FOOL");

	}

	return EXIT_SUCCESS;
}
