// Using function strspn

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *string1 = "The value is 3.14159";
    const char *string2 = "aehi lsTuv";

    printf("string1 = %s\nstring2 = %s\n\n%s\n%s%zu\n", string1, string2,
           "The length of the initial segment of string1",
           "containing only characters from string2 = ",
           strspn(string1, string2));
}
/*
string1 = The value is 3.14159
string2 = aehi lsTuv

The length of the initial segment of string1
containing only characters from string2 = 13
*/

