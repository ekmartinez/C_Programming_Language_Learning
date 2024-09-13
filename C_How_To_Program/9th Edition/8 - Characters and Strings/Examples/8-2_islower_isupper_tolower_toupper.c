// Using functions islower, isupper, tolower, toupper

#include <ctype.h>
#include <stdio.h>

int main(void) {

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to islower:",
           islower('p') ? "p is a " : "p is not a ", "lowercase letter",
           islower('P') ? "P is a " : "P is not a ", "lowercase letter",
           islower('5') ? "5 is a " : "5 is not a ", "lowercase letter",
           islower('!') ? "! is a " : "! is not a ", "lowercase letter");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isupper:",
           isupper('D') ? "D is an " : "D is not an ", "uppercase letter",
           isupper('d') ? "d is an " : "d is not an ", "uppercase letter",
           isupper('8') ? "8 is an " : "8 is not an ", "uppercase letter",
           isupper('$') ? "$ is an " : "$ is not an ", "uppercase letter");

    printf("%s%c\n%s%c\n%s%c\n%s%c\n",
           "u converted to uppercase is ", toupper('u'),
           "7 converted to uppercase is ", toupper('7'),
           "$ converted to uppercase is ", toupper('$'),
           "L converted to uppercase is ", toupper('L'));

}

/*
According to islower:
p is a lowercase letter
P is not a lowercase letter
5 is not a lowercase letter
! is not a lowercase letter

According to isupper:
D is an uppercase letter
d is not an uppercase letter
8 is not an uppercase letter
$ is not an uppercase letter

u converted to uppercase is U
7 converted to uppercase is 7
$ converted to uppercase is $
L converted to uppercase is L
*/
