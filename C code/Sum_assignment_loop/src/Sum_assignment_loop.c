/*
 ============================================================================
 Name        : Sum_assignment_loop.c
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
	int i,lim,sum=0;
	setbuf(stdout,NULL);
	scanf("%d",&lim);
	for(i=1;i<=lim;i++){
		if(i%2==1){
			sum=sum+i;
			}

		}
	printf("Sum : %d""\n",sum);


	return EXIT_SUCCESS;
}
