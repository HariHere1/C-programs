/*
 ============================================================================
 Name        : asssignment4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter your mark percentage");
	int total_mark;
	setbuf(stdout,NULL);
	scanf("%d",&total_mark);

	if(total_mark>90){

			printf("Grade : A ");
	}
	else if(total_mark>80&&total_mark<90){

			printf("Grade : B ");
	}

	else if(total_mark>70&&total_mark<80){

			printf("Grade : C ");
	}

	else if(total_mark>60&&total_mark<70){

			printf("Grade : D ");
	}

	else if(total_mark>50&&total_mark<60){

				printf("Grade : E ");
		}

	else if(total_mark==50){

				printf("Grade : E");
		}

	else{

				printf("You have Failed ");
		}

	return EXIT_SUCCESS;
}
