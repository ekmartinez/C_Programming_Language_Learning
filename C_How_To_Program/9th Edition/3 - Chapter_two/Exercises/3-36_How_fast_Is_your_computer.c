/*
3.36 (How Fast Is Your Computer?) How can you determine how fast
your own computer operates? Write a program with a while loop that
counts from 1 to 1,000,000,000, incrementing by 1 during each iteration
of the loop. Every time the count reaches a multiple of 100,000,000, print
that number on the screen. Use your watch to time how long each 100 million iterations of the loop takes. [Hint: Use the remainder operator to recognize each time the counter reaches a multiple of 100,000,000.]
*/

#include <stdio.h>

int main(void) {

    int number = 1;
    int end = 1000000000; // 1,000,000,000
    int one_hundred_million = 100000000; // 100,000,000

    while (number <= end) {
        if (number % one_hundred_million == 0) {
            printf("%d\n", number);
        }
        number++;
    }
    return 0;
}

/*
Output:

100000000
200000000
300000000
400000000
500000000
600000000
700000000
800000000
900000000
1000000000

3.57 seconds in total
*/
