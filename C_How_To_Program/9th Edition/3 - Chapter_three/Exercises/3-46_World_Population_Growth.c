
/*
3.46 (World Population Growth) World population has grown considerably
over the centuries. Continued growth could eventually challenge the limits
of breathable air, drinkable water, arable land and other limited resources.
There’s evidence that growth has been slowing in recent years, and that world
population could peak some time this century, then start to decline.

For this exercise, research world population growth issues. This is a
controversial topic, so be sure to investigate various viewpoints.
Get estimates for the current world population and its growth rate.

Write a program that calculates world population growth each year for
the next 100 years, using the simplifying assumption that the current
growth rate will stay constant.

Print the results in a table. The first column
should display the year from 1 to 100. The second column should display the
anticipated world population at the end of that year. The third column should
display the numerical increase in the world population that would occur that year.

Using your results, determine the years in which the population would become
double and eventually quadruple what it is today.
*/

/*
 *
Dataset:

Year    World Population    Growth Rate
----    ----------------    ------------
2018    7,605,030,254
2019    7,685,586,259           1.06%
2020    7,764,965,463           1.03%
2021    7,837,646,014           0.94%
2022    7,906,702,795           0.88%
2023    7,982,019,198           0.95%
----    ----------------    ------------
Avg 5y Growth rate ------->     0.97%

https://www.census.gov/data-tools/demo/idb/#/dashboard?COUNTRY_YEAR=2018&COUNTRY_YR_ANIM=2018
 */

#include <stdio.h>

int main(void)
{
    double current_rate = .0097;
    double prior = 7906;  //in millions (2022)
    double current = 7982; //in millions (2023)
    double benchmark = current; // to keep track of original value
    int increase = current - prior;
    int current_year = 2023;
    int doubled_year = 0;
    int quadrupled_year = 0;
    int counter = 1;

    printf("\n%28s\n", "World Population");
    printf("%28s\n", "(In millions)");
    printf("%s\n", "----------------------------------------");

    printf("%4s\t%6s\t%12s\t%5s\n", "n", "Year", "Population", "Increase");

    while (counter <= 100){
        printf("%4d\t%6d\t%9d\t%5d\n", counter, current_year, (int)current, increase);
        prior = current;
        current = prior * (1 + current_rate);
        increase = current - prior;

        if (doubled_year == 0) {
            if (current >= benchmark * 2) {
                doubled_year = current_year + 1;
            }
        }
        if (quadrupled_year == 0) {
            if(current >= benchmark * 4) {
                quadrupled_year = current_year + 1;
            }
        }
        current_year++;
        counter++;
    }
    printf("%s\n", "----------------------------------------");

    if (doubled_year == 0) {
        printf("\n%s\n", "The poulation will not double in the next 100 years.");
    }
    else if(doubled_year > 0) {
        printf("\n%s%d\n", "The poulation will double in the year ", doubled_year);
    }
    if (quadrupled_year == 0) {
        printf("%s\n\n", "The poulation will not quadruple in the next 100 years.");
    }
    else if(quadrupled_year > 0) {
        printf("%s%d\n\n", "The poulation will quadruple in the year ", quadrupled_year);
    }

    return 0;
}
