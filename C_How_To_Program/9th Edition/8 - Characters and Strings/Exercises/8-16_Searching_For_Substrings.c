/*
8.16 (Searching for Substrings) Write a program that inputs a line of text and
a search string from the keyboard. Using function strstr, locate the first
occurrence of the search string in the line of text. Assign the location to
variable searchPtr of type char *. If the search string is found, print the
remainder of the line of text beginning with the search string. Then, use strstr
again to locate the next occurrence of the search string in the line of text. If
a second occurrence is found, print the remainder of the line of text beginning
with the second occurrence. [Hint: The second call to strstr should contain searchPtr + 1 as its first argument.]
 */

#include <string.h>
#include <stdio.h>

int main(void) {

    const char *string1 = "abcdefabcdefabcdefabcdef";
    const char *string2 = "def";

    char * searchPtr = strstr(string1, string2);
    printf("%s\n", searchPtr);
    printf("%s\n", strstr(searchPtr + 1, string2));
}
