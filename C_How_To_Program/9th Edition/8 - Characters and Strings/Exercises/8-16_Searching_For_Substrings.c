/*
8.16 (Searching for Substrings) Write a program that inputs a line of text and
a search string from the keyboard. Using function strstr, locate the first
occurrence of the search string in the line of text. Assign the location to
variable searchPtr of type char *. If the search string is found, print the
remainder of the line of text beginning with the search string. Then, use strstr
again to locate the next occurrence of the search string in the line of text. If
a second occurrence is found, print the remainder of the line of text beginning
with the second occurrence. [Hint: The second call to strstr should contain
searchPtr + 1 as its first argument.]
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
    printf("%s\n", searchPtr);
    printf("%s\n", strstr(searchPtr + 1, substring));
}
