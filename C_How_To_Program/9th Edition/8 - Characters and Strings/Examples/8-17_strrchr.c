// Using function strrchr

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s1 = "A zoo has many animals including zebras";
    int c = 'z'; // character to search for

    printf("%s '%c' %s\n\"%s\"\n",
           "Remainder of s1 beginning with the last occurrence of character",
           c, "is:", strrchr(s1, c));
}

/*
Remainder of s1 beginning with the last occurrence of character 'z' is:
"zebras"
*/

