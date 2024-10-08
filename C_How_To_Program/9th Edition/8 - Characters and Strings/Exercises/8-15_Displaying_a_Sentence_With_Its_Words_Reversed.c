/*
8.15 (Displaying a Sentence with Its Words Reversed) Write a program that
inputs a line of text, tokenizes the line with function strtok and outputs
the tokens in reverse order.
*/

#include <stdio.h>
#include <string.h>

#define SIZE 1024

void reverse(const char * const sPtr);

int main(void) {

    char sentence[SIZE] = "";

    puts("\nEnter a sentence: ");
    fgets(sentence, SIZE, stdin);
    sentence[strcspn(sentence, "\n")] = 0;

    // Tokenizer
    char *tokenPtr = strtok(sentence, " ");
    while(tokenPtr != NULL) {
        reverse(tokenPtr);
        printf("%s", " ");
        tokenPtr = strtok(NULL, " ");
    }
    puts("\n");
}

void reverse(const char * const sPtr) {
    // if end of the string
    if (*sPtr == '\0') { // base case
        return;
    }
    else { // if not end of string
        reverse(&sPtr[1]); // recursion step
        putchar(*sPtr); // use putchar to display character
    }
}
