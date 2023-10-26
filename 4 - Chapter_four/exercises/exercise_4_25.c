/*
4.25 (Table of Decimal, Binary, Octal and Hexadecimal Equivalents) Write a program that prints a table of the binary, octal and hexadecimal equivalents of the decimal numbers in the range 1 through 256. If you’re not familiar with these number systems, read Appendix C before you attempt this exercise. [Note: You can display an integer as an octal or hexadecimal value with the conversion specifiers %o and %X, respectively.]
*/

// This program is to be completed later
// :binary

#include <stdio.h>

int main(void) 
{

	for (unsigned int decimal = 1; decimal < 257; decimal++) {

		
		
		printf("%d\t%d\t%o\t%x\n", decimal, decimal, decimal, decimal);


	}

	return 0;
}



