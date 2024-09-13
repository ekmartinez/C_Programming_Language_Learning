// Using function strtod

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *string = "51.2% are admitted";
    char *stringPtr = NULL;

    double d = strtod(string, &stringPtr);

    printf("The string \"%s\" is converted to the \n", string);
    printf("double value %.2f and the string \"%s\"\n", d, stringPtr);
}

/*
The string "51.2% are admitted" is converted to the
double value 51.20 and the string "% are admitted"
*/


