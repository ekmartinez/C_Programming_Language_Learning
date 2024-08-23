/*
4.12 (Calculating the Sum of Even Integers) Write a program that calculates and
prints the sum of the even integers from 2 to 30.
*/

#include <stdio.h>

int main(void) {

    int sum = 0;

    for (int c = 2; c <= 30; c++) {
        if (c % 2 == 0) {
            printf("%d ", c);
            sum += c;
        }
    }
    printf("%s%d\n", " = ", sum);

    return 0;
}
/*

Output:
2 4 6 8 10 12 14 16 18 20 22 24 26 28 30  = 240

*/




