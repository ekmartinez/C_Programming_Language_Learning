/*
6.10 (Sales Commissions) Use a one-dimensional array to solve the following problem.
A company pays its salespeople on a commission basis. The salespeople receive $200 per
week plus 9% of their gross sales for that week. For example, a salesperson who grosses
$3000 in sales in a week receives $200 plus 9% of $3000 for a total of $470.

Write a C program (using an array of counters) that determines how many salespeople earned
salaries in each of the following ranges—assume that each sales-person’s salary is truncated
to an integer amount:

a) $200–299
b) $300–399
c) $400–499
d) $500–599
e) $600–699
f) $700–799
g) $800–899
h) $900–999
i) $1000 and over
*/

#include <stdio.h>
#define SALES_SIZE 50
#define CAT_SIZE 9

int main(void) {

    // Array with salaraies of 50 sales persons.
    int salesPerson[SALES_SIZE] = {
    842, 1151, 273, 1917, 421, 1679, 935, 1183, 654, 985,
    1192, 746, 1928, 311, 734, 257, 1946, 1218, 593, 987,
    1351, 1895, 628, 1457, 750, 851, 1799, 314, 1712, 1180,
    934, 229, 597, 1062, 1958, 1439, 1683, 239, 1921, 1496,
    1145, 3450, 287, 2899, 200, 550, 458, 800, 600, 342};

    // initialize counter array
    int categories[CAT_SIZE] = {0};

    // Categorize each sales person salary
    for (size_t i = 0; i < SALES_SIZE; ++i) {
        if (salesPerson[i] >= 200 && salesPerson[i] <= 299) {
            ++categories[0];
        }
        else if (salesPerson[i] >= 300 && salesPerson[i] <= 399) {
            ++categories[1];
        }
        else if (salesPerson[i] >= 400 && salesPerson[i] <= 499) {
            ++categories[2];
        }
        else if (salesPerson[i] >= 500 && salesPerson[i] <= 599) {
            ++categories[3];
        }
        else if (salesPerson[i] >= 600 && salesPerson[i] <= 699) {
            ++categories[4];
        }
        else if (salesPerson[i] >= 700 && salesPerson[i] <= 799) {
            ++categories[5];
        }
        else if (salesPerson[i] >= 800 && salesPerson[i] <= 899) {
            ++categories[6];
        }
        else if (salesPerson[i] >= 900 && salesPerson[i] <= 999) {
            ++categories[7];
        }
        else if (salesPerson[i] >= 1000) {
            ++categories[8];
        }
    }

    printf("%11s\t%s\n", "Category", " Count");
    printf("%s\t%4d\n", "a) $200–299", categories[0]);
    printf("%s\t%4d\n", "b) $300–399", categories[1]);
    printf("%s\t%4d\n", "c) $400–499", categories[2]);
    printf("%s\t%4d\n", "d) $500–599", categories[3]);
    printf("%s\t%4d\n", "e) $600–699", categories[4]);
    printf("%s\t%4d\n", "f) $700–799", categories[5]);
    printf("%s\t%4d\n", "g) $800–899", categories[6]);
    printf("%s\t%4d\n", "h) $900–999", categories[7]);
    printf("%s\t%4d\n", "i) $1000+", categories[8]);
}
