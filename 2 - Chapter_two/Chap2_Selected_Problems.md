# Chapter 2 - Selected Exercises

`2.16 (Arithmetic)` -  Write a program that asks the user to enter two numbers, obtains them from the user and prints their sum, product, difference, quotient and remainder.

```c
#include <stdio.h>

// Prompts for two numbers and prints arithmetics
int main(void) {

    int num1;
    int num2;

    printf("Enter two numbers with the largest first: ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int product = num1 * num2;
    int difference = num1 - num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;
    
    printf("\nSummary Arithmethics\n");
    printf("-------------------\n");
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Difference: %d\n", difference);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    printf("-------------------\n");

} // End main

```

`2.17 (Final Velocity)` - Write a program than asks the user to enter the initial velocity and acceleration of an object, and the time that has elapsed, places them in the variables u, a, and t, and prints the final velocity, v, and distance traversed, s, using the following equations.

a) v = u + at

b) s = ut + at^2

```c
#include <stdio.h>

int main(void){

    int initial_velocity;
    int acceleration;
    int time;
    
    printf("-----Final Velocity-----\n");
    
    printf("Enter the initial velocity: ");
    scanf("%d", &initial_velocity);

    printf("Enter the acceleration: ");
    scanf("%d", &acceleration);
    
    printf("Enter the time elapsed: ");
    scanf("%d", &time);
    
    printf("-------------------------\n");

    int final_velocity = initial_velocity + (acceleration * time);
    int distance_traversed = (initial_velocity * time) + (.50 * acceleration * time * time);

    printf("The final velocity is: %d\n", final_velocity);
    printf("The distance traversed is: %d\n", distance_traversed);
    printf("True");

    return 0;
}
```

`2.19 (Arithmetic, Largest Value and Smallest Value)` -  Write a program that inputs three different
integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest
of these numbers. Use only the single-selection form of the if statement you learned in this chapter.
The screen dialogue should appear as follows:

Enter three different integers: 13 27 14

Sum is 54

Average is 18

Product is 4914

Smallest is 13

Largest is 27

```c
#include <stdio.h>

int main(void) {

    int first;
    int second;
    int third;

    printf("Enter three different integers: ");
    scanf("%d %d %d", &first, &second, &third);

    int sum = first + second + third;
    int average = sum / 3;
    int product = first * second * third;

    
	printf("\nSummary Statistics\n");
	printf("--------------------------\n");
	printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);

    // min - max
    
    // First Number
    // ----------------------------------------
    if (first < second){
        if (first < third){
            printf("Smallest is %d\n", first);
        }
    }
    if (first > second){
        if (first > third){
            printf("Largest is %d\n", first);
        }
    }
    // --------------------------------------

    // Second Number
    // ----------------------------------------
    if (second < first){
        if (second < third){
            printf("Smallest is %d\n", second);
        }
    }
    if (second > first){
        if (second > third){
            printf("Largest is %d\n", second);
        }
    }
    // --------------------------------------

    // Third Number
    // ----------------------------------------
    if (third < first){
        if (third < second){
            printf("Smallest is %d\n", third);
        }
    }
    if (third > first){
        if (third > second){
            printf("Largest is %d\n", third);
        }
    }
    // -------------------------------------
    
	printf("--------------------------\n");
} // End main

```

`2.20 (Converting from seconds to hours, minutes and seconds)` -  Write a program that asks the user to enter the total time elapsed, in seconds, since an event and converts the time to hours, minutes and seconds. The time should be displayed as hours minutes:seconds. [Hint: Use theremainder operator]

```c
#include <stdio.h>

int main(void) {

    int total_seconds;

    printf("How many seconds have passed since event: ");
    scanf("%d", &total_seconds);

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = (total_seconds % 3600) % 60;

    printf("\n%d:%d:%d\n", hours, minutes, seconds);

    return 0;

} // End main
```
2.21 (Shapes with Asterisks) Write a program that prints the following shapes with asterisks.


```c
#include <stdio.h>

int main(void){

	printf("\n*********\t  ***  \t\t  *  \t    *    \n");
	printf("*       *\t *   * \t\t *** \t   * *   \n");
	printf("*       *\t*     *\t\t*****\t  *   *  \n");
	printf("*       *\t*     *\t\t  *  \t *     * \n");
	printf("*       *\t*     *\t\t  *  \t*       *\n");
	printf("*       *\t*     *\t\t  *  \t *     * \n");
	printf("*       *\t*     *\t\t  *  \t  *   *  \n");
	printf("*       *\t *   * \t\t  *  \t   * *   \n");
	printf("*********\t  ***  \t\t  *  \t    *    \n\n");
}

Output:

*********	  ***  		  *  	    *    
*       *	 *   * 		 *** 	   * *   
*       *	*     *		*****	  *   *  
*       *	*     *		  *  	 *     * 
*       *	*     *		  *  	*       *
*       *	*     *		  *  	 *     * 
*       *	*     *		  *  	  *   *  
*       *	 *   * 		  *  	   * *   
*********	  ***  		  *  	    *    

```

2.24 (Odd or Even) Write a program that reads an integer and determines and prints whether it’s odd or even. [Hint: Use the remainder operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.]

```c
#include <stdio.h>

int main(void) {
	
	int number;

	printf("\n-----Odd or Even -----");
	printf("\nEnter an integer >>> ");
	scanf("%d", &number);

	if (number % 2 == 0) {
		printf("\n%d is even.", number);
		return 0;
	}
	
	printf("\n%d is odd.", number);
	
	return 0;
}
```

2.25 Print your initials in block letters down the page. Construct each block letter out of the letter it represents, as shown on the top of the next page:

```c
#include <stdio.h>

int main(void) {

	printf("\nEEEEEEEEE\nE\nEEEEE\nE\nEEEEEEEEE\n");
	printf("\nZZZZZZZZZ\n        z\n    z\nz\nzzzzzzzzz\n");
	printf("\nW       W\nW       W\nW   W   W\nW  W W  W\nW W   W W\n");
	return 0;

} // End main

Output:

EEEEEEEEE
E
EEEEE
E
EEEEEEEEE

ZZZZZZZZZ
        z
    z
z
zzzzzzzzz

W       W
W       W
W   W   W
W  W W  W
W W   W W

```

2.26 (Multiples) Write a program that reads in two integers and determines and prints whether
the first is a multiple of the second. [Hint: Use the remainder operator.]

```c
#include <stdio.h>

int main(void) {

	int num1;
	int num2;

	printf("Enter two integers to see if the first is multiple of the second >>> ");
	scanf("%d%d", &num1, &num2);

	if (num1 % num2 == 0) {
		printf("%d is a multiple of %d", num1, num2);
		return 0;
	}
	
	printf("%d is not a multiple of %d", num1, num2);
	return 0;
}
```

2.30 (Separating Digits in an Integer) Write a program that inputs one five-digit number, separates the number into its individual digits and prints the digits separated from one another by three spaces each. [Hint: Use combinations of integer division and the remainder operation.] For example, if the user types in 42139, the program should print 4   2   1   3   9

```c
#include <stdio.h>

int main(void) {

	int num;
	int digit;
	int remainder;

	printf("Enter a five digit number >>> ");
	scanf("%d", &num);

	// First Digit
	digit = num / 10000;
	remainder = num % 10000;
	printf("%d   ", digit);
	
	// Second Digit
	digit = remainder / 1000;
	remainder = remainder % 1000;
	printf("%d   ", digit);
	
	// Third Digit
	digit = remainder / 100;
	remainder = remainder % 100;
	printf("%d   ", digit);

    /// Fourth Digit
	digit = remainder / 10;
	remainder = (remainder % 10) % 10;
	printf("%d   ", digit);
	printf("%d   \n", remainder);

	return 0;
}
```
`2.31 (Table of Squares and Cubes)` Using only the techniques you learned in this chapter, write
a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to print the following table of values:

```c

#include <stdio.h>

int main(void) {

	int zero = 0;
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;
	int five = 5;
	int six = 6;
	int seven = 7;
	int eight = 8;
	int nine = 9;
	int ten = 10;

	printf("Number\tSquare\tCube\n");
	printf("%d\t%d\t%d\n", zero, (zero * zero), (zero * zero * zero));
	printf("%d\t%d\t%d\n", one, (one * one), (one * one * one));
	printf("%d\t%d\t%d\n", two, (two * two), (two * two * two));
	printf("%d\t%d\t%d\n", three, (three * three), (three * three * three));
	printf("%d\t%d\t%d\n", four, (four * four), (four * four * four));
	printf("%d\t%d\t%d\n", five, (five * five), (five * five * five));
	printf("%d\t%d\t%d\n", six, (six * six), (six * six * six));
	printf("%d\t%d\t%d\n", seven, (seven * seven), (seven * seven * seven));
	printf("%d\t%d\t%d\n", eight, (eight * eight), (eight * eight * eight));
	printf("%d\t%d\t%d\n", nine, (nine * nine), (nine * nine * nine));
	printf("%d\t%d\t%d\n", ten, (ten * ten), (ten * ten * ten));


	return 0;
}


Output:

Number	Square	Cube
0	0	0
1	1	1
2	4	8
3	9	27
4	16	64
5	25	125
6	36	216
7	49	343
8	64	512
9	81	729
10	100	1000

```

Create a BMI calculator application that reads the user’s weight in pounds and height in inches (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays the user’s body mass index. Also, the application should display the following information fromthe Department of Health and HumanServices/National Institutes of Health so the user can evaluate his/her BMI.  [Note: In this chapter, you learned to use the int type to represent whole numbers. The BMI calculations when done with int values will both produce whole-number results.]

```c
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
```









Some of the solutions in this file haven't been tested.
