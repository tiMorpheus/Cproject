#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// Start point
void main (){
	printf("\r\n");

	int farn;
	for (farn = UPPER; farn >= LOWER; farn = farn - STEP){

		printf("%3d %6.1f\n",farn,(5.0 / 9.0)*(farn - 32.0));
	}
	

	return;
}