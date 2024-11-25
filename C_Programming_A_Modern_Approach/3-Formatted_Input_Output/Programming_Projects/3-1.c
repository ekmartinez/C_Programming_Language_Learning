/*
Write a program that accepts a date from the user in the form mm/dd/yyyy and then 
displays it in the form yyyymmdd:

Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217
*/

#include <stdio.h>

int main(void)
{
	int month, day, year;
	printf("%s", "Enter a date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("%s%d%d%d\n", "You entered the date ", year, month, day);
}
