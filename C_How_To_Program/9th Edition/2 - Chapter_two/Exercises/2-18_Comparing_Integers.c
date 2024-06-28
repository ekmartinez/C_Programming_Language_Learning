/*
2.18 (Comparing Integers) Write a program that reads two integers
from the user then displays the larger number followed by the words
“is larger.” If the numbers are equal, display the message
“These numbers are equal.” Use only the single-selection form of the
if statement you learned in this chapter.
*/

#include <stdio.h>

int main(void)
{
    int first_integer = 0;
    int second_integer = 0;

    printf("\n%s", "Enter two integers >> ");
    scanf("%d%d", &first_integer, &second_integer);

    if (first_integer > second_integer) {
        printf("%d%s\n", first_integer, " is larger.");
    }
    if (second_integer > first_integer) {
        printf("%d%s\n", second_integer, " is larger.");
    }
    if (first_integer == second_integer) {
        printf("%s\n\n", "These numbers are equal.");
    }

    return 0;
}

/*
Test Cases

1. **Equal numbers**: Input 5 and 5. Expected output: "These numbers are equal."
2. **First number larger**: Input 10 and 8. Expected output: "10 is larger."
3. **Second number larger**: Input 8 and 10. Expected output: "10 is larger."
4. **Negative numbers**: Input -3 and -4. Expected output: "-3 is larger."
5. **Large numbers**: Input 1000 and 2000. Expected output: "2000 is larger."
6. **Edge case**: Input 0 and 0. Expected output: "These numbers are equal."
*/
