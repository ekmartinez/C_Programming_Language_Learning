/*
Analyzing a Student Poll
Twenty students were asked to rate the quality of the food in the
student cafeteria on a scale of 1 to 5 (1 means awful, and 5 means excellent).
Place the 20 responses in an integer array and summarize the results of the poll.
*/

#include <stdio.h>
#define RESPONSES_SIZE 20
#define FREQUENCY_SIZE 6

// function main begins program execution
int main(void) {
    // place the survey responses in the responses array
    int responses[RESPONSES_SIZE] =
        {1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5};

    // initialize frequency counters to 0
    int frequency[FREQUENCY_SIZE] = {0};

    // for each answer, select the value of an element of the array
    // responses and use that value as a subscript into the array
    // frequency to determine the element to increment
    for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
        ++frequency[responses[answer]];
    }

    // display results
    printf("%s%12s\n", "Rating", "Frequency");

    // output the frequencies in a tabular format
    for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
        printf("%6zu%12d\n", rating, frequency[rating]);
    }
}

/*
Rating   Frequency
     1           3
     2           5
     3           7
     4           2
     5           3
*/
