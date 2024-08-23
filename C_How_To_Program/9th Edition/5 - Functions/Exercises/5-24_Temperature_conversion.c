/*
5.24 (Temperature Conversions) Implement the following integer functions:

    a) toCelsius returns the Celsius equivalent of a Fahrenheit temperature.
    b) toFahrenheit returns the Fahrenheit equivalent of a Celsius temperature.

Use these functions to write a program that prints charts showing the Fahrenheit
equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents
of all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a tabular format
that minimizes the number of lines of output while remaining readable.
*/

#include <stdio.h>

double toCelsius(int f);
double toFahrenheit(int c);

int main(void) {

    // to fahrenheit
    printf("\n%s\t%s\n", "Celsius", "Fahrenheit");
    for (int celsius = 0; celsius <= 100; celsius++) {
        printf("%d\t%.1f\n", celsius, toFahrenheit(celsius));
    }

    // to celsius
    printf("\n%s\t%s\n", "Fahrenheit", "Celsius");
    for (int fahrenheit = 32; fahrenheit <= 212; fahrenheit++) {
        printf("%d\t%.1f\n", fahrenheit, toCelsius(fahrenheit));
    }
}

double toCelsius(int fahrenheit) {
    //°C = (°F - 32) × 5/9
    return ((double)fahrenheit - 32) * 5/9;
}

double toFahrenheit(int celsius) {
    // °F = (°C × 9/5) + 32
    return ((double)celsius * 9/5) + 32;
}


