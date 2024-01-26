/*
 ============================================================================
 Name        : multiplication_table.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter the Number");
	int num;
	int i;
	int result;
	setbuf(stdout,NULL);
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		result=i*num;
		printf("%d x %d = %d""\n",i,num,result);
	}


	return EXIT_SUCCESS;
}
