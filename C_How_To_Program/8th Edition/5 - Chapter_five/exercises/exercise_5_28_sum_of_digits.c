/*
5.28 (Sum of Digits) Write a function that takes an integer and returns the sum of its digits. For
example, given the number 7631, the function should return 17.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int sum_of_digits(int num);

int main(void) {

	unsigned int number = 0;

	printf("\nEnter an integer with a maximum of 6 digits, and I will tell you the sum of its digits >>> ");
	scanf("%d", &number);
	
	printf("The sum of the digits is: %d\n", sum_of_digits(number));

	return 0;
}

int sum_of_digits(int num) {

	// The following lines provide the length of the integer.
	char strNumber[6];  // buffer size.
	sprintf(strNumber, "%d", num);
	size_t length = strlen(strNumber);
	
	int base = pow(10, length-1);
	
	int sum = 0;

	for (unsigned int i = length; i > 0; i--) {
		int temp_num = num / base;
		num = num % base;
		base /= 10;
		sum += temp_num;
	}

	return sum;
}
