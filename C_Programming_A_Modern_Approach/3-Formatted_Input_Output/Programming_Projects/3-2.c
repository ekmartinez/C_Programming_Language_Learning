/*
Write a program that formats product information entered by the user. 
A session with the program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010

Item            Unit            Purchase
                Price           Date
583             $  13.50        10/24/2010

The item number and date should be left justified; the unit price should 
be right justified.

Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
*/

#include <stdio.h>

int main(void) 
{
	int itemNumber, month, day, year;
	float unitPrice = 0.00f;
	
	printf("\n%s", "Enter item number: "); 
	scanf("%d", &itemNumber);

	printf("%s", "Enter unit price: ");
	scanf("%f", &unitPrice);

	printf("%s", "Enter purchase date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("\n%s\t\t%s\t\t%s\n", "Item", "Unit", "Purchase");
	printf("\t\t%s\t\t%s\n", "Price", "Date");

	printf("%d\t\t$%7.2f\t%02d/%02d/%d\n\n", itemNumber, unitPrice, month, day, year);
}
