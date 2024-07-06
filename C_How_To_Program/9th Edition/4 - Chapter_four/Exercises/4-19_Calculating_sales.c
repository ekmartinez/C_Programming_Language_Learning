/*
4.19 (Calculating Sales) An online retailer sells five different products whose
retail prices are shown in the following table:

Product number  Retail price
    1             $ 2.98
    2             $ 4.50
    3             $ 9.98
    4             $ 4.49
    5             $ 6.87

Write a program that reads a series of pairs of numbers as follows:

a) Product number.
b) Quantity sold for one day.

Your program should use a switch statement to help determine the retail price for
each product. Your program should calculate and display the total retail value of
all products sold last week.

Note: Functions are not covered until chapter 5, using them here because of DRY.
*/

#include <stdio.h>

double sales_calculator(int quantity, double price);

int main(void)
{
    int input = 0;
    int product = 0;
    int quantity = 0;
    double total_retail_value = 0.00;

    printf("%s\n%s\n", "Sales Application", "---------------------");
    printf("%s\t%s\n", "Item_Id", "Retail Price");
    printf("%s\t%s\n", "1", "$ 2.98");
    printf("%s\t%s\n", "2", "$ 4.50");
    printf("%s\t%s\n", "3", "$ 9.98");
    printf("%s\t%s\n", "4", "$ 4.49");
    printf("%s\t%s\n", "5", "$ 6.87");

    do {
        printf("%s", "Enter product number (0 to finish): ");
        input = scanf("%d", &product);
        if (product == 0) {
            break;
        }
        if (input == 1) {
            printf("%s", "Enter quantity: ");
            input = scanf("%d", &quantity);
            if (input == 1) {
                if (quantity > 0) {
                    switch(product) {
                        case 1:
                            total_retail_value += sales_calculator(quantity, 2.98);
                            break;
                        case 2:
                            total_retail_value += sales_calculator(quantity, 4.50);
                            break;
                        case 3:
                            total_retail_value += sales_calculator(quantity, 9.98);
                            break;
                        case 4:
                            total_retail_value += sales_calculator(quantity, 4.49);
                            break;
                        case 5:
                            total_retail_value += sales_calculator(quantity, 6.87);
                            break;
                        default:
                            puts("You have entered an invalid option.");
                            break;
                    }
                }
                else {
                    puts("Quantity must be 1 or greater.");
                }
            }
            else {
                puts("You have entered an unexpected value, exiting...");
            }
        }
        else {
            puts("You have entered an unexpected value, exiting...");
        }
        puts("");
    }while(1);

    printf("\n%s%.2f\n\n", "Total retail value: $", total_retail_value);

    return 0;
}

double sales_calculator(int quantity, double price) {
    // Returns the product of quantity * price
    double retail_value = 0.00;
    retail_value = quantity * price;
    printf("%s%.2f\n", "Value: $", retail_value);
    return retail_value;
}

/*
**Test Case 1: Valid Product Number and Quantity**

* Input: product number = 1, quantity sold = 2
* Expected output: Total retail value = $5.96 (2.98 * 2)

**Test Case 2: Invalid Product Number**

* Input: product number = 6, quantity sold = 3
* Expected error: Program should print an error message or return an error code
indicating that the product number is invalid.

**Test Case 3: Negative Quantity**

* Input: product number = 2, quantity sold = -1
* Expected output: Program should print an error message or return an error code indicating that the quantity cannot be negative.

**Test Case 4: Large Quantity**

* Input: product number = 3, quantity sold = 1000
* Expected output: Total retail value = $9998.00 (9.98 * 1000)

**Test Case 5: Multiple Products**

* Input:
        + Product number = 1, quantity sold = 2
        + Product number = 4, quantity sold = 3
        + Product number = 5, quantity sold = 1
* Expected output: Total retail value = $26.30 (2.98 * 2 + 4.49 * 3 + 6.87 * 1)

**Test Case 6: Edge Cases**

* Input:
        + Product number = 2, quantity sold = 1
        + Product number = 5, quantity sold = 1
* Expected output: Total retail value = $4.50 (4.50 * 1) + $6.87 = $11.37

*/
