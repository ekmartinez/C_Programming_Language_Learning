/*
6.16 Label the elements of 3-by-5 two-dimensional array sales to
indicate the order in which they’re set to zero by the following
program segment:

for (size_t row = 0; row <= 2; ++row) {
    for (size_t column = 0; column <= 4; ++column) {
        sales[row][column] = 0;
    }
}
*/

#include <stdio.h>

void printArray(int a[][5]);

int main(void) {

    int sales[3][5];

    for (size_t row = 0; row <= 2; ++row) {
        for (size_t column = 0; column <= 4; ++column) {
            sales[row][column] = 0;
        }
    }
    printArray(sales);
}

void printArray(int a[][5]) {

    int label = 0;

    // loop through rows
    for (size_t i = 0; i <= 1; ++i) {
        // output column values
        for (size_t j = 0; j <= 2; ++j) {
            printf("%d - %d\n", label++, a[i][j]);
        }
    }
}
