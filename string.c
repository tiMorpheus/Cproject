#include <stdio.h>


#define SIZE 4

void printString (const char *string){
	printf("%s\n", string);	
} 
void printArrayString(const char **string){
	printf("City: %s\n", string[0]);
	printf("City: %s\n", string[1]);
	printf("City: %s\n", string[2]);


}

// Start point
int main (int argc, const char **  argv){
/*	printf("\n");

	char hello1 [] = {'H', 'e', 'l','l','o','1','\0'};
	char hello2 [] = "Hello2";

	const char * const hello3 = "Hello3";
	const char * const hello4 = "Hello4";

	const char * states [] = { "Moscow", "Kiev", "Lviv"}; 

	printf("hello3: %p\n", hello3);
	printf("hello3: %p\n", hello4);


	printf("hello3: %p\n", hello3);
	printf("hello3: %p\n", hello4);

	printString(hello3);

	// printf("\nState: %s", states[0]);
	// printf("\nState: %s", states[1]);
	// printf("\nState: %s", states[2]);

	printArrayString(states);*/
	printf("%d\n", argc);
	printf("%s\n", argv[0]);
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	return ;
}