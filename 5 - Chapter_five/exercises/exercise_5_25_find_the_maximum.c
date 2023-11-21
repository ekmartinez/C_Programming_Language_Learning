// 5.25(Find the Maximum) Write a function that returns the largest of four floating-point numbers.

#include <stdio.h>

int find_max(int num1, int num2, int num3, int num4);

int main(void) {

	int first_digit = 0;
	int second_digit = 0;
	int third_digit = 0;
	int fourth_digit = 0;

	for (unsigned int counter  = 1; counter < 5; ++counter) {

		int temp_num = 0;

		printf("Enter integer # %d >>> ", counter);
		scanf("%d", &temp_num);

		switch(counter) {
			case 1:
				first_digit = temp_num;
				break;
			case 2:
				second_digit = temp_num;
				break;
			case 3:
				third_digit = temp_num;
				break;
			case 4:
				fourth_digit = temp_num;
				break;
		}
	}
		int max = find_max(first_digit, second_digit, third_digit, fourth_digit);
		printf("\nThe maximum numer is: %d\n", max);

		return 0;
}

// In chapter 6 we study the concept of arrays, for now we
// work with what we have.
int find_max(int num1, int num2, int num3, int num4) {
	
	int max_num = num1;

	if (num2 > max_num) {
		max_num = num2;
	}
	if (num3 > max_num) {
		max_num = num3;
	}
	if (num4 > max_num) {
		max_num = num4;
	}
	
	return max_num;
}
