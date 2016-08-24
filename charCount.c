#include <stdio.h>



// Start point
void main (void){
	double count;
	for (count = 0 ; getchar() != EOF; ++count)
		;

	printf("%.0d\n",count);

	return ;
}