/*
5.33 (Guess the Number Modification) Modify your Exercise 5.32 solution to count
the number of guesses the player makes. If the number is 10 or fewer, print "Either
you know the secret or you got lucky!" If the player guesses the number in 10 tries,
then print "Aha! You know the secret!" If the player makes more than 10 guesses, then
print "You should be able to do better!" Why should it take no more than 10 guesses?
Well, with each “good guess” the player should be able to eliminate half of the
numbers. Now show why any number 1 to 1000 can be guessed in 10 or fewer tries.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

enum Status {CONTINUE, END};

void winMessage(int c);

int main(void) {
    srand(time(NULL));

    int guess = 0;
    char continuation[] = "";
    enum Status gameStatus = CONTINUE;

    do {
        int guessCount = 0;
        int number = 1 + rand() % 1000;

        printf("\n%s\n", "I have a number between 1 and 1000.");
        printf("%s\n", "Can you guess my number?");
        printf("%s", "Please type your first guess >>> ");
        scanf("%d", &guess);
        guessCount++;
        puts("");

        if (guess == number) {
            winMessage(guessCount);
            printf("\n%s", "Would you like to play again (y or n)? >>> ");
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
                    guessCount++;
                }
                else if (guess > number) {
                    printf("%s", "Too high. Try again >>> ");
                    scanf("%d", &guess);
                    guessCount++;
                }
                if (guess == number) {
                    winMessage(guessCount);
                    printf("\n%s", "Would you like to play again (y or n)? >>> ");
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

void winMessage(int count) {
    int threshold = 10;
    if (count == threshold) {
        printf("\n%s\n", "Aha! You know the secret!");
    }
    else if (count < threshold) {
        printf("\n%s\n", "Either you know the secret or you got lucky!");
    }
    else if (count > threshold) {
        printf("\n%s\n", "You should be able to do better!");
    }
}

/*
Output:

I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess >>> 500

Too high. Try again >>> 250
Too high. Try again >>> 150
Too low. Try again >>> 200
Too low. Try again >>> 225
Too low. Try again >>> 235
Too low. Try again >>> 245
Too high. Try again >>> 240
Too high. Try again >>> 238
Too low. Try again >>> 239

Aha! You know the secret!

Would you like to play again (y or n)? >>> y

I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess >>> 500

Too low. Try again >>> 750
Too low. Try again >>> 900
Too high. Try again >>> 800
Too low. Try again >>> 850
Too high. Try again >>> 825
Too low. Try again >>> 835
Too low. Try again >>> 840
Too high. Try again >>> 836

Either you know the secret or you got lucky!

Would you like to play again (y or n)? >>> y

I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess >>> 500

Too low. Try again >>> 750
Too low. Try again >>> 900
Too high. Try again >>> 836
Too high. Try again >>> 800
Too high. Try again >>> 775
Too low. Try again >>> 765
Too low. Try again >>> 770
Too low. Try again >>> 772
Too low. Try again >>> 773
Too low. Try again >>> 774
Too low. Try again >>> 775
Too low. Try again >>> 776
Too low. Try again >>> 780
Too low. Try again >>> 890
Too high. Try again >>> 790
Too high. Try again >>> 785
Too high. Try again >>> 880
Too high. Try again >>> 780
Too low. Try again >>> 781
Too low. Try again >>> 782
Too low. Try again >>> 783
Too low. Try again >>> 784

You should be able to do better!

Would you like to play again (y or n)? >>> n
*/
