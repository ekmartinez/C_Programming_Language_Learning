/*
4.10 (Average a Sequence of Integers) Write a program that calculates and prints the
average of several integers. Assume the last value read with scanf is the sentinel 9999.

A typical input sequence might be

10 8 11 7 9 9999

indicating that the average of all the values preceding 9999 is to be calculated.
*/

#include <stdio.h>

int main(void)
{
    int number = 0;

    printf("%s\n", "Enter sequence below: ");
    int input = scanf("%d", &number);

    int sum = 0;
    int count = 0;

    do {
        if (input == 1) {
            sum += number;
            count++;
        }
        else {
            puts("You have entered an unexpected value, exiting.");
            return 1;
        }
        input = scanf("%d", &number);
    } while(number != 9999);

    double average = (double) sum / count;
    printf("\n%s%.2f\n", "Average: ", average);

    return 0;
}
/*
Enter sequence below:
10
8
11
7
9
9999

Average: 9.00
*/
