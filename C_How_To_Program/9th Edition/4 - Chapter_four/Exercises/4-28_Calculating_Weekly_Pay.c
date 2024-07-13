/*
"4.28 (Calculating Weekly Pay) A company pays its employees as managers (who receive a fixed weekly salary),
hourly workers (who receive a fixed hourly wage for up to the first 40 hours they work and “time-and-a-half”
for overtime hours worked), commission workers (who receive $250 plus 5.7% of their gross weekly sales), or
piece-workers (who receive a fixed amount of money for each of the items they produce—each pieceworker in this
company works on only one type of item). Write a program to compute each employee’s weekly pay. You do not know
the number of employees in advance. Each type of employee has a pay code: Managers have paycode 1, hourly workers
have code 2, commission workers have code 3 and pieceworkers have code 4. Use a switch to compute each employee’s
pay based on the paycode. Within the switch, prompt the user to enter the appropriate facts your program needs to
calculate each employee’s pay based on that employee’s paycode. [Note: You can input values of type double using the
conversion specification %lf with scanf.]"
*/

#include <stdio.h>

int main(void) {
    int paycode = 0;
    double totalSalary = 0.00;

    // Managers
    double manager = 0.00;

    // hourly workers
    int hours = 0;
    int regularHours = 40;
    int overtimeHours = 0;
    double hourlyRate = 0.00;
    double overtimeFactor = 1.5;
    double hourlySalary = 0.00;
    double overtimeSalary = 0.00;

    // Commissions
    double commissionsRate = 5.7;
    double sales = 0.00;
    double fixedSalary = 250.00;

    // Piece Workers
    int pieces = 0.00;
    double pieceRate = 2.50;

    // Ask for paycode before entring the loop
    printf("%s", "Enter paycode (-1 to exit): ");
    scanf("%d", &paycode);

    while (paycode != -1){
        switch(paycode) {
            case 1:
                // Managers
                printf("\n%s", "Enter manager's salary: ");
                scanf("%lf", &manager);
                printf("%s%.2f\n", "Salary: ", manager);
                break;
            case 2:
                // Hourly salary
                printf("\n%s", "Enter worked hours: ");
                scanf("%d", &hours);

                printf("%s", "Enter hourly rate: ");
                scanf("%lf", &hourlyRate);

                if (hours <= regularHours) {
                    totalSalary = hours * hourlyRate;
                    printf("%s%.2f\n", "Salary: ", totalSalary);
                    break;
                }
                else if (hours > regularHours) {
                    overtimeHours = hours - regularHours;
                    hourlySalary = regularHours * hourlyRate;
                    overtimeSalary = overtimeHours * (hourlyRate * overtimeFactor);
                    totalSalary = hourlySalary + overtimeSalary;
                    printf("%s%.2f\n", "Salary: ", totalSalary);
                    break;
                }
            case 3:
                // Commisions
                printf("\n%s", "Enter gross sales: ");
                scanf("%lf", &sales);
                totalSalary = fixedSalary + (sales * (commissionsRate / 100));
                printf("%s%.2f\n", "Salary: ", totalSalary);
                break;
            case 4:
                // Pieceworkers
                printf("\n%s", "Enter pieces produced: ");
                scanf("%d", &pieces);
                totalSalary = pieces * pieceRate;
                printf("%s%.2f\n", "Salary: ", totalSalary);
                break;
        }
        // Ask for paycode inside the loop
        printf("\n%s", "Enter paycode: ");
        scanf("%d", &paycode);
    }
    return 0;
}

/*
**Test Case 1: Manager**

* Paycode: 1
* Fixed weekly salary: $500.00
* Expected result: $500.00

**Test Case 2: Hourly Worker (Under 40 hours)**

* Paycode: 2
* Hourly wage: $25.00
* Hours worked: 30
* Expected result: $750.00 (30 hours x $25.00/hour)

**Test Case 3: Hourly Worker (Over 40 hours)**

* Paycode: 2
* Hourly wage: $25.00
* Hours worked: 45
* Expected result: $1000.00 (40 hours x $25.00/hour) + ($37.50/hour x 5 hours) = $187.50 (time-and-a-half for overtime)
    = 1187.50

**Test Case 4: Commission Worker**

* Paycode: 3
* Gross weekly sales: $10000.00
* Expected result: $250.00 (fixed commission) + (5.7 x $10000.00) = $820.00

**Test Case 5: Pieceworker**

* Paycode: 4
* Pieces produced: 200
* Piece rate: $2.50 per piece
* Expected result: $500.00 (200 pieces x $2.50/piece)

**Boundary Test Cases:**

* **Low-value test**: Paycode: 1, fixed weekly salary: $100.00 = 100.00
* **High-value test**: Paycode: 3, gross weekly sales: $500000.00 = 28750.00
*/
