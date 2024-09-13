/*
Write a program that inputs a telephone number as a string in
the form (555) 555-5555. Use function strtok to extract as tokens
the area code, the first three digits of the phone number and the
last four digits of the phone number. Concatenate the phone number’s
seven digits into one string. Convert the area-code string and phone-number
string to integers, then display both.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 15

int main(void) {

    char telephone[SIZE] = "";

    puts("Enter a phone number in format (000) 000 0000");
    fgets(telephone, SIZE, stdin);

    int toInt = 0;
    char *remainderPtr = NULL;

    // tokenizer
    char *tokenPtr = strtok(telephone, " ");
    while (tokenPtr != NULL) {
        toInt = strtol(tokenPtr, &remainderPtr, 0);
        if (toInt != 0) {
            printf("%d ", toInt);
        }
        tokenPtr = strtok(NULL, "-"); // next token
    }
    puts("\n");
}
