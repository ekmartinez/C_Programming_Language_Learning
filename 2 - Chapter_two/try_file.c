
/*
 (Separating Digits in an Integer) Write a program that inputs one five-digit number, sep-
arates the number into its individual digits and prints the digits separated from one another by three
spaces each. [Hint: Use combinations of integer division and the remainder operation.] For exam-
ple, if the user types in 42139, the program should print 4   2   1   3   9
*/

`#include <stdio.h>

int main(void) {

	int num;
	int digit;
	int remainder;

	printf("Enter a five digit number >>> ");
	scanf("%d", &num);

	// First Digit
	digit = num / 10000;
	remainder = num % 10000;
	printf("%d   ", digit);
	
	// Second Digit
	digit = remainder / 1000;
	remainder = remainder % 1000;
	printf("%d   ", digit);
	
	// Third Digit
	digit = remainder / 100;
	remainder = remainder % 100;
	printf("%d   ", digit);

    /// Fourth Digit
	digit = remainder / 10;
	remainder = (remainder % 10) % 10;
	printf("%d   ", digit);
	printf("%d   \n", remainder);

	return 0;
}







/*

EEEEEEEEE
E
EEEEE
E
EEEEEEEEE

ZZZZZZZZZ
        Z
    Z
Z
ZZZZZZZZZ

W       W
W       W
W   W   W
W  W W  W 
W W   W W
*/
