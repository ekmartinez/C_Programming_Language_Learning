/*
3.38 (Counting 7s) Write a program that reads an integer (5 digits or fewer)
and determines and prints how many digits in the integer are 7s.
*/

#include <stdio.h>

int main(void)
{
    int number = 0;
    int sevens_count = 0;

    printf("%s\n", "Enter a five digit integer: ");
    scanf("%d", &number);

    int first_digit = number / 10000;
    number = number % 10000;
    if (first_digit == 7) {
        sevens_count++;
    }
    int second_digit = number / 1000;
    number = number % 1000;
    if (second_digit == 7) {
        sevens_count++;
    }
    int third_digit = number / 100;
    number = number % 100;
    if (third_digit == 7) {
        sevens_count++;
    }
    int fourth_digit = number / 10;
    number = number % 10;
    if (fourth_digit == 7) {
        sevens_count++;
    }
    int fifth_digit = number;
    if (fifth_digit == 7) {
        sevens_count++;
    }
    printf("\n%d\n", sevens_count);

    return 0;
}
