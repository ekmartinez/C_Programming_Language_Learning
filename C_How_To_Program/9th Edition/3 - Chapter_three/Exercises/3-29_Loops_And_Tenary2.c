/*
 3.29 What does the following program print?
 */

#include <stdio.h>

int main(void) {

    int row = 10; // initialize row

    while (row >= 1) { // loop until row < 1
        int column = 1; // set column to 1 as iteration begins

        while (column <= 10) { // loop 10 times
            printf("%s", (row % 2) ? "<": ">"); // output
            ++column; // increment column
        } // end inner while

        --row; // decrement row
        puts(""); // begin new output line
    } // end outer while
} // end function main
