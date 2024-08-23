/*
5.14 For each of the following sets of integers, write a single statement
that will print a number at random from the set:

a) 2, 4, 6, 8, 10.
b) 3, 5, 7, 9, 11.
c) 6, 10, 14, 18, 22.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL)); // seed the random number generator

    int a[] = {2, 4, 6, 8, 10};
    int aSize = sizeof(a) / sizeof(a[0]);
    int randomA = rand() % aSize;
    printf("Randomly selected from a: %d\n", a[randomA]);

    int b[] = {3, 5, 7, 9, 11};
    int bSize = sizeof(b) / sizeof(b[0]);
    int randomB = rand() % bSize;
    printf("Randomly selected from b: %d\n", b[randomB]);

    int c[] = {6, 10, 14, 18, 22};
    int cSize = sizeof(c) / sizeof(c[0]);
    int randomC = rand() % cSize;
    printf("Randomly selected from c: %d\n", c[randomC]);
}






