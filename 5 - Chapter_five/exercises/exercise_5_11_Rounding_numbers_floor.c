/*
 5.11 (Rounding Numbers) Function floor may be used to round a number to a specific decimal
place. The statement

y = floor(x * 10 + .5) / 10;

rounds x to the tenths position (the first position to the right of the decimal point). The statement

y = floor(x * 100 + .5) / 100;

rounds x to the hundredths position (the second position to the right of the decimal point). Write
a program that defines four functions to round a number x in various ways

a) roundToInteger(number)
b) roundToTenths(number)
c) roundToHundreths(number)
d) roundToThousandths(number)

For each value read, your program should print the original value, the number rounded to the
nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest hun-
dredth, and the number rounded to the nearest thousandth.
*/


#include <stdio.h>
#include <math.h>

int main(void) {

	double value_read_1 = 0.00;
	double value_read_2 = 0.00;
	double value_read_3 = 0.00;

	printf("\nFloat Converter\n-------------------------------------\n");

	for (unsigned int range = 1; range <= 3; ++range) { 
		
		double temp_var = 0.00;
		printf("\nEnter number # %d >>> ", range);
		
		scanf("%lf", &temp_var);
			

		switch(range) {

			case 1:
				value_read_1 = temp_var;
				break;
			case 2:
				value_read_2 = temp_var;
				break;
			case 3:
				value_read_3 = temp_var;
				break;
		}
	
	} 
	
	// Header	
	printf("\n#\tInput\tFloor\t10th\t100\t1000\n");


	printf("\n1\t%.2lf\t%d\t%.2lf\t%.3lf\t%.4lf\n", value_read_1, (int)floor(value_read_1),  floor(value_read_1) / 100,  floor(value_read_1) / 1000,floor(value_read_1) / 10000) ;

	printf("2\t%.2lf\t%d\t%.2lf\t%.3lf\t%.4lf\n", value_read_2,  (int)floor(value_read_2),  floor(value_read_2) / 100,  floor(value_read_2) / 1000, floor(value_read_2) / 10000) ;
	
	printf("3\t%.2lf\t%d\t%.2lf\t%.3lf\t%.4lf\n", value_read_3,  (int)floor(value_read_3), floor(value_read_3) / 100,  floor(value_read_3) / 1000, floor(value_read_3) / 10000) ;

}

