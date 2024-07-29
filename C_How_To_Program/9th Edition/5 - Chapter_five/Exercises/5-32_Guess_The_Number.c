/*
5.32 (Guess the Number) Write a C program that plays the game of “guess the number” as follows:
Your program chooses the number to be guessed by selecting an integer at random in the range 1 to 1000.

The program then types:

I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess.

The player types a first guess. The program responds with one of the following:

1. Excellent! You guessed the number!
Would you like to play again (y or n)?
2. Too low. Try again.
3. Too high. Try again.

If the guess is incorrect, your program should loop until the player guesses the number.
Your program should keep telling the player Too high or Too low to help the player “zero in”
on the correct answer.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int guess = 0;
    int randomNumber = 1 + rand() % 1000;

    puts("I have a number between 1 and 1000.");
    puts("Can you guess my number?");
    printf("%s", "Please enter your first guess: ");
    scanf("%d", &guess);

    while (guess != randomNumber) {
        if (guess == randomNumber) {
            puts()
        }

    }


}
