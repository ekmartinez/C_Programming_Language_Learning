/*
 * 5.31 (Coin Tossing) Write a program that simulates coin tossing. For each toss of the coin the
program should print Heads or Tails. Let the program toss the coin 100 times, and count the num-
ber of times each side of the coin appears. Print the results. The program should call a separate func-
tion flip that takes no arguments and returns 0 for tails and 1 for heads. [Note: If the program
realistically simulates the coin tossing, then each side of the coin should appear approximately half
the time for a total of approximately 50 heads and 50 tails.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(void);

int main(void)
{
	unsigned int heads = 0;
	unsigned int tails = 0;

	for (unsigned int counter = 1; counter < 101; counter++) {

		int random_flip = flip();

		switch(random_flip) {
			case 0:
				tails += 1;
				break;
			case 1:
				heads += 1;
				break;
		}
	}

	printf("\nResults\n-------------\n");
	printf("Heads: %d\n", heads);
	printf("Tails: %d\n",tails);

	return 0;
}

int flip(void) {
	
	//time_t t;
	//srand((unsigned) time(&t));
	int random_try = rand() % 2;
	return random_try;
}

