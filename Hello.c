#include <stdio.h>

//#дериктива пре-процессора <файлы-заголовки , заголовки-функции, прототипы> 
// standart input/output headers
// стандартный ввод/вывод заголовочный файл 
// Заголовочный файл - файл, где находится определения функций  


void beforeMain(){
	printf("beforeMain");
}
// Главная функций
// тип возвращаемого значения Имя метода(аргументы командной строки)
void main(void){
	beforeMain();
	afterMain();
}
void afterMain(){
	printf("afterMain");
}



