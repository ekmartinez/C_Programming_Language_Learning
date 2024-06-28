/*
2.30 (Separating Digits in an Integer) 

Write a program that inputs one five-digit number, 
separates the number into its individual digits and 
prints the digits separated from one another by three
spaces each. [Hint: Use combinations of integer division 
and the remainder operation.] 
For example, if the user types in 42139, the program should print:

4   2   1   3   9
 */

#include <stdio.h>

int main(void)
{
	// Read data from user
	int integer = 0;
	int base = 10000;

	printf("%s", "Enter a five-digit integer: ");
	scanf("%d", &integer);

	int integer1 = integer / base; 
	integer = integer % base;
	base -= 9000;

	int integer2 = integer / base; 
	integer = integer % base;
	base -= 900;

	int integer3 = integer / base; 
	integer = integer % base;
	base -= 90;

	int integer4 = integer / base; 
	integer = integer % base;
	base -= 9;

	int integer5 = integer / base; 

	printf("%d   %d   %d   %d   %d\n", 
			integer1, integer2, integer3, integer4, integer5);
		

	return 0;
}
/*
1. Input: 12345
Expected output: 1   2   3   4   5

2. Input: 98765
Expected output: 9   8   7   6   5

3. Input: 55555
Expected output: 5   5   5   5   5

4. Input: 11111
Expected output: 1   1   1   1   1
*/
