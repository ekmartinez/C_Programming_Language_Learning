// Displaying a bar chart.

#include <stdio.h>
#define SIZE 5

// function main begins program execution
int main(void) {
    // use initializer list to initialize array n
    int n[SIZE] = {19, 3, 15, 7, 11};

    printf("%s%13s%17s\n", "Element", "Value", "Bar Chart");

    // for each element of array n, output a bar of the bar chart
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%7zu%13d%8s", i, n[i], "");

        for (int j = 1; j <= n[i]; ++j) { // print one bar
            printf("%c", '*');
        }
        puts(""); // end a bar with a new line
    }
}

/*
Output:

Element        Value        Bar Chart
      0           19        *******************
      1            3        ***
      2           15        ***************
      3            7        *******
      4           11        ***********
*/
