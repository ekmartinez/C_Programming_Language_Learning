/*
3.25 (Tabular Output) Write a program that utilizes
looping to produce the following table of values:

A       A+2     A+4     A+6

3       5       7       9
6       8       10      12
9       11      13      15
12      14      16      18
15      17      19      21
*/

#include <stdio.h>

int main(void)
{
    int n = 3;

    printf("%s\t%s\t%s\t%s\n\n", "A", "A+2", "A+4", "A+6");

    while (n <= 15) {
        printf("%d\t%d\t%d\t%d\n", n, n+2, n+4, n+6);
        n += 3;
    }

    return 0;
}
