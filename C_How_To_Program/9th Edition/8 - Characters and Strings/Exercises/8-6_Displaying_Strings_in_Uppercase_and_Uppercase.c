/*
8.6 (Displaying Strings in Uppercase and Lowercase) Write a program that
inputs a line of text into char array s[100]. Display the line in uppercase
letters and in lowercase letters.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100

void strToLower(const char *string) {
    int length = strlen(string);
    for (size_t i = 0; i < length; ++i) {
        printf("%c", tolower(string[i]));
    }
    puts("");
}

void strToUpper(const char *string) {
    int length = strlen(string);
    for (size_t i = 0; i < length; ++i) {
        printf("%c", toupper(string[i]));
    }
    puts("");
}

int main(void) {

    char s[SIZE] = "";
    puts("Enter a line of text:");
    fgets(s, SIZE, stdin);
    puts("");

    puts("In Lowercase:");
    strToLower(s);

    puts("In Uppercase:");
    strToUpper(s);
}

/*
Enter a line of text:
ThIs iS A TeSt tO sEe If tHiS pRoGrAm iS wOrKiNg CoRrEcTlY.

In Lowercase:
this is a test to see if this program is working correctly.

In Uppercase:
THIS IS A TEST TO SEE IF THIS PROGRAM IS WORKING CORRECTLY.
*/
