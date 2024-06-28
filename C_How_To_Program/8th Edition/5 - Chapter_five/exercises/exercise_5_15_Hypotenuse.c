/*
5.15 (Hypotenuse Calculations) Define a function called hypotenuse that calculates the length
of the hypotenuse of a right triangle when the other two sides are given. The function should take
two arguments of type double and return the hypotenuse as a double. 

Test:

Triangle	Side1	Side2
1			3.0		4.0
2			5.0		12.0
3			8.0		15.0
*/

#include <stdio.h>
#include <math.h>

double hypotenuse(double s1, double s2);

int main(void) {

	double side1 = 0.00;
	double side2 = 0.00;
	
	puts("\nHypotenuse Calculator\n-----------------------");

	for (unsigned int counter  = 1; counter < 3; ++counter) {

		double side = 0.00;

		printf("Enter side of triangle # %d >>> ", counter);
		scanf("%lf", &side);

		switch(counter) {
			case 1:
				side1 = side;
				break;
			case 2:
				side2 = side;
				break;
		}
	}
	printf("\nHypotenus: %.2f\n\n", hypotenuse(side1, side2));

	return 0;
}

double hypotenuse(double s1, double s2) {

	// c^2 = sqrt(s1^2 + s2^2)
	
	double result = sqrt(pow(s1, 2)+ pow(s2, 2));

	return result;
}
