#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


#define AC_RED     "\x1b[31;1m"
#define AC_GREEN   "\x1b[32;40m"
#define AC_YELLOW  "\x1b[33m"
#define AC_BLUE    "\x1b[34m"
#define AC_MAGENTA "\x1b[35m"
#define AC_CYAN    "\x1b[36m"
#define AC_RESET   "\x1b[0m"

const char * allowedFlags [] = { "--size","--sort","--print" };
const int const allowedFlagsLenght  = sizeof allowedFlags / sizeof allowedFlags[0];


void validateFlags(const char * const flags [], int lenght){

	int incorrectFlagIndex = -1;

	for(int i = 1; i < lenght ; i++){
		for(int j = 0; j < allowedFlagsLenght; j++){
			
			if(strcmp(flags[i], allowedFlags[j]) == 0){
				incorrectFlagIndex = -1;
				break;
			}else {
				incorrectFlagIndex = i;
			}
		}
		if(incorrectFlagIndex > -1){
			printf(AC_RED "[-] Error: %s incorrect flag was given!%s\n", flags[incorrectFlagIndex], AC_RESET);
			exit(EXIT_FAILURE);
		}
	}
	return;
}

int main (const int const argc, const char * const argv []){

	if(argc > 1){
		validateFlags(argv, argc);
	}
	printf(AC_GREEN "[+] Congratulation%s", AC_RESET);



	return EXIT_SUCCESS;
}