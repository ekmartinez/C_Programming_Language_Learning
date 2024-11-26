/*
Write a program that asks the user to enter a two-digit number, then prints the number 
with its digits reversed. A session with the program should have the following appearance
: 

Enter a two-digit number: 28
The reversal is: 82

Read the number using %d, then break it into two digits. Hint: If n is an integer, 
then n % 10 is the last digit in n and n / 10 is n with the last digit removed.
*/

#include <stdio.h>

int main(void) 
{
	int number = 0;
	printf("\n%s", "Enter a two-digit number: ");
	scanf("%d", &number);

	int firstDigit = number / 10;
	int secondDigit = number % 10;

	printf("%s%d%d\n", "The reversal is: ", secondDigit, firstDigit);  

}
