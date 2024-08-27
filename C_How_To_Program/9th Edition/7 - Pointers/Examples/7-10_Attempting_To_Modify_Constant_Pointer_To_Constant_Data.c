// Attempting to modify a constant pointer to constant data.

#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 0;

    // ptr is a constant pointer to a constant integer. ptr always
    // points to the same location; the integer a that location
    // cannot be modified
    const int *const ptr = &x; // initialization is OK

    printf("%d\n", *ptr);
    *ptr = 7; // error: *ptr is const; cannot assign new value
    ptr = &y; // error: ptr is const; cannot assign new address
}
