// Card shuffling and dealing.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototypes
void shuffle(int deck[][FACES]);
void deal(int deck[][FACES], const char *face[], const char *suit[]);

int main(void){
    // initialize deck array
    int deck[SUITS][FACES] = {0};

    srand(time(NULL));
    shuffle(deck);

    // initialize suit array
    const char *suit[SUITS] = {"Hearts", "Diamonds", "Clus", "Spades"};

    // initialize face array
    const char *face[FACES] = {"Ace", "Deuce", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    deal(deck, face, suit); // deal the deck
}

// shuffle cards in deck
void shuffle(int deck[][FACES]) {
    // for each of the cards, choose slot of deck randomly
    for (size_t card = 1; card <= CARDS; ++card) {
        size_t row = 0; // row number
        size_t column = 0; // column number

        // choose new random location until unoccupied slot found
        do {
            row = rand() % SUITS;
            column = rand() % FACES;
        } while(deck[row][column] != 0);

        deck[row][column] = card; // place card number in chosen slot
    }
}

// deal cards in deck
void deal(int deck[][FACES], const char *face[], const char *suit[]) {
    // deal each of the cards
    for (size_t card = 1; card <= CARDS; ++card) {
        // loop through rows of deck
        for (size_t row = 0; row < SUITS; ++row) {
            // loop through columns of deck for current rows
            for (size_t column = 0; column < FACES; ++column) {
                // if slot contains current card, display card
                if (deck[row][column] == card) {
                    printf("%5s of %-8s %c", face[column], suit[row],
                           card % 4 == 0 ? : 1); // 2-column format

                }
            }
        }
    }
}
















