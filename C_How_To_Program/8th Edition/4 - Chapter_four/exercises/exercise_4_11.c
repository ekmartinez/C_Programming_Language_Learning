/*
4.11 (Calculating the Sum of Multiples) Write a program to calculate and print the sum of all
multiples of 7 from 1 to 100.
*/

#include <stdio.h>

int main(void) 
{
	int multiples = 0;

	for (int num = 1; num < 101; num++) {
		multiples = 7 * num;
		printf("%d\n", multiples);
	}
}
