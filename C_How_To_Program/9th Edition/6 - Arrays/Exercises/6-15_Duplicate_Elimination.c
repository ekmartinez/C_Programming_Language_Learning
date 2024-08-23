/*
6.15 (Duplicate Elimination) Use a one-dimensional array to solve the following
problem. Read 20 numbers, each of which is between 10 and 100, inclusive. As each
number is read, print it only if it’s not a duplicate of a number already read. Provide
for the “worst case” in which all 20 numbers are different. Use the smallest possible
array to solve this problem.
*/

#include <stdio.h>
#define SIZE 5

int linearSearch(const int a[], int k, size_t size);
void arrayPrinter(int a[], size_t size);

int main(void) {

    int num = 0;
    int search = 0;
    int array[SIZE] = {0};

    // loops 20 times, asks for a number
    // if number has been read, it prints that number
    for (size_t n = 0; n < SIZE; ++n) {

        // Ensures input falls in range 10 - 100
        while(1) {
            // Get number from user
            printf("\n%s", "Enter a number: ");
            scanf("%d", &num);

            if (num < 10 || num > 100) {
                printf("%s\n", "Error: enter a number in the range 10 - 100");
            }
            else {
                break;
            }
        }

        //Check if number has already been read.
        search = linearSearch(array, num, SIZE);
        if (search == 1) {
            printf("%d\n", num);
        }

        // add number to array
        array[n] = num;
    }
}

// Performs a linear search
int linearSearch(const int a[], int k, size_t size) {
    int result = 0;

    // if number has been read, return 0
    for (size_t n = 0; n < SIZE; ++n) {
        if (a[n] == k) {
            return 0;
        }
    }

    return 1;
}

// Prints elements of array (For debugging purposes)
void arrayPrinter(int a[], size_t size) {
    // output elements of the array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%d ", a[i]);
    }
    puts("");
}

