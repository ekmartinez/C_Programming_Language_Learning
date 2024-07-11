/* Simulating the game of craps.
A player rolls two dice. Each die has six faces. These faces contain
1, 2, 3, 4, 5, and 6 spots. After the dice have come to rest, the sum
of the spots on the two upward faces is calculated. If the sum is 7 or 11
on the first throw, the player wins. If the sum is 2, 3, or 12 on the first
throw (called “craps”), the player loses (i.e., the “house” wins). If the sum
is 4, 5, 6, 8, 9, or 10 on the first throw, that sum becomes the player’s “point.”
To win, you must continue rolling the dice until you “make your point.” The player
loses by rolling a 7 before making the point. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int rollDice(void);

int main(void) {
    srand(time(NULL));

    int myPoint = 0; // player must make this point to wins
    enum Status gameStatus = CONTINUE; // may be CONTINUE, WON OR LOST
    int sum = rollDice(); // first roll of the dice

    // determine game status based on sum of dice
    switch(sum) {
        // win on first roll
        case 7: // 7 is a winner
        case 11: // 11 is a winner
            gameStatus = WON;
            break;
        // lose on first roll
        case 2: // 2 is a loser
        case 3: // 3 is a loser
        case 12: // 12 is a loser
            gameStatus = LOST;
            break;
        //remember point
        default:
            gameStatus = CONTINUE; // player should keep rolling
            myPoint = sum; // remember the point
            printf("Point is %d\n", myPoint);
            break; // optional
    }

    // while game not complete
    while (CONTINUE == gameStatus) { // player should keep rolling
        sum = rollDice(); // roll dice again

        // determine game status
        if (sum == myPoint) {
            gameStatus = WON;

        }
        else if (7 == sum) { // lose by rolling 7
            gameStatus = LOST;

        }
    }
    if (WON == gameStatus) { // did player win?
        puts("Player wins");
    }
    else { // player lost
        puts("Player loses");
    }
}

int rollDice(void) {
    int die1 = 1 + (rand() % 6); // pick random die1 value
    int die2 = 1 + (rand() % 6); // pick random die2 value

    // display results of this roll
    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);

    return die1 + die2;
}


