// Randomizing the die-rolling program.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%s", "Enter seed: ");
    int seed = 0; // number used to seed the random-number generator
    scanf("%d", &seed);

    srand(seed); // seed the random-number generator

    for (int i = 1; i <= 10; ++i) {
        printf("%d  ", 1 + (rand() % 6)); // display random die value
    }

    puts("");
}
