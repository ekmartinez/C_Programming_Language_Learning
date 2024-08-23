/*
3.26 (Find the Two Largest Numbers) Using an approach similar
to Exercise 3.23, find the two largest values of the 10 numbers.
You may input each number only once.
*/

#include <stdio.h>

int main(void)
{
    int counter = 1;
    int number = 0;
    int largest = 0;
    int second_largest = 0;

    while (counter <= 10) {
        printf("%s", "Enter an integer >>> ");
        scanf("%d", &number);

        if (number > largest){
            second_largest = largest;
            largest = number;
        }
        if (number < largest && number > second_largest) {
            second_largest = number;
        }

        ++counter;
    }

    printf("\n%s%d\n", "Largest number is: ", largest);
    printf("%s%d\n\n", "The second largest number is: ", second_largest);

    return 0;
}


/*
**Test Case 1: Single-digit input**
* Input: 5, 2, 8, 3, 4, 6, 9, 7, 1, 0
* Expected output: 9 (largest), 8 (second largest)

**Test Case 2: Consecutive numbers**
* Input: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
* Expected output: 10 (largest), 9 (second largest)

**Test Case 3: Repeated numbers**
* Input: 5, 5, 5, 2, 8, 3, 4, 6, 9, 7
* Expected output: 9 (largest), 8 (second largest)

**Test Case 4: Same largest and second largest numbers**
* Input: 5, 5, 5, 2, 5, 3, 4, 6, 5, 1
* Expected output: 5 (largest), 5 (second largest)

**Test Case 5: No repeated numbers**
* Input: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
* Expected output: 10 (largest), 9 (second largest)

**Test Case 6: Edge case - all zeros**
* Input: 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
* Expected output: 0 (largest), 0 (second largest)
*/
