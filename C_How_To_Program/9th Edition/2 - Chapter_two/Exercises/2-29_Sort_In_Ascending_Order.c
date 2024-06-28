/*
2.29 (Sort in Ascending Order) Write a program that inputs three different numbers
from the user. Display the numbers in increasing order. Recall that an if statement’s
body can contain more than one statement. Prove that your script works by running
it on all six possible orderings of the numbers. Does your script work with duplicate
numbers? [This is challenging. In later chapters you’ll do this more conveniently and
with many more numbers.]
*/

#include <stdio.h>

int main(void)
{
    int first_num = 0;
    int second_num = 0;
    int third_num = 0;

    printf("%s", "Enter three digits >> ");
    scanf("%d%d%d", &first_num, &second_num, &third_num);


    // Find Max
    int max = first_num;

    if (second_num >= max) {
        max = second_num;
    }
    if (third_num >= max) {
        max = third_num;
    }

    // Find mid
    int mid = 0;

    if (first_num >= second_num && first_num <= third_num) {
        mid = first_num;
    }
    if (first_num >= third_num && first_num <= second_num) {
        mid = first_num;
    }
    if (second_num >= first_num && second_num <= third_num) {
        mid = second_num;
    }
    if (second_num >= third_num && second_num <= first_num) {
        mid = second_num;
    }
    if (third_num >= second_num && third_num <= first_num) {
        mid = third_num;
    }
    if (third_num >= first_num && third_num <= second_num) {
        mid = third_num;
    }

    // Find low

    int low = first_num;

    if (second_num <= low) {
        low = second_num;
    }
    if (third_num <= low) {
        low = third_num;
    }

    printf("%d %d %d\n", low, mid, max);

    return 0;
}

/*
 **Test Cases:**

1. **Ascending Order:** 1, 3, 2 (Expected Output: 1, 2, 3)
2. **Low-Low-High:** 1, 1, 5 (Expected Output: 1, 1, 5)
3. **High-Low-Med:** 5, 2, 3 (Expected Output: 2, 3, 5)
4. **Med-Med-High:** 3, 3, 5 (Expected Output: 3, 3, 5)
5. **Low-Med-High:** 1, 3, 5 (Expected Output: 1, 3, 5)
6. **Equal Values:** 2, 2, 2 (Expected Output: 2, 2, 2)

*/
