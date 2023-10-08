
#include <stdio.h>

// Prompts for two numbers and prints arithmetics
int main(void) {

    int num1;
    int num2;

    printf("Enter two numbers with the largest first: ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int product = num1 * num2;
    int difference = num1 - num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;
    
    printf("\nSummary Arithmethics\n");
    printf("-------------------\n");
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Difference: %d\n", difference);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    printf("-------------------\n");

} // End main
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
