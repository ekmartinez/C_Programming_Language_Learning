/*
Extend the program in Programming Project 1 to handle three-digit numbers.
*/

#include <stdio.h>

int main(void) 
{
	int number = 0;
	printf("\n%s", "Enter a three-digit number: ");
	scanf("%d", &number);

	int firstDigit = number / 100;
	int secondDigit = (number % 100) / 10;
	int thirdDigit = (number % 100) % 10;

	printf("%s%d%d%d\n", "The reversal is: ", thirdDigit, secondDigit, firstDigit);
	}
