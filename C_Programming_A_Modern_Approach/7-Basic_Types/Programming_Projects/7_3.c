// 7_3 - Modify the sum2.c program of Section 7.1 to sum a series of double values.

/* Sum a series of numbers (using long double variables) */

#include <stdio.h>

int main(void) {

	long double, sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");

	scanf("%Lf", &n);
	while(n != 0) {
		sum += n;
		scanf("%lF", &n);
	}
	printf("The sum is: %ld\n", sum);

	return 0;
}
