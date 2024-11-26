/*
Rewrite the program in Programming Project 2 so that it prints the reversal of a 
three-digit number without using arithmetic to split the number into digits. 

Hint: See the upc.c program of Section 4.1.
*/

#include <stdio.h>

int main(void) 
{
	int firstDigit, secondDigit, thirdDigit = 0;
	printf("\n%s", "Enter a three-digit number: ");
	scanf("%1d%1d%1d", &firstDigit, &secondDigit, &thirdDigit);

	printf("%s%d%d%d\n", "The reversal is: ", thirdDigit, secondDigit, firstDigit);
	}
