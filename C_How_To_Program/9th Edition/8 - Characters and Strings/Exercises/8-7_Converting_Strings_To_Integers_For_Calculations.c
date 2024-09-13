/* 8.7 (Converting Strings to Integers for Calculations) Write a program that
 * inputs four strings representing integers, converts the strings to integers,
 * sums the values and prints the total of the four values.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char *num1;
    char *num1RemPtr = NULL;
    num1 = malloc(256);
    printf("%s", "Enter first number: ");
    fgets(num1, 255, stdin);
    long num1ToInt = strtol(num1, &num1RemPtr, 0);
    free(num1);

    char *num2;
    char *num2RemPtr = NULL;
    num2 = malloc(256);
    printf("%s", "Enter second number: ");
    fgets(num2, 255, stdin);
    long num2ToInt = strtol(num2, &num2RemPtr, 0);
    free(num2);

    char *num3;
    char *num3RemPtr = NULL;
    num3 = malloc(256);
    printf("%s", "Enter third number: ");
    fgets(num3, 255, stdin);
    long num3ToInt = strtol(num3, &num3RemPtr, 0);
    free(num3);

    char *num4;
    char *num4RemPtr = NULL;
    num4 = malloc(256);
    printf("%s", "Enter fourth number: ");
    fgets(num4, 255, stdin);
    long num4ToInt = strtol(num4, &num4RemPtr, 0);
    free(num4);

    printf("%s%ld\n", "The total is: ",
           num1ToInt + num2ToInt + num3ToInt + num4ToInt);

}

/*
Enter first number: 125
Enter second number: 250
Enter third number: 500
Enter fourth number: 750
The total is: 1625
*/
