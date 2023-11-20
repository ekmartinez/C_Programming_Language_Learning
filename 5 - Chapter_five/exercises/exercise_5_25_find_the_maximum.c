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
		printf("\n%d%d%d%d\n", first_digit, second_digit, third_digit, fourth_digit);


		return 0;
}


int find_max(int num1, int num2, int num3, int num4) {

	return 0;



}
