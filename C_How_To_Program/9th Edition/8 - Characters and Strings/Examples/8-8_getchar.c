// Using function getchar

#include <stdio.h>
#define SIZE 80

int main(void) {
    int c = 0; // variable to hold character input by user
    char sentence[SIZE] = "";
    int i = 0;

    puts("Enter a line of text:");

    // use getchar to read each character
    while ((i < SIZE - 1) && (c = getchar()) != '\n') {
        sentence[i++] = c;
    }

    sentence[i] = '\0'; // terminate string

    puts("\nThe line entered was:");
    puts(sentence); // display sentence
}

/*
Enter a line of text:
This is a test.

The line entered was:
This is a test.
*/

