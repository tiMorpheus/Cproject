#include <stdio.h>

#define EOL '\n'

// Start point
void main (void){

	char one   = 1;
	char two   = 2;
	char three = 3;

	char* onePointer   = NULL;
	char* twoPointer   = NULL;
	char* threePointer = NULL;


	onePointer   = &one;
	twoPointer   = &two;
	threePointer = &three;

	printf("%cOne variable: %d%c",EOL,one,EOL);
	printf("Two variable: %d%c",two,EOL);
	printf("Three variable: %d%c",three,EOL);

	printf("%cOne address: 0x%X%c", EOL, onePointer,EOL);
	printf("Two address: 0x%X%c", twoPointer,EOL);
	printf("Three address: 0x%X%c", threePointer,EOL);

	printf("%cOne value: %d%c",EOL, *onePointer, EOL);
	printf("Two value: %d%c", *twoPointer, EOL);
	printf("Three value: %d%c",*threePointer, EOL);


	*onePointer   = 30;
	*twoPointer   = 20;
	*threePointer = 10;

	printf("%cOne value: %d%c",EOL, *onePointer, EOL);
	printf("Two value: %d%c", *twoPointer, EOL);
	printf("Three value: %d%c",*threePointer, EOL);

	printf("%cOne variable: %d%c",EOL,one,EOL);
	printf("Two variable: %d%c",two,EOL);
	printf("Three variable: %d%c",three,EOL);
	return ;
}