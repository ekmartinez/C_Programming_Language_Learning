/*
4.11 (Find the Smallest) Write a program that finds the smallest of several integers.
Assume that the first value read specifies the number of values remaining.
*/

#include <stdio.h>

int main(void)
{
    int count = 0;
    int number = 0;
    int minimum = 0;

    printf("%s\n", "Enter sequence below: ");

    do {
        int input = scanf("%d", &number);
        if (input == 1) {
            if (count == 0) {
                count = number + 1;
            }
            if (minimum == 0 || number < minimum) {
                minimum = number;
            }
        }
        else {
            puts("You have entered a unexpected entry. Exiting...");
            return 1;
        }
        count--;
    } while (count > 0);

    printf("\n%s%d\n", "Minimum: ", minimum);

    return 0;
}

/*
Enter sequence below:
6
13
20
100
500
1000
5

Minimum: 5
*/

