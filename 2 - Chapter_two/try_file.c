
/*2.26 (Multiples) Write a program that reads in two integers and determines and prints whether
the first is a multiple of the second. [Hint: Use the remainder operator.#include <stdio.h>
*/

#include <stdio.h>

int main(void) {

	int num1;
	int num2;

	printf("Enter two integers to see if the first is multiple of the second >>> ");
	scanf("%d%d", &num1, &num2);

	if (num1 % num2 == 0) {
		printf("%d is a multiple of %d", num1, num2);
		return 0;
	}
	
	printf("%d is not a multiple of %d", num1, num2);
	return 0;
}







/*

EEEEEEEEE
E
EEEEE
E
EEEEEEEEE

ZZZZZZZZZ
        Z
    Z
Z
ZZZZZZZZZ

W       W
W       W
W   W   W
W  W W  W 
W W   W W
*/
