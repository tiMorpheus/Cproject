#include <stdio.h>

/*
 *Печать таблицы температур по Фаренгейту и Цельсию с шагом(step) фаренгейт
 */

// Start point
void main (void){
	printf("\r\n");
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;    /* нижняя граница таблицы температур */
	upper = 300;  /*верхняя граница*/
	step  = 20;   /*шаг*/
	
	fahr = lower;
	printf("----------------------\r\n");
	printf("Farengeit  -  Celsium\r\n");
	while (fahr <= upper){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f \n", fahr, celsius);
		fahr = fahr + step;
	}
	return ;
}