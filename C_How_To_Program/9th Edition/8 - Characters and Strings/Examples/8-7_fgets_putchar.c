// Using functions fgets and putchar

#include <stdio.h>
#define SIZE 80

void reverse(const char * const sPtr);

int main(void) {
    char sentence[SIZE] = "";

    puts("Enter a line of text:");
    fgets(sentence, SIZE, stdin); // read a line of text

    printf("\n%s", "The line printed backward is:");
    reverse(sentence);
    puts("");
}

void reverse(const char * const sPtr) {
    // if end of string
    if ('\0' == sPtr[0]) {// base case
        return;
    }
    else {// if not end of the string
        reverse(&sPtr[1]); // recursion step
        putchar(sPtr[0]); // use putchar to display character
    }
}

/*
Enter a line of text:
Characters and Strings

The line printed backward is:
sgnirtS dna sretcarahC
*/
