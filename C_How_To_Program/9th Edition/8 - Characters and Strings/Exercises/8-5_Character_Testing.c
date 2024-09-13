
/*
8.5 (Character Testing) Write a program that inputs a character from the keyboard
and tests it with each of the character-handling library functions. The program should
print the value returned by each function.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {

    int c = 0;

    while(1) {
        printf("%s", "Enter a character >>> ");
        c = getchar();
        getchar(); // consumes newline '\n'

        // isblank
        printf("\n%s%c%s\n%s%d\n", "According to isblank(): ", (char) c,
               isblank(c) ? " is blank." : " is not blank.",
               "value: ", isblank(c));

        // isdigit
        printf("\n%s%c%s\n%s%d\n", "According to isdigit(): ", (char) c,
               isdigit(c) ? " is a digit." : " is not a digit",
               "value: ", isdigit(c));

        // isalpha
        printf("\n%s%c%s\n%s%d\n", "According to isalpha(): ", (char) c,
               isalpha(c) ? " is a letter." : " is not a letter.",
               "value: ", isalpha(c));

        // isalnum
        printf("\n%s%c%s\n%s%d\n", "According to isalnum(): ", (char) c,
               isalnum(c) ? " is a digit or letter." : " is not a digit or letter.",
               "value: ", isalnum(c));

        // isxdigit
        printf("\n%s%c%s\n%s%d\n", "According to isxdigit(): ", (char) c,
               isxdigit(c) ? " is a hexadecimal digit." : " is not a hexadecimal digit.",
               "value: ", isxdigit(c));

        // islower
        printf("\n%s%c%s\n%s%d\n", "According to islower(): ", (char) c,
               islower(c) ? " is a lowercase letter." : " is not a lowercase letter.",
               "value: ", islower(c));

        // isupper
        printf("\n%s%c%s\n%s%d\n\n", "According to isupper(): ", (char) c,
               isupper(c) ? " is an uppercase letter." : " is not an uppercase letter.",
               "value: ", isupper(c));

        // isspace
        printf("\n%s%c%s\n%s%d\n\n", "According to isspace(): ", (char) c,
               isspace(c) ? " is a whitespace character." : " is not a whitespace character.",
               "value: ", isspace(c));

        // iscntrl
        printf("\n%s%c%s\n%s%d\n\n", "According to iscntrl(): ", (char) c,
               iscntrl(c) ? " is a control character." : " is not a control character.",
               "value: ", iscntrl(c));

        // ispunct
        printf("\n%s%c%s\n%s%d\n\n", "According to ispunct(): ", (char) c,
               ispunct(c) ? " is a printing character other than a space." : " is not a printing character other than a space.",
               "value: ", ispunct(c));

        // isprint
        printf("\n%s%c%s\n%s%d\n\n", "According to isprint(): ", (char) c,
               isprint(c) ? " is a printing character." : " is not a printing character.",
               "value: ", isprint(c));

        // isgraph
        printf("\n%s%c%s\n%s%d\n\n", "According to isgraph(): ", (char) c,
               isgraph(c) ? " is a printing character other than a space." : " is not printing character other than a space.",
               "value: ", isgraph(c));

        puts("");
    }
}
/*
Enter a character >>> 3

According to isblank(): 3 is not blank.
value: 0

According to isdigit(): 3 is a digit.
value: 2048

According to isalpha(): 3 is not a letter.
value: 0

According to isalnum(): 3 is a digit or letter.
value: 8

According to isxdigit(): 3 is a hexadecimal digit.
value: 4096

According to islower(): 3 is not a lowercase letter.
value: 0

According to isupper(): 3 is not an uppercase letter.
value: 0


According to isspace(): 3 is not a whitespace character.
value: 0


According to iscntrl(): 3 is not a control character.
value: 0


According to ispunct(): 3 is not a printing character other than a space.
value: 0


According to isprint(): 3 is a printing character.
value: 16384


According to isgraph(): 3 is a printing character other than a space.
value: 32768

*/
