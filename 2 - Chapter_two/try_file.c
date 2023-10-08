
#include <stdio.h>

int main(void) {
	
	int weight; // Pounds
	int height; // Inches
	int FACTOR = 703;
	int bmi;

	printf("\n-----Body Mass Index Calculator-----\n");
	
	printf("\nEnter weight >>> ");
	scanf("%d", &weight);
	
	printf("Enter height >>> ");
	scanf("%d", &height);
	
	bmi = (weight * FACTOR) / ( height * height);

	printf("\nBased on your inputs, you BMI is: %d\n", bmi);

	printf("\nBMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal: between 18.5 and 24.9\n");
	printf("Overweight: between 25 and 29.9\n");
	printf("Obese: 30 or greater\n");
	printf("-------------------------------------\n");
	printf("\nSource: Department of Health and Human Services/National Institutes of Health	");

	return 0;
}

/*

EEEEEEEEE
E
EEEEE
E
EEEEEEEEE

ZZZZZZZZZ
        Z
    Z
Z
ZZZZZZZZZ

W       W
W       W
W   W   W
W  W W  W 
W W   W W
*/
