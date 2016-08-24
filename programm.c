#include <stdio.h>



// Start point
void main (void){
	unsigned short firstValue  = 30000;	
	unsigned short secondValue = 20000;
	signed short thirdValue    =-30000;

	printf("\r\n");

	printf("%15s %i \r\n","First value:" ,firstValue);
	printf("%15s %i \r\n", "Second value:" ,secondValue);
	printf("%15s %i \r\n", "Third value:",thirdValue);

	return;
}