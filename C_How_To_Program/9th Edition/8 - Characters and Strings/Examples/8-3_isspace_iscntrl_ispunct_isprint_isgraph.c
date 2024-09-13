// Using functions isspace, iscontrl, ispunct, isprint and isgraph

#include <ctype.h>
#include <stdio.h>

int main(void) {
    printf("%s\n%s%s%s\n%s%s%s\n%s%s\n\n", "According to isspace:",
           "Newline", isspace('\n') ? " is a " : " is not a ",
           "whitespace character",
           "Horizonatl tab", isspace('\t') ? " is a " : " is not a ",
           "whitespace character",
           isspace('%') ? "% is a " : "% is not a ", "whitespace character");

    printf("%s\n%s%s%s\n%s%s\n\n", "According to iscontrl:",
           "Newline", iscntrl('\n') ? " is a " : " is not a ",
           "control character",
           iscntrl('$') ? "$ is a " : "$ is not a ", "control character");

    printf("%s\n%s%s\n%s%s\n%s%s\n\n", "According to ispunct:",
           ispunct(';') ? "; is a " : "; is not a ", "punctuation character",
           ispunct('Y') ? "Y is a " : "Y is not a ", "punctuation character",           ispunct('#') ? "# is a " : "; is not a ", "punctuation character");

    printf("%s\n%s%s\n%s%s%s\n\n", "According to isprint:",
           isprint('$') ? "$ is a " : "$ is not a ", "printing character",
           "Alert", isprint('\a') ? " is a " : " is not a ",
           "printing character");

    printf("%s\n%s%s\n%s%s%s\n\n", "According to isgraph:",
            isgraph('Q') ? "Q is a " : "Q is not a ",
           "printing character other than a space",
           "Space", isgraph(' ') ? " is a " : " is not a ",
           "printing character other than a space");

}

/*
According to isspace:
Newline is a whitespace character
Horizonatl tab is a whitespace character
% is not a whitespace character

According to iscontrl:
Newline is a control character
$ is not a control character

According to ispunct:
; is a punctuation character
Y is not a punctuation character
# is a punctuation character

According to isprint:
$ is a printing character
Alert is not a printing character

According to isgraph:
Q is a printing character other than a space
Space is not a printing character other than a space
*/


