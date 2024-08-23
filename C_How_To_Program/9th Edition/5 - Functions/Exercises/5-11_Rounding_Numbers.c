/*
5.11 (Rounding Numbers) Function floor may be used to round a number to a specific decimal place.

The statement y = floor(x * 10 + .5) / 10; rounds x to the tenths position
(the first position to the right of the decimal point).

The statement y = floor(x * 100 + .5) / 100; rounds x to the hundredths position
(the second position to the right of the decimal point).

Write a program that defines functions to round a number x in various ways:
a) roundToInteger(number)
b) roundToTenths(number)
c) roundToHundreths(number)
d) roundToThousandths(number)
*/

#include <stdio.h>
#include <math.h>

// Prototypes
void dialog(void);
void getter(void);
int roundToInteger(double x);
double roundToTenths(double x);
double roundToHundreths(double x);
double roundToThousandths(double x);

// Global variables
int option = 0;
double number = 0.00;

// Main
int main(void) {

    double rounded = 0.00;

    do {
       dialog();
       switch(option){
           case 1:
               getter();
               rounded = roundToInteger(number);
               printf("%s%d\n", "Rounded: ", (int)rounded);
               break;
           case 2:
               getter();
               rounded = roundToTenths(number);
               printf("%s%.1f\n", "Rounded: ", rounded);
               break;
           case 3:
               getter();
               rounded = roundToHundreths(number);
               printf("%s%.2f\n", "Rounded: ", rounded);
               break;
           case 4:
               getter();
               rounded = roundToThousandths(number);
               printf("%s%.3f\n", "Rounded: ", rounded);
               break;
           default:
               puts("You have chosen an illegal option");
               break;
        }
    } while (option != -1);
}

// Functions
void dialog(void) {
    // Dialog function to avoid repetition.
    printf("\n%s\n%s\n", "Rounder", "------------------------------");
    printf("%s\n", "Select an option (-1 to quit)");
    printf("%s\n", "1 - Round to Integer.");
    printf("%s\n", "2 - Round to Tenths.");
    printf("%s\n", "3 - Round to Hundredths.");
    printf("%s\n", "4 - Round to Thousandths.");
    printf("%s", ">>> ");
    scanf("%d", &option);
}

void getter(void) {
    // Get number function to avoid repetition
    printf("%s", "Enter a number: ");
    scanf("%lf", &number);
}

int roundToInteger(double x) {
    return floor(x + .5);
}

double roundToTenths(double x) {
    return floor(x * 10 + .5) / 10;
}

double roundToHundreths(double x) {
    return floor(x * 100 + .5) / 100;
}

double roundToThousandths(double x) {
    return floor(x * 1000 + .5) / 1000;
}

/*
**a) roundToInteger(number)**

* Test case: Positive integer (e.g., 5)
        + Expected result: 5
* Test case: Negative integer (e.g., -3)
        + Expected result: -3
* Test case: Positive decimal (e.g., 4.7)
        + Expected result: 5
* Test case: Negative decimal (e.g., -2.9)
        + Expected result: -3

**b) roundToTenths(number)**

* Test case: Integer with no tenths (e.g., 5)
        + Expected result: 5.0
* Test case: Positive decimal with one tenth (e.g., 4.7)
        + Expected result: 4.7
* Test case: Negative decimal with one tenth (e.g., -2.3)
        + Expected result: -2.3
* Test case: Large positive number with many tenths (e.g., 123.456)
        + Expected result: 123.5

**c) roundToHundreths(number)**

* Test case: Integer with no hundredths (e.g., 5)
        + Expected result: 5.00
* Test case: Positive decimal with one hundredth (e.g., 4.72)
        + Expected result: 4.72
* Test case: Negative decimal with one hundredth (e.g., -2.31)
        + Expected result: -2.31
* Test case: Large positive number with many hundredths (e.g., 123.4567)
        + Expected result: 123.46

**d) roundToThousandths(number)**

* Test case: Integer with no thousandths (e.g., 5)
        + Expected result: 5.000
* Test case: Positive decimal with one thousandth (e.g., 4.7232)
        + Expected result: 4.723
* Test case: Negative decimal with one thousandth (e.g., -2.3123)
        + Expected result: -2.312
* Test case: Large positive number with many thousandths (e.g., 123.456789)
        + Expected result: 123.457
*/
