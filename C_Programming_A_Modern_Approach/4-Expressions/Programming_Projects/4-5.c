/*
Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits at 
one time, instead of entering one digit, then five digits, and then another five digits.

Enter the first 11 digits of a UPC: 01380015173
Check digit: 5
*/

#include <stdio.h>

int main(void)
{
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11,
		first_sum, second_sum, total;

	printf("Enter the first 11 digits of a UPC: "); 
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
			&d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);

	first_sum = d1 + d3 + d5 + d7 + d9 + d11;
	second_sum = d2 + d4 + d6 + d8 + d10;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}

