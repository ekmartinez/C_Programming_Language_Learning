/*
4.21 Rewrite the program of Fig. 4.2 to define and initialize the variable counter
before the for statement, then output the value of counter after the loop terminates.
*/

// fig04_02.c
// Counter-controlled iteration with the for statement.
#include <stdio.h>

int main(void)
{
// initialization, iteration condition, and increment
// are all included in the for statement header.
    int counter;

    for (counter = 1; counter <= 5; ++counter) {
        printf("%d ", counter);
    }
    puts(""); // outputs a newline
    printf("%s%d\n", "Counter: ", counter);

    return 0;
}
/*
1 2 3 4 5
Counter: 6
*/
