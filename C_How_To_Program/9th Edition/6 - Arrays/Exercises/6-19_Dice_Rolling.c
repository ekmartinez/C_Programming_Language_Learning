/*
6.19 (Dice Rolling) Write a program that simulates rolling two dice. The program
should use rand twice to roll the first and second die, respectively, then calculate their
sum. Because each die can have an integer value from 1 to 6, the sum of the values will
vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 the least frequent
sums.

Your program should roll the two dice 36,000 times. Use a one-dimensional array to
tally the numbers of times each possible sum appears. Print the results in tabular format.
Also, determine whether the totals are reasonable—for example, there are six ways to roll a 7,
so approximately one-sixth of all the rolls should be 7.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 13

int main(void) {
    srand(time(NULL));

    int rolls[SIZE] = {0};

    for (int roll = 1; roll <= 36000; ++roll) {
        size_t addend = 1 + rand() % 6;
        size_t augend = 1 + rand() % 6;
        size_t sum = addend + augend;
        ++rolls[sum];
    }

    printf("%s%17s\n", "Sum", "Frequency");

    for (size_t s = 1; s < SIZE; ++s) {
        printf("%3zu%17d\n", s, rolls[s]);
    }
}

/*
Output:

Sum        Frequency
  1                0
  2              923
  3             1992
  4             2996
  5             3931
  6             5064
  7             6043
  8             4994
  9             3992
 10             3074
 11             1962
 12             1029

*/
