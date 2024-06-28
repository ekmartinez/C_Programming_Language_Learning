/*
3.22 (Printing Numbers from a Loop) Write a program that
utilizes looping to print the numbers from 1 to 10 side
by side on the same line with three spaces between numbers.
*/

#include <stdio.h>

int main(void)
{
    int number = 1;
    int count = 10;

    while (count > 0) {
        printf("%d   ", number++);
        --count;
    }

    puts("");

    return 0;
}

