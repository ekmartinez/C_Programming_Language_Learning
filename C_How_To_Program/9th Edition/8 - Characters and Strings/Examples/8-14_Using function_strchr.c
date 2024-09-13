// Using function strchr

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *string = "This a test"; // initialize char pointer
    char character1 = 'a';
    char character2 = 'z';

    // if character1 was found in string
    if (strchr(string, character1) != NULL) {// can remove "!= NULL"
        printf("\'%c\' was found in \"%s\".\n", character1, string);
    }
    else { // if character1 was not found
        printf("\'%c\' was not found in \"%s\".\n", character1, string);
    }

    // if character2 was found in string
    if (strchr(string, character2) != NULL) {// can remove "!= NULL"
        printf("\'%c\' was found in \"%s\".\n", character2, string);
    }
    else { // if character2 was not found
        printf("\'%c\' was not found in \"%s\".\n", character2, string);
    }
}

/*
'a' was found in "This a test".
'z' was not found in "This a test".
*/
