/*
6.22 (Total Sales) Use a two-dimensional array to solve the following problem. A
company has four salespeople (1 to 4) who sell five different products (1 to 5). Once
a day, each salesperson passes in a slip for each different type of product sold.

Each slip contains:

a) The salesperson number
b) The product number
c) The total dollar value of that product sold that day

Thus, each salesperson passes in between 0 and 5 sales slips per day. Assume that the
information from all of the slips for last month is available. Write a program that
reads all this sales information and summarizes the total sales by salesperson by product.
All totals should be stored in the two-dimensional array sales.

After processing all the information for last month, print the results in tabular format with
each column representing a particular salesperson and each row representing a particular product.

Cross-total each row to get the total sales of each product for last month; cross total
each column to get the total sales by salesperson for last month. Your tabular printout
should include these cross totals to the right of the totaled rows and to the bottom of the
totaled columns.
*/

#include <stdio.h>
#define ROWS 4
#define COLUMNS 5

void printArray(int array[][5]);

int main(void) {

    int salesRep = 0;
    int product = 0;
    int sales = 0;
    int continuation = 0;
    int multiArray[ROWS][COLUMNS] = {{0}, {0}};
    printf("\n%s\n\n", "Monthly Sales Analyzer\n----------------------");

    do {
        printf("\n%s", "Enter Sales Rep (1-4) # ");
        scanf("%d", &salesRep);

        printf("%s", "Enter Product # (1-5) # ");
        scanf("%d", &product);

        printf("%s", "Enter Sales: ");
        scanf("%d", &sales);

        multiArray[salesRep-1][product-1] = sales;

        printf("\n%s", "Data has been entered, do you wish to continue? (1-Yes | 2-No) ");
        scanf("%d", &continuation);
        if (continuation == 1) {
            continue;
        }
        else {
            break;
        }

    }while(1);

    printArray(multiArray);
}

void printArray(int array[][5]) {
    for (size_t s = 0; s < ROWS; ++s) {
            for (size_t p = 0; p < COLUMNS; ++p) {
                printf("%d ", array[s][p]);
            }
            puts("");
    }
}



/*





*/
