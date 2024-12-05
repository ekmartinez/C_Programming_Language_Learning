/*
Write a program that finds the largest and smallest of four integers entered by the user:

Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10

Use as few if statements as possible. Hint: Four if statements are sufficient.
*/

#include <stdio.h>

int main(void) {

	int firstNum, secondNum, thirdNum, fourthNum;
	int smallest, largest;

	printf("%s", "Enter four integers: ");
	scanf("%d%d%d%d", &firstNum, &secondNum, &thirdNum, &fourthNum);

	smallest = firstNum;
	largest = firstNum;

	if (secondNum < smallest) 
		smallest = secondNum;
	else if (secondNum > largest)
		largest = secondNum;

	if (thirdNum < smallest) 
		smallest = thirdNum;
	else if (thirdNum > largest)
		largest = thirdNum;

	if (fourthNum < smallest) 
		smallest = fourthNum;
	else if (fourthNum > largest)
		largest = fourthNum;
	
	printf("%s%d\n", "Largest: ", largest);
	printf("%s%d\n", "Smallest: ", smallest);
}

/*
Test Case 1

    Input: 21 43 10 35
    Expected Output:
        Largest: 43
        Smallest: 10
    Actual Output: Agreed

Test Case 2

    Input: 5 5 5 5
    Expected Output:
        Largest: 5
        Smallest: 5
    Actual Output: Agreed

Test Case 3

    Input: -1 -2 -3 -4
    Expected Output:
        Largest: -1
        Smallest: -4
    Actual Output: Agreed

Test Case 4

    Input: 100 200 300 400
    Expected Output:
        Largest: 400
        Smallest: 100
    Actual Output: Agreed

Test Case 5

    Input: 0 0 0 0
    Expected Output:
        Largest: 0
        Smallest: 0
    Actual Output: Agreed

Test Case 6

    Input: -10 0 10 20
    Expected Output:
        Largest: 20
        Smallest: -10
    Actual Output: Agreed

Test Case 7

    Input: 15 25 5 35
    Expected Output:
        Largest: 35
        Smallest: 5
    Actual Output: Agreed

Test Case 8

    Input: -5 -1 -3 -2
    Expected Output:
        Largest: -1
        Smallest: -5
    Actual Output: Agreed

Test Case 9

    Input: 1 2 3 4
    Expected Output:
        Largest: 4
        Smallest: 1
    Actual Output: Agreed

Test Case 10

    Input: -100 -50 -25 -75
    Expected Output:
        Largest: -25
        Smallest: -100
    Actual Output: Agreed
*/
