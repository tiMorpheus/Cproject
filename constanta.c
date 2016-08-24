#include <stdio.h>
// инструкции пре-процессора
#define TAX 23

// Start point
void main (void){
	printf("\r\n");

	short number = 10;

	printf("%i \r\n",number);

	number = 20;

	printf("%i \r\n",number);

	number = 30;

	printf("%i \r\n",number);
	printf("%i \r\n", TAX);



	return ;
}