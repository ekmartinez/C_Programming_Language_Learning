/*
3.21 (Predecrementing vs. Postdecrementing)
Write a program that demonstrates the difference
between predecrementing and postdecrementing using the decrement
operator --.
*/

#include <stdio.h>

int main(void)
{
    int number = 0;

    puts("\nBoth the predecrement (--x) and postdecrement (x--) operators");
    puts("have the function of decreasing the value of a variable.  They both");
    puts("have the same effect on the variable, the only difference been when");
    puts("the variable is used within the context of a specific operation.\n");

    printf("%s", "To illustrate this enter any integer >>> ");
    scanf("%d", &number);

    int temp_number = number;
    printf("%s%d\n\n", "You have entered: ", temp_number);

    printf("%s%d\n", "In this line we use the predecrement operator (--x) which results in: ", --temp_number);
    puts("This is because the operator (--x) decreases the variable by 1 before sending it to stdout.\n");

    temp_number = number;
    printf("%s%d\n",
           "In contrast when we do the same thing with the postdecrement operator (x--) we don't see immediate changes: ",
           temp_number--);

    puts("This is because the postdecrement operator (x--) decreases the variable by 1 after sending it to stdout.\n");

    printf("%s%d\n\n",
           "If we print the number again without using decrement operators we can now see it has been reduced: ",
           temp_number);

    puts("In sumamry, both predecrement(--x) and postdecrement (x++) operators reduces the variable by 1,");
    puts("but they will behave differently in certain situations.\n");

    return 0;
}
