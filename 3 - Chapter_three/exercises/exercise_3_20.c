/*
 3.20 (Salary Calculator) Develop a program that will determine the gross pay for each of several
employees. The company pays “straight time” for the first 40 hours worked by each employee and
pays “time-and-a-half” for all hours worked in excess of 40 hours. You’re given a list of the employees
of the company, the number of hours each employee worked last week and the hourly rate of
each employee. Your program should input this information for each employee and should determine
and display the employee's gross pay. */

/*
Pseudocode
-----------

top
----
Develop a program that will determine the gross pay for each of several employees.

First Refinement
----------------
Initialize variables
Ask for inputs
Process wages
Print Results

Second Refinement
------------------

// Initialization phase
Initialize regular_hours to 0.
Initialize overtime_hours to 0.
Initialize total_hours to 0.

Initialize hourly rate to 0.00.
Initialize gross_pay to 0.00.

//Processing phase
while (not sentinel)
	ask for hours
	ask for rate
	
	if hours_worked less or equal to 40
		regular_hours = total_hours
		gross_pay = regular_hours x hourly_rate

	else if hours_worked greater than 40
		regular_hours = 40
		overtime_hours = total_hours - regular_hours
		gross_pay = (regular_hours x hourly_rate) + (overtime_hours x (hourly_rate * 1.5)

	// Termination phase
	Print gross pay
 */

#include <stdio.h>

int main(void)
{
	// Initializatin Phase
	int regular_hours = 0;
	int overtime_hours = 0;
	int total_hours = 0;
	
	float hourly_rate = 0.00;
	float gross_pay = 0.00;
	
	// Processing Phase	
	while(total_hours != -1){
		// Beware of infinite loop		
		printf("%s", "Enter # of hours worked (-1 to end): ");
		scanf("%d",&total_hours);

		if (total_hours == -1){
			printf("\nThe program has ended!\n");
			break;
		}
		else{
			if (total_hours > 0 && total_hours <= 40) {
				printf("%s", "Enter hourly rate of the worker ($00.00): ");
				scanf("%f",&hourly_rate);

				regular_hours = total_hours;
				gross_pay = regular_hours *hourly_rate;
			}
			else if(total_hours > 40) {
				printf("%s", "Enter hourly rate of the worker ($00.00): ");
				scanf("%f",&hourly_rate);

				regular_hours = 40;
				overtime_hours = total_hours - regular_hours;
				gross_pay = (regular_hours * hourly_rate) + (overtime_hours * (hourly_rate * 1.50));

			}
		// Termination Phase
		printf("Salary is $%.2f\n", gross_pay);

		}
	}
	return 0;
}

/*
 Test
 -----
Enter # of hours worked (-1 to end): 39
Enter hourly rate of the worker ($00.00): 10.00
Salary is $390.00

Enter # of hours worked (-1 to end): 40
Enter hourly rate of the worker ($00.00): 10.00
Salary is $400.00

Enter # of hours worked (-1 to end): 41
Enter hourly rate of the worker ($00.00): 10.00
Salary is $415.00

Enter # of hours worked (-1 to end): -1
*/
