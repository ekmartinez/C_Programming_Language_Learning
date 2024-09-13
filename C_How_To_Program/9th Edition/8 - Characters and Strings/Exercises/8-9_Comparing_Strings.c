/*
8.9 (Comparing Strings) Write a program that uses function strcmp to compare two strings input by the user. The program should state whether the first string is less than, equal to or greater than the second string.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 256

int main(void) {

    printf("\n%s", "The strcmp function from string.h compares two strings\n"
           "and returns 0 if the strings are equal, a negative value\n"
           "if the first string is less than the second string and a positive\n"
           "value if the first string is greater than the second string.\n\n"
           "To Illustrate this lets see an example: \n\n");

    char *string1;
    string1 = malloc(SIZE);
    printf("%s", "Enter a string: ");
    fgets(string1, SIZE, stdin);

    char *string2;
    string2 = malloc(SIZE);
    printf("%s", "Enter another string: ");
    fgets(string2, SIZE, stdin);

    int comparison = strcmp(string1, string2);
    free(string1);
    free(string2);

    printf("\n%s%d\n", "The comparison value is: ", comparison);
    printf("%s", "Which means that ");

    if (comparison == 0) {
        printf("%s\n", "the first string and the second string are the same.");
    }
    else if (comparison < 0) {
        printf("%s\n", "the first string is less than the second string.");
    }
    else if (comparison > 0) {
        printf("%s\n", "the first string is greater than the second string.");
    }
}

/*
The strcmp function from string.h compares two strings
and returns 0 if the strings are equal, a negative value
if the first string is less than the second string and a positive
value if the first string is greater than the second string.

To Illustrate this lets see an example:

>>Enter a string: This is a test.
>>Enter another string: This is a test.

The comparison value is: 0
Which means that the first string and the second string are the same.


>> Enter a string: This is a test.
>> Enter another string: This is not a test.

The comparison value is: -13
Which means that the first string is less than the second string.


>>Enter a string: This is not a test.
>>Enter another string: This is a test.

The comparison value is: 13
Which means that the first string is greater than the second string.
*/
