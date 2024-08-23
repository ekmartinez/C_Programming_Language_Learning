/*
4.13 (Calculating the Product of Odd Integers) Write a program that calculates and
prints the product of the odd integers from 1 to 15.
*/

#include <stdio.h>

int main(void)
{
    int product = 1;

    for (int c = 1; c <= 15; c++) {
        if (c % 2 != 0) {
            printf("%d ", c);
            product *= c;
        }
    }
    printf("%s%d\n", " = ", product);

    return 0;
}

/*

Output:
1 3 5 7 9 11 13 15  = 2027025

*/


