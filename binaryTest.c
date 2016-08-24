#include <stdio.h>



void main (void){
	printf("\n\r");
    char one   = 0B1010100,
    	 two   = 0B1101001,
    	 three = 0B100000, 
    	 four  = 0B1110000, 
    	 five  = 0B1101001,
    	 six   = 0B1100100,
    	 seven = 0B1101111,
    	 eight = 0B1110010;
    
    printf("%c%c%c%c%c%c%c%c",one,two,three,four,five,six,seven,eight);
	return ;
}