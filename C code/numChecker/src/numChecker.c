/*
 ============================================================================
 Name        : numChecker.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter 3 numbers");
	int a;
	int b;
	int c;
	setbuf(stdout,NULL);
	scanf("%d%d%d",&a,&b,&c);
	if(a>c){
		printf(" Greatest numb is : %d",a);
	}
	if(b>c){
		printf("Greatest numb is : %d",b);
	}
	else{
		printf("Greatest numb is : %d",c);
	}

	return EXIT_SUCCESS;
}
