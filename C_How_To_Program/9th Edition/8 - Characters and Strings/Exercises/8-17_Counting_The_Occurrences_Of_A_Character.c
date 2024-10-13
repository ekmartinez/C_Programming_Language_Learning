/*
8.17 (Counting the Occurrences of a Substring) Write a program based on
Exercise 8.16 that inputs several lines of text and a search string and uses
function strstr to determine the total occurrences of the search string in the
lines of text. Print the result.
*/


#include <string.h>
#include <stdio.h>

#define STRING 100
#define SUB 100

int main(void) {

    char string[STRING] = "";
    char substring[SUB] = "";

    // Input string
    puts("Enter a string: ");
    fgets(string, STRING, stdin);
    string[strcspn(string, "\n")] = 0; // removes \n

    // Input substring
    puts("Enter a substring: ");
    fgets(substring, SUB, stdin);
    substring[strcspn(substring, "\n")] = 0; // removes \n

    char * searchPtr = strstr(string, substring);
    strstr(searchPtr + 1, substring);


}
