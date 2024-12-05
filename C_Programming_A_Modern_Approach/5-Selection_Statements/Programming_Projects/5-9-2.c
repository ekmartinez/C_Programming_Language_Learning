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
	int firstDay, firstMonth, firstYear;
	int secondDay, secondMonth, secondYear;

	printf("\n%s", "Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &firstMonth, &firstDay, &firstYear);

	printf("%s", "Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &secondMonth, &secondDay, &secondYear);

	if (firstYear < secondYear && firstYear != 0)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n",
			firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
	

	else if (firstYear > secondYear)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n",
			secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
	
	else if (firstYear == secondYear) {
		if (firstMonth < secondMonth)
			printf("%d/%d/%02d is earlier than %d/%d/%02d\n",
				firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
		else if (firstMonth > secondMonth)
			printf("%d/%d/%02d is earlier than %d/%d/%02d\n",
				secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
		else if (firstMonth == secondMonth) {
			if (firstDay < secondDay)
				printf("%d/%d/%02d is earlier than %d/%d/%02d\n",
					firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
			else if (firstDay > secondDay)
				printf("%d/%d/%02d is earlier than %d/%d/%02d\n",
					secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
			else if (firstDay == secondDay)
				printf("%d/%d/%02d is earlier than %d/%d/%02d\n",
					secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
		}
	}
}
/*


    Test Case 1:
        Input: 3/6/08 and 5/17/07
        Expected: 5/17/07 is earlier than 3/6/08
        Actual:	5/17/07 is earlier than 3/6/08

    *** Test Case 2:
        Input: 1/1/00 and 12/31/99
        Expected: 12/31/99 is earlier than 1/1/00
        Actual:	1/1/00 is earlier than 12/31/99

    *** Test Case 3:
        Input: 7/4/21 and 7/4/21
        Expected: 7/4/21 is the same as 7/4/21
		Actual: 7/4/21 is earlier than 7/4/21

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
        Actual: 5/5/05 is earlier than 5/5/05

    Test Case 10:
        Input: 10/10/10 and 9/9/10
        Expected: 9/9/10 is earlier than 10/10/10
        Actual: 9/9/10 is earlier than 10/10/10
*/
