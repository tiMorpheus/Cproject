#include <stdio.h>

#define SIZE 4



void showArrayAdressess(float array[], int length){


	for (int i = 0; i < length; i++){
		printf("%d: %X\n",i, &array[i]);
	}
	return;
} 

void showArrayAdressessByPointer(float *array, int length){
		for (int i = 0; i < length; i++){
		printf("%d: %X\n",i, &array[i]);
	}
}


// Start point
int main (void){
	
	float prices[SIZE] = {1000.0,2000.0,3000.0,4000.0,};
	
	
	printf("\n[*] index access:\n");
	printf("0: %10.2f\n", prices[0]);
	printf("1: %10.2f\n", prices[1]);
	printf("2: %10.2f\n", prices[2]);
	printf("3: %10.2f\n", prices[3]);

	printf("\n[*] pointer access:\n");
	printf("%.2f\n", *(prices + 0));
	printf("%.2f\n", *(prices + 1));
	printf("%.2f\n", *(prices + 2));
	printf("%.2f\n", *(prices + 3));

	size_t floatSize = sizeof(float);
	size_t intSize = sizeof(int);
	size_t charSize = sizeof(char);

	printf("\nFloat size: %u bytes\n", floatSize);
	printf("Int size: %u bytes\n", intSize);
	printf("Char size: %u bytes\n", charSize);

	printf("\nPrices size: %u bytes\n", sizeof prices);

	showArrayAdressess(prices, SIZE);
	printf("\n--------------------------\n\n");
	showArrayAdressessByPointer(prices, SIZE);

	return 0;
}