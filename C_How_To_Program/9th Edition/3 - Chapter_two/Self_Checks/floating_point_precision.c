/*
When floating-point values are printed with precision, the
printed value is rounded. Write statements that display the value 98.5999473210643
with one, four and ten digits of precision, respectively, and specify what’s displayed
in each case.
*/

#include <stdio.h>

int main(void)
{
    double value = 98.5999473210643;

    printf("%s%.1f\n", "With 1 digit of precision: ", value);
    printf("%s%.4f\n", "With 4 digits of precision: ", value);
    printf("%s%.10f\n", "With 10 digits of precision: ", value);

    return 0;
}
