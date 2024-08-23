// Shifted, scaled random integers produced by 1 + rand() % 6

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (int i = 1; i <= 10; ++i) {
        printf("%d  ", 1 + (rand() % 6)); // display random die value
    }

    puts("");
}

// While experimenting and testing this is ok, but if it has no seed
// you will get the same results every time you run the program.
// later examples make use of a seed for true random number generation.
