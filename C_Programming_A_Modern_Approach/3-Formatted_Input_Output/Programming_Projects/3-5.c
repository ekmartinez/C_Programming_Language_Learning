/*
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) 
and then displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows,
columns, and diagonals:

Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34

If the row, column, and diagonal sums are all the same (as they are in this example), 
the numbers are said to form a magic square. The magic square shown here appears in a 
1514 engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers
in the last row give the date of the engraving.)
*/

#include <stdio.h>

int main(void)
{
	// This is probably better done with arrays and some
	// other string reading method, but at this point
	// we must stick with the content of the chapter
	// which is printf and scanf.
	int one, two, three, four, five, six, seven, eight;
	int nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;

	printf("\n%s\n", "Enter the numbers from 1 to 16 in any order: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
	   &one, &two, &three, &four, &five, &six, &seven, &eight,
	   &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

	printf("\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",
			one, two, three, four, five, six, seven, eight,
			nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen);

	int firstRow = one + two + three + four;
	int secondRow = five + six + seven + eight;
	int thirdRow = nine + ten + eleven + twelve;
	int fourthRow = thirteen + fourteen + fifteen + sixteen;
	int firstColumn = one + five + nine + thirteen;
	int secondColumn = two + six + ten + fourteen;
	int thirdColumn = three + seven + eleven + fifteen;
	int fourthColumn = four + eight + twelve + sixteen;
	int firstDiagonal = one + six + eleven + sixteen;
	int secondDiagonal = four + seven + ten + thirteen ;

	printf("\n%s%d %d %d %d\n", "Row sums: ", firstRow, secondRow, thirdRow, fourthRow);
	printf("%s%d %d %d %d\n", "Columns sums: ", firstColumn, secondColumn, thirdColumn, fourthColumn);
	printf("%s%d %d\n", "Diagonal sums: ", firstDiagonal, secondDiagonal);
}	
