// Using function strtok

#include <stdio.h>
#include <string.h>

int main(void) {
    char string[] = "This is a sentence with 7 tokens";

    printf("The string to be tokenized is:\n%s\n\n", string);
    puts("The tokens are:");

    char *tokenPtr = strtok(string, " "); // begin tokenizing sentence

    // continue tokenizing sentence until tokenPtr becomes NULL
    while (tokenPtr != NULL) {
        printf("%s\n", tokenPtr);
        tokenPtr = strtok(NULL, " "); // get next token
    }
}

/*
The string to be tokenized is:
This is a sentence with 7 tokens

The tokens are:
This
is
a
sentence
with
7
tokens
*/
