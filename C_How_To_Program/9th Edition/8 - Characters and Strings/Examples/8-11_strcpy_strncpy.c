// Using functions strcpy and strncpy

#include <stdio.h>
#include <string.h>
#define SIZE1 25
#define SIZE2 13

int main(void) {
    char x[] = "Good Morning to You";
    char y[SIZE1] = ""; // create char array y
    char z[SIZE2] = ""; // create char array z

    // copy contents of x into y
    printf("%s%s\n%s%s\n",
           "The string in array x is: ", x,
           "The string in array y is: ", strcpy(y, x));

    strncpy(z, x, SIZE2 - 1); // copy first 14 characters of x into z
    z[SIZE2 -1] = '\0';
    printf("The string in array z is: %s\n", z);
}

/*
The string in array x is: Good Morning to You
The string in array y is: Good Morning to You
The string in array z is: Good Morning
*/



