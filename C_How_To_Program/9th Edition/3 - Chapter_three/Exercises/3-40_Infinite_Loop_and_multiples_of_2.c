/*3.40 (Multiples of 2 with an Infinite Loop) Write a program that keeps
printing the multiples of the integer 2, namely 2, 4, 8, 16, 32, 64, and so on.
Your loop should not terminate (i.e., you should create an infinite loop).
What happens when you run this program?
*/

#include <stdio.h>

int main(void)
{
    int number = 1;

    while (number > 0) {
        if (number % 2 == 0) {
            printf("%d\n", number);
        }
        number++;
    }
    return 0;
}

/*
 This program will, as intended, loop forever, printing the multiples of 2,
 while consuming a lot of cpu resources in the process.
