/*

   3.18 (Sales-Commission Calculator) One large chemical company pays its salespeople on a com-
mission basis. The salespeople receive $200 per week plus 9% of their gross sales for that week. For
example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of
$5000, or a total of $650. Develop a program that will input each salesperson’s gross sales for last
week and will calculate and display that salesperson’s earnings. Process one salesperson's figures at a
time.
*/

/*
 Pseudocode
-------------

 top
 ------
 Develop a program that will input each salesperson’s gross sales for last week and 
 will calculate and display that salesperson’s earnings. 
 
First Refinement
-----------------
Initialize Variables
Ask for Sales
Determine Total Salary

Second Refinement
------------------
Initialize salary to 200
initialize commission rate to .09
Initialize Commisions to 0.
Initialize Sales to 0.

While (not sentinel)
	Ask for sales
	comissions = sales x 9%
	salary = salary + commission
	Print Salary

End Program
*/

#include <stdio.h>

int main(void)
{
	// Initialization Phase
	int salary = 200;
	float commission_rate = .09;
	float commision = 0;
	float sales = 0;
	float total_salary = 0;

	// Processing Phase
	while(1 + 2 == 3) {
	
		printf("%s", "\nEnter sales in dollars (-1 to end): ");
		scanf("%f", &sales);

		if (sales == -1) {
			puts("\nProgram terminated succesfully!\n");
			break;
		}
		else {
			commision = sales * commission_rate;
			total_salary = salary + commision;
			printf("Salary is: %.2f", total_salary);
		}
	}

	return 0;
}


/*
Test:

Enter sales in dollars (-1 to end): 5000.00
Salary is: $650.00

Enter sales in dollars (-1 to end): 1234.56
Salary is: $311.11

Enter sales in dollars (-1 to end): -1
*/
