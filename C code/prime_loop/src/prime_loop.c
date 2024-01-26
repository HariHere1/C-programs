/*
 ============================================================================
 Name        : prime_loop.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter the number");
	int n,i,flag=0;
	setbuf(stdout,NULL);
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0) {

		printf("A Prime Number");
	}

	else {
		printf(" not a  Prime Number");
	}

	return EXIT_SUCCESS;
}
