/*
2.26 (Multiples) Write a program that reads in two integers and 
determines and prints whether the first is a multiple of the second. 
[Hint: Use the remainder operator.]
*/

#include <stdio.h>

int main(void)
{
	int num1 = 0;
	int num2 = 0;

	printf("%s", "Enter two integers ->> ");
	scanf("%d%d", &num1, &num2);

	if (num1 == 0 || num2 == 0) {
		printf("%s", "Error: One of the input numbers is zero.\n");
		return 1;
	}	
	else if(num1 % num2 == 0){
		puts("Yes");
	} 
	else {
		puts("No");
	}
	return 0;
}

/*
 1. **Test case 1: Multiple** 
        * Input: `12` and `3`
        * Expected output: "Yes"
        * Actual output: "Yes"
		* Passed

2. **Test case 2: Not multiple**
        * Input: `15` and `4`
        * Expected output: "No"
		* Actual output: "No"
		* Passed

3. **Test case 3: Zero divisor**
        * Input: `0` and `5`
        * Expected output: "Error" (or some other indication that the input is invalid)
        * Actual output: "Yes" (Added exception handling at line 21)
		* Failed

4. **Test case 4: Negative numbers**
        * Input: `-12` and `-3`
        * Expected output: "Yes"
        * Actual output: "Yes"
		* Passed

5. **Test case 5: Different signs**
        * Input: `10` and `-2`
        * Expected output: "Yes"
        * Actual output: "Yes"
		* Passed
*/
