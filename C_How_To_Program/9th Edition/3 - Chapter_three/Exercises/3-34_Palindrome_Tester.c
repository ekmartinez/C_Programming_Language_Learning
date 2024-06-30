/*
3.34 (Palindrome Tester) A palindrome is a number or a
text phrase that reads the same backward as forward.
For example, each of the following five-digit integers is a
palindrome: 12321, 55555, 45554 and 11611. Write a program
that reads in a five-digit integer and determines whether or
not it’s a palindrome. [Hint: Use the division and remainder
operators to separate the number into its individual digits.]
*/

#include <stdio.h>

int main(void)
{
    int number = 0;

    printf("%s", "Enter a five digit number: ");
    scanf("%d", &number);

    int first_digit = number / 10000;
    number = number % 10000;

    int second_digit = number / 1000;
    number = number % 1000;

    int third_digit = number / 100;
    number = number % 100;

    int fourth_digit = number / 10;
    number = number % 10;

    int fifth_digit = number;

    if (fifth_digit == first_digit && fourth_digit == second_digit) {
        puts("Palindrome");
    }
    else{
        puts("Not Palindrome");
    }

    return 0;
}
