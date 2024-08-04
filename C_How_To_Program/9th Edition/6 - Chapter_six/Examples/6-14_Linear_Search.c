// Linear search of an array

#include <stdio.h>
#define SIZE 100

// function prototype
int linearSearch(const int array[], int key, size_t size);

// function main begins program execution
int main(void) {
    int a[SIZE] = {0}; // create array a

    // create some data
    for (size_t x = 0; x < SIZE; ++x) {
        a[x] = 2 * x;
    }

    printf("Enter integer search key: ");
    int searchKey = 0; // value to locate in array a
    scanf("%d", &searchKey);

    // attempt to locate searchKey in array a
    int subscript = linearSearch(a, searchKey, SIZE);

    // display results
    if (subscript != -1) {
        printf("Found value at subscript %d\n", subscript);
    }
    else {
        puts("Value not found");
    }
}

// compare key to every element of array until the location is found
// or until the end of array is reached; return subscript of element
// if key is found or -1 key is not found
int linearSearch(const int array[], int key, size_t size) {
    // loop through array
    for (size_t n = 0; n < size; ++n) {
        if (array[n] == key) {
            return n; // return location of key
        }
    }
    return -1; // key not found
}

/*
Enter integer search key: 36
Found value at subscript 18
*/
