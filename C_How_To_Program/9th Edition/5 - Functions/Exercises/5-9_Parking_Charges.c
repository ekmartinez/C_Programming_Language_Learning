/*
5.9 (Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three hours
and an additional $0.50 per hour for each hour or part thereof over three hours. The maximum charge
for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time.

Write a program that calculates and prints the parking charges for each of three customers who parked
their cars in this garage yesterday. You should enter the hours parked for each customer. Your program
should print the results in a tabular format, and should calculate and print the total of yesterday's receipts.
The program should use the function calculateCharges to determine the charge for each customer.

Your outputs should appear in the following format:

Car     Hours       Charge
1         1.5         2.00
2         4.0         2.50
3        24.0        10.00
Total    29.5        14.50
*/

#include <stdio.h>

double calculateCharges(double h);

int main(void){

    double customer1 = 0.00;
    double customer2 = 0.00;
    double customer3 = 0.00;

    printf("%s", "Enter hours of each of the three customers (separated by space): ");
    scanf("%lf%lf%lf", &customer1, &customer2, &customer3);

    // It would be better to use arrays in this scenario.
    // lets just follow along the book's content.
    double totalHours = customer1 + customer2 + customer3;
    double customer1Charges = calculateCharges(customer1);
    double customer2Charges = calculateCharges(customer2);
    double customer3Charges = calculateCharges(customer3);
    double totalCharges = customer1Charges + customer2Charges + customer3Charges;

    printf("\n%s\t%s\t%s\n", "Car", "Hours", "Charge");
    printf("%d\t%.1lf\t%.2lf\n", 1, customer1, customer1Charges);
    printf("%d\t%.1lf\t%.2lf\n", 2, customer2, customer2Charges);
    printf("%d\t%.1lf\t%.2lf\n", 3, customer3, customer3Charges);
    printf("%s\t%.1lf\t%.2lf\n\n", "Total", totalHours, totalCharges);
}

double calculateCharges(double hours) {
    int minHours = 3;
    int maxHours = 24;
    double baseCharge = 2.00;
    double addCharge = .50;
    double maxCharge = 10.00;
    double parkCharge = 0.00;

    if (hours <= minHours) {
        parkCharge = baseCharge;
    }
    else if (hours > minHours && hours < maxHours) {
        parkCharge = baseCharge + ((hours - minHours) * addCharge);
    }
    else if (hours >= maxHours) {
        parkCharge = maxCharge;
    }
    return parkCharge;

}

/*
Output:

Enter hours of each of the three customers (separated by space): 1.5 4.0 24.0

Car     Hours   Charge
1       1.5     2.00
2       4.0     2.50
3       24.0    10.00
Total   29.5    14.50

*/
