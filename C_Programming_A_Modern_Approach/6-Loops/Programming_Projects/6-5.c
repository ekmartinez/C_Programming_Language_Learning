/*
Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
number with its digits reversed. Generalize the program so that the number can have one,
two, three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10,
stopping when it reaches 0.
*/

#include <stdio.h>

int main(void) 
{
	int n, r;
	printf("%s", "Enter a number: ");
	scanf("%d", &n);

	printf("%s", "The reversal is: ");

	do {
		r = n % 10;
		n = n / 10;
		printf("%d", r);
	} while (n > 0);

	puts("");
}
	
/*
Testing for positive integers only.

Test Cases

    Test Case 1
        Input: 12345
        Expected Output: 54321
        Actual Output: 54321

    Test Case 2
        Input: 1000
        Expected Output: 0001
        Actual Output: 0001 

	Test Case 3
        Input: 987654321
        Expected Output: 123456789
        Actual Output: 123456789

	Test Case 4
        Input: 1234567890
        Expected Output: 0987654321
        Actual Output: 0987654321

    Test Case 5
        Input: 2147483647 
        Expected Output: 7463847412
        Actual Output: 7463847412

*/
