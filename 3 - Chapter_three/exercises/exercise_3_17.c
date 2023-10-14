/*
3.17 (Mortgage Calculator) Develop a C program to calculate the interest accrued on a bank cus-
tomer's mortgage. For each customer, the following facts are available:

a) the account number
b) the mortgage amount
c) the mortgage term
d) the interest rate

The program should input each fact, calculate the total interest payable 
( = mortgage amount × interest rate × mortgage term), and add it to the mortgage amount to get the total amount payable.
It should calculate the required monthly payment by dividing the total amount payable by the
number of months in the mortgage term. The program should display the required monthly pay-
ment rounded off to the nearest dollar. The program should process each customer's account at a
time. Here is a sample input/ output dialog:

*/

/*
Pseudcode
---------

top
---
Develop a C program to calculate the interest accrued on a bank customer's mortgage. 

First Refinement
-----------------
Initialize Varibles
Ask for inputs and determine monthly mortgage payable.
Print monthly mortgage payable

Second Refinement
------------------
Initialize account number to zero
Initialize mortgage amount to zero
Inititalize interest_rate to zero
Initialize mortgage_payable to zero

While not sentinel
	Ask for account
	Ask for total mortgage
	Ask for the interest rate
	Compute monthly mortgage payable
	Print results
*/





/*
 
Test:

Enter account number (-1 to end): 100
Enter mortgage amount (in dollars): 6500
Enter mortgage term (in years): 3
Enter interest rate (as a decimal): 0.075
The monthly payable interest $ 221

Enter account number (-1 to end): 200
Enter mortgage amount (in dollars): 12000
Enter mortgage term (in years): 10
Enter interest rate (as a decimal): 0.045
The monthly payable interest is: $ 145
Enter account number (-1 to end): -1
*/
