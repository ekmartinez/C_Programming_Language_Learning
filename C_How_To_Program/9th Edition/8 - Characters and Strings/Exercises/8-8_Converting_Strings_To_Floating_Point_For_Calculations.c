/* 8.7 (Converting Strings to Integers for Calculations) Write a program that inputs four strings representing integers, converts the strings to integers, sums the values and prints the total of the four values.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char *num1;
    char *num1RemPtr = NULL;
    num1 = malloc(256);
    printf("%s", "Enter first number: ");
    fgets(num1, 255, stdin);
    double num1ToDouble = strtod(num1, &num1RemPtr);
    free(num1);

    char *num2;
    char *num2RemPtr = NULL;
    num2 = malloc(256);
    printf("%s", "Enter second number: ");
    fgets(num2, 255, stdin);
    double num2ToDouble = strtod(num2, &num2RemPtr);
    free(num2);

    char *num3;
    char *num3RemPtr = NULL;
    num3 = malloc(256);
    printf("%s", "Enter third number: ");
    fgets(num3, 255, stdin);
    double num3ToDouble = strtod(num3, &num3RemPtr);
    free(num3);

    char *num4;
    char *num4RemPtr = NULL;
    num4 = malloc(256);
    printf("%s", "Enter fourth number: ");
    fgets(num4, 255, stdin);
    double num4ToDouble = strtod(num4, &num4RemPtr);
    free(num4);

    printf("%s%.2lf\n", "The total is: ",
           num1ToDouble + num2ToDouble + num3ToDouble + num4ToDouble);

}

/*
Enter first number: 525.75
Enter second number: 350.50
Enter third number: 1.25
Enter fourth number: 1575.44
The total is: 2452.94
*/
