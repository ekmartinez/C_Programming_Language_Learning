/*
Write a program that prints the values of sizeof(int), sizeof(short),
sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).
*/

#include <stdio.h>

int main(void) {
	puts("");
	printf("Size of short: %d\n", sizeof(short));
	printf("Size of int: %d\n", sizeof(int));
	printf("Size of long: %d\n", sizeof(long));
	printf("Size of float: %d\n", sizeof(float));
	printf("Size of double: %d\n", sizeof(double));
	printf("Size of long double: %d\n", sizeof(long double));

	return 0;
}
