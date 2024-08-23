/*
5.31 (Coin Tossing) Write a program that simulates coin tossing. For each toss, display Heads or Tails.
Let the program toss the coin 100 times, and count the number of heads and tails. Display the results.
The program should call a function flip that takes no arguments and returns 0 for tails and 1 for heads.
If the program realistically simulates the coin tossing, then each side of the coin should appear approximately
half the time for a total of approximately 50 heads and 50 tails.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int heads = 0;
    int tails = 0;
    int singleToss = 0;

    for (int toss = 1; toss <= 100; toss++) {
        singleToss = rand() % 2;
        if (singleToss == 0) {
            puts("Tails");
            tails++;
        }
        else {
            puts("Heads");
            heads++;
        }
    }
    printf("%s%d\n", "Heads: ", heads);
    printf("%s%d\n", "Tails: ", tails);

    return 0;
}
