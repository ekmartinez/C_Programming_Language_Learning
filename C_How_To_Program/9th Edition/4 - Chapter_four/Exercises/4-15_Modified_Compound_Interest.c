/*
4.15 (Modified Compound-Interest Program) Modify the compound-interest
program of Section 4.5 to repeat its steps for interest rates of
5%, 6%, 7%, 8%, 9%, 10%.

Use a for loop to vary the interest rate.

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0;
    double fv = 0;

    printf("%s\t%7s\t%7s\t%7s\t%7s\t%7s\t%7s\n", "Year", "%5","%6","%7","%8","%9","%10");

    for (int year = 1; year <= 10; ++year) {
        printf("%2d\t", year);

        for (int r = 5; r <= 10; r++) {
            fv = principal * pow(1.0 + ((double)r / 100), year);
            printf("%.2f\t", fv);
        }
        puts("");
    }

    return 0;
}

/*
Output:

Year         %5      %6      %7      %8      %9     %10
 1      1050.00 1060.00 1070.00 1080.00 1090.00 1100.00
 2      1102.50 1123.60 1144.90 1166.40 1188.10 1210.00
 3      1157.63 1191.02 1225.04 1259.71 1295.03 1331.00
 4      1215.51 1262.48 1310.80 1360.49 1411.58 1464.10
 5      1276.28 1338.23 1402.55 1469.33 1538.62 1610.51
 6      1340.10 1418.52 1500.73 1586.87 1677.10 1771.56
 7      1407.10 1503.63 1605.78 1713.82 1828.04 1948.72
 8      1477.46 1593.85 1718.19 1850.93 1992.56 2143.59
 9      1551.33 1689.48 1838.46 1999.00 2171.89 2357.95
10      1628.89 1790.85 1967.15 2158.92 2367.36 2593.74
*/
