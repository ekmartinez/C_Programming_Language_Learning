/*
In one state, single residents are subject to the following income tax:

Income				Amount of tax
Not over $750		1% of income
$750–$2,250			$7.50	plus 2% of amount over $750
$2,250–$3,750		$37.50 plus 3% of amount over $2,250
$3,750–$5,250		$82.50 plus 4% of amount over $3,750
$5,250–$7,000		$142.50 plus 5% of amount over $5,250
Over $7,000			$230.00 plus 6% of amount over $7,000

Write a program that asks the user to enter the amount of taxable income, then displays the
tax due.

*/
#include <stdio.h>

int main(void)
{
	float taxableIncome, taxDue;

	printf("\n%s", "Enter the amount of taxable income: ");
	scanf("%f", &taxableIncome);

	if (taxableIncome > 0 && taxableIncome < 750)
		taxDue = taxableIncome * .01;
	else if (taxableIncome >= 750 && taxableIncome < 2250)
		taxDue = 7.50 + (taxableIncome - 750) * .02;
	else if (taxableIncome >= 2250 && taxableIncome < 3750)
		taxDue = 37.50 + (taxableIncome - 2250) * .03;
	else if (taxableIncome >= 3750 && taxableIncome < 5250)
		taxDue = 82.50 + (taxableIncome - 3750) * .04;
	else if (taxableIncome >= 5250 && taxableIncome < 7000)
		taxDue = 142.50 + (taxableIncome - 5250) * .05;
	else if (taxableIncome >= 7000)
		taxDue = 230 + (taxableIncome - 7000) * .06;

	printf("%s$%.2f\n\n", "Tax Due: ", taxDue);
}

/*
### Test Cases

1. **Test Case 1**
   - **Input:** 0
   - **Expected Output:** $0.00
   - **Actual Output:** $0.00

2. **Test Case 2**
   - **Input:** 750
   - **Expected Output:** $7.50
   - **Actual Output:** $7.50

3. **Test Case 3**
   - **Input:** 1,000
   - **Expected Output:** $7.50 + 2% of (1,000 - 750) = $7.50 + $5.00 = $12.50
   - **Actual Output:** $12.50

4. **Test Case 4**
   - **Input:** 2,250
   - **Expected Output:** $7.50 + 2% of (2,250 - 750) = $7.50 + $30.00 = $37.50
   - **Actual Output:** $37.50

5. **Test Case 5**
   - **Input:** 2,500
   - **Expected Output:** $37.50 + 3% of (2,500 - 2,250) = $37.50 + $7.50 = $45.00
   - **Actual Output:** $45.00

6. **Test Case 6**
   - **Input:** 3,750
   - **Expected Output:** $37.50 + 3% of (3,750 - 2,250) = $37.50 + $45.00 = $82.50
   - **Actual Output:** $82.50

7. **Test Case 7**
   - **Input:** 4,500
   - **Expected Output:** $82.50 + 4% of (4,500 - 3,750) = $82.50 + $30.00 = $112.50
   - **Actual Output:** $112.50

8. **Test Case 8**
   - **Input:** 5,250
   - **Expected Output:** $82.50 + 4% of (5,250 - 3,750) = $82.50 + $60.00 = $142.50
   - **Actual Output:** $142.50

9. **Test Case 9**
   - **Input:** 6,000
   - **Expected Output:** $142.50 + 5% of (6,000 - 5,250) = $142.50 + $37.50 = $180.00
   - **Actual Output:** $180.00

10. **Test Case 10**
    - **Input:** 7,000
    - **Expected Output:** $142.50 + 5% of (7,000 - 5,250) = $142.50 + $87.50 = $230.00
    - **Actual Output:** $230.00

11. **Test Case 11**
    - **Input:** 7,500
    - **Expected Output:** $230.00 + 6% of (7,500 - 7,000) = $230.00 + $30.00 = $260.00
    - **Actual Output:** $260.00

12. **Test Case 12**
    - **Input:** 10,000
    - **Expected Output:** $230.00 + 6% of (10,000 - 7,000) = $230.00 + $180.00 = $410.00
    - **Actual Output:** $410.00
*/
