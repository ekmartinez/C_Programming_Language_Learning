/*
Write a program that evaluates an expression:
Enter an expression: 1+2.5*3
Value of expression: 10.5

The operands in the expression are floating-point numbers; the operators are +, -, *, and /.
The expression is evaluated from left to right (no operator takes precedence over any other
operator).
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	printf("\n%s", "Enter an expression: ");

	char c = getchar();
	float total = (float) c;

	while ((c = getchar()) != '\n') {
		char indicator;
		if (c == '+') { indicator = 's'; continue; }
		else if (c == '-') { indicator = 'r'; continue; }
		else if (c == '*') { indicator = 'm'; continue; }
		if (c == '/') { indicator = 'd'; continue; }
		if (indicator == 's') { total += (float) c; }
		else if (indicator == 'r') { total -= (float) c; }
		else if (indicator == 'm') { total *= (float) c; }
		else if (indicator == 'd') { total /= (float) c; }
	}
	
	printf("\n%s%f\n\n", "Value of expression: ", total);

	return 0;
}
