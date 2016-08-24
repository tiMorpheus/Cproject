#include <stdio.h>
 

int getNumber (void){
	
	return 65;
} 			


// 2 маркера в Си
// - %d dicimal number
// - %c symbols
// - %i integer


// комбинация перевода курсора на новую строку
// \r\n - Windows
// \n - unix \ linux \ ubuntu \ mac os

void main (void){
	int x = getNumber();
	printf("Your number is %d \r\n", getNumber());
	printf("Your character is %c ", 1000001);
	return ;
}