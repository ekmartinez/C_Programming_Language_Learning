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

int roundToInteger(double number);
double roundToTenths(double number);
double roundtoHundreths(double number);
double roundToThousandths(double number);

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

	printf("\n1\t%.2f\t%d\t%.2f\t%3.f\t%4.f\n", value_read_1, roundToInteger(value_read_1), roundToTenths(value_read_1), roundtoHundreths(value_read_1), roundToThousandths(value_read_1));
	printf("\n1\t%.2f\t%d\t%.2f\t%3.f\t%4.f\n", value_read_2, roundToInteger(value_read_2), roundToTenths(value_read_2), roundtoHundreths(value_read_2), roundToThousandths(value_read_2));
	printf("\n1\t%.2f\t%d\t%.2f\t%3.f\t%4.f\n", value_read_3, roundToInteger(value_read_3), roundToTenths(value_read_3), roundtoHundreths(value_read_3), roundToThousandths(value_read_3));

	return 0;

/*
For each value read, your program should print the original value, the number rounded to the
nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest hun-
dredth, and the number rounded to the nearest thousandth.
*/

}

int roundToInteger(double number) {
	int y = (int)floor(number);
	return y;
}

double roundToTenths(double number) {
	double y = floor(number * 10 + .5) / 10;
	return y;
}
double roundtoHundreths(double number) {
	double y = floor(number * 100 + .5) / 100;
	return y;
}

double roundToThousandths(double number) {
	double y = floor(number * 1000 + .5) / 1000;
	return y;
}
