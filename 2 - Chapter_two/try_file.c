/*
2.31 (Table of Squares and Cubes) Using only the techniques you learned in this chapter, write
a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to print
the following table of values:
*/


#include <stdio.h>

int main(void) {

	int zero = 0;
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;
	int five = 5;
	int six = 6;
	int seven = 7;
	int eight = 8;
	int nine = 9;
	int ten = 10;

	printf("Number\tSquare\tCube\n");
	printf("%d\t%d\t%d\n", zero, (zero * zero), (zero * zero * zero));
	printf("%d\t%d\t%d\n", one, (one * one), (one * one * one));
	printf("%d\t%d\t%d\n", two, (two * two), (two * two * two));
	printf("%d\t%d\t%d\n", three, (three * three), (three * three * three));
	printf("%d\t%d\t%d\n", four, (four * four), (four * four * four));
	printf("%d\t%d\t%d\n", five, (five * five), (five * five * five));
	printf("%d\t%d\t%d\n", six, (six * six), (six * six * six));
	printf("%d\t%d\t%d\n", seven, (seven * seven), (seven * seven * seven));
	printf("%d\t%d\t%d\n", eight, (eight * eight), (eight * eight * eight));
	printf("%d\t%d\t%d\n", nine, (nine * nine), (nine * nine * nine));
	printf("%d\t%d\t%d\n", ten, (ten * ten), (ten * ten * ten));


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
