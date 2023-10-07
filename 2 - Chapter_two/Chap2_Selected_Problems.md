# Chapter 2 - Selected problems

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
    
    printf("")
    printf("Summary Arithmethics");
    printf("-------------------");
    printf("Sum: %d", &sum);
    printf("Product: %d", &product);
    printf("Difference: %d", &difference);
    printf("Quotient: %d", &quotient);
    printf("Remainder: %d", &remainder);
    printf("-------------------");
    printf("True");

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

    printf("Enter three different integers: ")
    scanf("%d %d %d", &first, &second, &third);

    int sum = first + second + third;
    int average = sum / 3;
    int product = first * second * third;

    printf("Sum is %d", &sum);
    printf("Average is %d", &sum);
    printf("Product is %d", &sum);

    // min - max
    
    // First Number
    // ----------------------------------------
    if (first < second){
        if (first < third){
            printf("Smallest is %d", &first);
        }
    }
    if (first > second){
        if (first > third){
            printf("Largest is %d", &first);
        }
    }
    // --------------------------------------

    // Second Number
    // ----------------------------------------
    if (second < first){
        if (second < third){
            printf("Smallest is %d", &second);
        }
    }
    if (second > first){
        if (second > third){
            printf("Largest is %d", &second);
        }
    }
    // --------------------------------------

    // Third Number
    // ----------------------------------------
    if (third < first){
        if (third < second){
            printf("Smallest is %d", &third);
        }
    }
    if (third > first){
        if (third > second){
            printf("Largest is %d", &third);
        }
    }
    // --------------------------------------
    printf("True");
    
} // End main
```

`2.20 (Converting from seconds to hours, minutes and seconds)` -  Write a program that asks the
user to enter the total time elapsed, in seconds, since an event and converts the time to hours,
minutes and seconds. The time should be displayed as hours:minutes:seconds. [Hint: Use the
remainder operator]

```c
#include <stdio.h>

int main(void) {

    int total_seconds;

    printf("How many seconds have passed since event: ");
    scanf("%d", &total_seconds);

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = (total_seconds % 3600) % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0

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












The solutions in this file haven't been tested.
