/*
* Name	 : Alifa Fathia Khaerani
* NPM	 : 1506689313
* Class	 : A
* Comment: interesting, but C is pretty confusing
*/

#define LOOP 3

#include <stdio.h>

void main(){
	int input = 5;
	int result = 0;
	int ii;

	for(ii = 0; ii < input; ii++){
		result = result + LOOP;
	}

	printf("%d", input);
	printf(" times ");
	printf("%d", LOOP);
	printf(" equals ");
	printf("%d", result);
	printf("\n");
}

