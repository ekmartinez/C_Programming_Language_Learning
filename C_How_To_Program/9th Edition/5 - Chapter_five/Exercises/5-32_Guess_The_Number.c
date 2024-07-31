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
#include <string.h>

enum Status {CONTINUE, END};

int main(void) {
    srand(time(NULL));

    int guess = 0;
    char continuation[] = "";
    enum Status gameStatus = CONTINUE;

    do {
        int number = 1 + rand() % 1000;

        printf("\n%s\n", "I have a number between 1 and 1000.");
        printf("%s\n", "Can you guess my number?");
        printf("%s", "Please type your first guess >>> ");
        scanf("%d", &guess);
        puts("");

        if (guess == number) {
            printf("\n%s\n", "Excellent! You guessed the number!");
            printf("%s", "Would you like to play again (y or n)? >>> ");
            scanf("%s", continuation);
            if (strcmp(continuation, "y") == 0) {
               gameStatus = CONTINUE;
            }
            else {
                gameStatus = END;
            }
        }
        else {
            while(1) {
                if (guess < number) {
                    printf("%s", "Too low. Try again >>> ");
                    scanf("%d", &guess);
                }
                else if (guess > number) {
                    printf("%s", "Too high. Try again >>> ");
                    scanf("%d", &guess);
                }
                if (guess == number) {
                    printf("\n%s\n", "Excellent! You guessed the number!");
                    printf("%s", "Would you like to play again (y or n)? >>> ");
                    scanf("%s", continuation);
                    if (strcmp(continuation, "y") == 0) {
                        gameStatus = CONTINUE;
                        break;
                    }
                    else {
                        gameStatus = END;
                        break;
                    }
                }
            }
        }
    } while(gameStatus == CONTINUE);
}

/*
Output:

I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess >>> 500

Too high. Try again >>> 250
Too low. Try again >>> 350
Too high. Try again >>> 275
Too low. Try again >>> 300
Too low. Try again >>> 325
Too low. Try again >>> 335

Excellent! You guessed the number!
Would you like to play again (y or n)? >>> y

I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess >>> 500

Too low. Try again >>> 750
Too low. Try again >>> 900
Too high. Try again >>> 850
Too high. Try again >>> 800
Too low. Try again >>> 825
Too low. Try again >>> 845
Too low. Try again >>> 847

Excellent! You guessed the number!
Would you like to play again (y or n)? >>> n
*/
