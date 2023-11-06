/*
 
 5.10 (Rounding Numbers) An application of function ceil is rounding a value to the nearest
integer. The statement

y = ceil(x + .5);

rounds the number x to the nearest integer and assigns the result to y. Write a program that reads
several numbers and uses the preceding statement to round each of these numbers to the nearest
integer. For each number processed, print both the original number and the rounded number.
*/


#include <stdio.h>
#include <math.h>

int round_up(float floating_point);

int main(void) 
{
	float float_1 = 0.00;
	float float_2 = 0.00;
	float float_3 = 0.00;
	
	for (unsigned int counter  = 1; counter < 4; ++counter) {

		float temp_float = 0.00;

		printf("Enter decimal number # %d >>> ", counter);
		scanf("%f", &temp_float);

		switch(counter) {
			case 1:
				float_1 = temp_float;
				break;
			
			case 2:
				float_2 = temp_float;
				break;

			case 3:
				float_3 = temp_float;
				break;
		}
	}

	printf("\n#\tInput\tRounded\t\tMethod\n");
	printf("1\t%.2f\t%d\tCeil\n", float_1, round_up(float_1));
	printf("2\t%.2f\t%d\tCeil\n", float_2, round_up(float_2));
	printf("3\t%.2f\t%d\tCeil\n", float_3, round_up(float_3));
	puts("");
}

int round_up(float floating_point) {

	int	y = ceil(floating_point);
	return y;
}









