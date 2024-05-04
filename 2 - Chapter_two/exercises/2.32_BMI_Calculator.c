/*
2.32 (Body Mass Index Calculator)

Create a BMI calculator application that reads the user’s 
weight in pounds and height in inches (or, if you prefer, 
the user’s weight in kilograms and height in meters), then 
calculates and displays the user’s body mass index. Also, 
the application should display the following information 
from the Department of Health and Human Services/National 
Institutes of Health so the user can evaluate his/her BMI:

BMI VALUES
Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater

Equation: (weightInPounds x 703) / (heightInInches * heightInInches)
*/

#include <stdio.h>

int main(void)
{

	// Get data from user
	double BMI_FACTOR = 703; 
	double weight = 0; 
	double height = 0;
	
	printf("%s", "Enter your weight in pounds -->> ");
	scanf("%lf", &weight);

	printf("%s", "Enter your height in inches -->> ");
	scanf("%lf", &height);


	// Compute the Body Mass Index
	double bmi = (weight * BMI_FACTOR) / (height * height);

	printf("%s %.1lf -> ", "BMI: ", bmi);

	// Categorize BMI	

	if (bmi <= 18.5){
		puts("Underweight");
	}   
	else if (bmi > 18.5 && bmi <= 24.9) {
		puts("Normal");
	}
   
	else if (bmi > 24.9 && bmi < 29.9) {
		puts("Overweight");
	}

	else if (bmi > 29.9){
		puts("Obese");
	}


	return 0;
}


/*
 **Test Case 1: Normal Weight**

* Weight (in pounds): 120
* Height (in inches): 60
* Expected BMI: approximately 23.40

**Test Case 2: Normal Weight**

* Weight (in pounds): 90
* Height (in inches): 55
* Expected BMI: approximately 20.9

**Test Case 3: Overweight**

* Weight (in pounds): 150
* Height (in inches): 65
* Expected BMI: approximately 25

**Test Case 4: Obese**

* Weight (in pounds): 311
* Height (in inches): 65
* Expected BMI: approximately 51.7

**Test Case 5: Very Tall and Underweight**

* Weight (in pounds): 80
* Height (in inches): 75
* Expected BMI: approximately 10

*/



