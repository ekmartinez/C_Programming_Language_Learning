// Computing the sum of the elements of an Array.

#include <stdio.h>
#define SIZE 5

// function main begins program execution
int main(void) {
    // use an initializer list to initialize the array
    int a[SIZE] = {1, 2, 3, 4, 5};
    int total = 0; // sum of array

    // sum contents of array a
    for (size_t i = 0; i < SIZE; ++i) {
        total += a[i];
    }
    printf("The total of a's values is %d\n", total);
}
/*
Output:
The total of a's values is 15
*/
