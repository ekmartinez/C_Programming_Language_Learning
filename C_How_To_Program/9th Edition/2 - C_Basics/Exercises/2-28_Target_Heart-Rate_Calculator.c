/*2.28 (Target Heart-Rate Calculator) While exercising, you can use a heart-rate
monitor to see that your heart rate stays within a safe range suggested by your doctors
and trainers. According to the American Heart Association (AHA) (http://bit.ly/
AHATargetHeartRates), the formula for calculating your maximum heart rate in beats
per minute is 220 minus your age in years. Your target heart rate is 50–85% of your
maximum heart rate. Write a program that prompts for and inputs the user’s age and
calculates and displays the user’s maximum heart rate and the range of the user’s tar-
get heart rate. [These formulas are estimates provided by the AHA; maximum and
target heart rates may vary based on the health, fitness and gender of the individual.
Always consult a physician or qualified healthcare professional before beginning or
modifying an exercise program.]
*/

#include <stdio.h>

int main(void)
{
    int age = 0;

    printf("%s", "Enter you age: ");
    scanf("%d", &age);

    int maximum_rate = 220 - age;
    printf("%s%d.\n", "Your maximum heart rate is: ", maximum_rate);
    printf("%s%.2f%s%.2f.\n", "Your target heart rate is between ",
           maximum_rate * .50, " and ", maximum_rate * .80);

    return 0;
}
