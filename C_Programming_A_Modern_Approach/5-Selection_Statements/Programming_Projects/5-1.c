/*
Write a program that calculates how many digits a number contains:

Enter a number: 374
The number 374 has 3 digits

You may assume that the number has no more than four digits. 

Hint: Use if statements to test the number. For example, if 
the number is between 0 and 9, it has one digit. If the number 
is between 10 and 99, it has two digits.
*/

#include <stdio.h>

int main(void)
{
	int number = 0;
	int digits = 0;

	printf("\n%s", "Enter a number: ");
	scanf("%d", &number);

	if (number >= 0 && number <= 9)
		digits = 1;
	else if (number >= 10 && number <= 99)
		digits = 2;
	else if (number >= 100 && number <= 999)
		digits = 3;
	else if (number >= 1000 && number <= 9999)
		digits = 4;

	printf("The number %d has %d digits\n\n", number, digits);
}
