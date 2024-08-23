// Counting letter grades with switch.

#include <stdio.h>

int main(void)
{
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input");
    int grade = 0; // one grade

    // loop until user types end-of-file key sequence (ctrl+d)
    while ((grade = getchar()) != EOF) {

        // determine which grade was input
        switch(grade) {
            case 'A': //grade was uppercase A
            case 'a': // or lowercase a
                ++aCount;
                break; // necessary to exit switch
            case 'B': // grade was uppercase B
            case 'b': // or lowercase b
                ++bCount;
                break;
            case 'C': // grade was uppercase C
            case 'c': // or lowercase b
                ++cCount;
                break;
            case 'D': // grade was uppercase D
            case 'd': // or lowercase d
                ++dCount;
                break;
            case 'F': // grade was uppercase F
            case 'f': // or lowercase f
                ++fCount;
                break;
            case '\n': // ignore new lines,
            case '\t': // tabs,
            case ' ': // and spaces in input
                break;
            default: // catch all other characters
                printf("%s", "Incorrect letter grade entered.");
                puts("Enter a new grade.");
                break; // optimal; will exit switch anyway
        } // end switch
    } // end while

    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);

}

