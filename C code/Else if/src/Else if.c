/*
 ============================================================================
 Name        : Else.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	int num2;
	setbuf(stdout,NULL);
	printf("Enter 2 Numbers");
	scanf("%d%d",&num1,&num2);
	printf(" 1 for Addition ""\n" "2 for Multiplication " "\n" "3 for Division" "\n" "4 for subtraction" );
	int result;
	int selection;
	scanf("%d",&selection);

	if(selection==1){
		result=num1+num2;
		printf("Addition result : %d",result);
	}
	else if	(selection==2){
		result=num1*num2;
		printf("Multiplication result : %d",result);
	}
	else if(selection==3){
		result=num1/num2;
		printf("Divison result : %d",result);
	}
	else {
		result=num1-num2;
		printf("Subtraction result : %d",result);
	}


	return EXIT_SUCCESS;
}
