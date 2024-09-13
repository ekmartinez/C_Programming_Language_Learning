//  Using function strstr

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *string1 = "abcdefabcdef";
    const char *string2 = "def";

    printf("string1 = %s\nstring2 = %s\n\n%s\n%s%s\n", string1, string2,
           "The remainder of string1 beginning with the",
           "first occurrence of string2 is: ", strstr(string1, string2));
}

/*
string1 = abcdefabcdef
string2 = def

The remainder of string1 beginning with the
first occurrence of string2 is: defabcdef
*/
