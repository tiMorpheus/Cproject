#include <stdio.h>
#include <stdbool.h>

#define SIZE 4



// Start point
void main (void){

	int prices[SIZE] = {100, 200, 300, 400};
	
	bool isTrue = true;
	bool isFalse = false;

	printf("True: %d\n", isTrue);
	printf("False: %d\n", isFalse);

	int i = 0;
	while(i < SIZE){
		printf("%d\n", prices[i]);
		i++;
	}

	for(int k = 0 ; k < SIZE ; k++){
		printf("%d\n", prices[k]);
	}


	// printf("%d\n",prices[0]);
	// printf("%d\n",prices[1]);
	// printf("%d\n",prices[2]);
	// printf("%d\n",prices[3]);

	return ;
}		