/*
"4.28 (Calculating Weekly Pay) A company pays its employees as managers
(who receive a fixed weekly salary), hourly workers (who receive a fixed
hourly wage for up to the first 40 hours they work and “time-and-a-half” for
overtime hours worked), commission workers (who receive $250 plus 5.7% of their
gross weekly sales), or piece-workers (who receive a fixed amount of money for
each of the items they produce—each pieceworker in this company works on only one
type of item).

Write a program to compute each employee’s weekly pay. You do not know
the number of employees in advance. Each type of employee has a pay code: Managers have
paycode 1, hourly workers have code 2, commission workers have code 3 and pieceworkers have code 4.
Use a switch to compute each employee’s pay based on the paycode. Within the switch, prompt the user
to enter the appropriate facts your program needs to calculate each employee’s pay based on that employee’s
paycode. [Note: You can input values of type double using the conversion specification %lf with scanf.]"
*/

#include <stdio.h>

int main(void) {



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
* Expected result: $1250.00 (40 hours x $25.00/hour) + ($5.00/hour x 5 hours) = $1500.00 (time-and-a-half for overtime)

**Test Case 4: Commission Worker**

* Paycode: 3
* Gross weekly sales: $10000.00
* Expected result: $250.00 (fixed commission) + ($570.00/hour x $10000.00) = $5725.00

**Test Case 5: Pieceworker**

* Paycode: 4
* Pieces produced: 200
* Piece rate: $2.50 per piece
* Expected result: $500.00 (200 pieces x $2.50/piece)

**Boundary Test Cases:**

* **Low-value test**: Paycode: 1, fixed weekly salary: $100.00
* **High-value test**: Paycode: 3, gross weekly sales: $500000.00
*/
