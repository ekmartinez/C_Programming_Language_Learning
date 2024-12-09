/*
Write a program that prompts the user to enter two dates and then indicates which date
comes earlier on the calendar:

Enter first date (mm/dd/yy): 3/6/08
Enter second date (mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08
*/

#include <stdio.h>

int main(void) 
{
	int m1, d1, y1;
	int m2, d2, y2;

	printf("\n%s", "Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m1, &d1, &y1);

	printf("%s", "Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m2, &d2, &y2);
	
	if (m1 == m2 && d1 == d2 && y1 == y2)
		printf("%d/%d/%02d is the same as %d/%d/%02d\n", m1, d1, y1, m2, d2, y2);

	if (y1 == 99 & y2 == 0)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m1, d1, y1, m2, d2, y2);
	else if ( y1 == 0 & y2 == 99)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m2, d2, y2, m1, d1, y1);
	else if (y1 < y2)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m1, d1, y1, m2, d2, y2);
	else if (y1 > y2)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m2, d2, y2, m1, d1, y1);

	if (y1 == y2 && m1 < m2)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m1, d1, y1, m2, d2, y2);
	else if (y1 == y2 && m1 > m2)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m2, d2, y2, m1, d1, y1);

	if (y1 == y2 && m1 == m2 && d1 < d2)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m1, d1, y1, m2, d2, y2);
	else if (y1 == y2 && m1 == m2 && d1 > d2)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m2, d2, y2, m1, d1, y1);

}
/*
    Test Case 1:
        Input: 3/6/08 and 5/17/07
        Expected: 5/17/07 is earlier than 3/6/08
        Actual:	5/17/07 is earlier than 3/6/08

    *** Test Case 2:  
		Input: 1/1/00 and 12/31/99
        Expected: 12/31/99 is earlier than 1/1/00
        Actual:	12/31/99 is earlier than 1/1/00

    *** Test Case 3:
        Input: 7/4/21 and 7/4/21
        Expected: 7/4/21 is the same as 7/4/21
		Actual: 7/4/21 is the same as 7/4/21

    Test Case 4:
        Input: 2/29/20 and 3/1/20
        Expected: 2/29/20 is earlier than 3/1/20
        Actual: 2/29/20 is earlier than 3/1/20

    Test Case 5:
        Input: 11/11/11 and 11/10/11
        Expected: 11/10/11 is earlier than 11/11/11
        Actual:	11/10/11 is earlier than 11/11/11

    Test Case 6:
        Input: 4/15/15 and 4/15/16
        Expected: 4/15/15 is earlier than 4/15/16
        Actual:	4/15/15 is earlier than 4/15/16

    Test Case 7:
        Input: 8/8/08 and 8/7/08
        Expected: 8/7/08 is earlier than 8/8/08
        Actual:	8/7/08 is earlier than 8/8/08

    Test Case 8:
        Input: 12/31/99 and 1/1/00
        Expected: 12/31/99 is earlier than 1/1/00
        Actual:	12/31/99 is earlier than 1/1/00

    *** Test Case 9:
        Input: 5/5/05 and 5/5/05
        Expected: 5/5/05 is the same as 5/5/05
        Actual: 5/5/05 is the same as 5/5/05

    Test Case 10:
        Input: 10/10/10 and 9/9/10
        Expected: 9/9/10 is earlier than 10/10/10
        Actual: 9/9/10 is earlier than 10/10/10
*/
