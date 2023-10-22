/*
4.10 (Conversion Celsius to Fahrenheit) Write a program that converts temperatures from 30°C
to 50°C to the Fahrenheit scale. The program should print a table displaying temperatures in the
two scales side by side.
*/

#include <stdio.h>

int main(void)
{
	//Todo: Improve table format
	printf("%s\t%s\n", "Celcius", "Fahrenheit");

	for (float cel = 30; cel < 51; cel++) {
		float far = (9.0/5.0) * cel + 32;

		printf("%.2f\t%.2f\n", cel, far);
	}
}
