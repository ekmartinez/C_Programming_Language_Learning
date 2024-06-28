/*
2.19 (Arithmetic, Largest Value and Smallest Value) Write a program that inputs
three different integers from the keyboard, then displays the sum, the average, the
product, the smallest and the largest of these numbers. Use only the single-selection
form of the if statement you learned in this chapter. The screen dialogue should ap-
pear as follows:

Enter three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27
*/

#include <stdio.h>

int main(void)
{
    int first_num = 0;
    int second_num = 0;
    int third_num = 0;

    printf("\n%s", "Enter three different integers: ");
    scanf("%d%d%d", &first_num, &second_num, &third_num);

    int sum = first_num + second_num + third_num;
    int average = (first_num + second_num + third_num) / 3;
    int product = first_num * second_num * third_num;

    // smallest
    int smallest = first_num;
    if (second_num < smallest){
        smallest = second_num;
    }
    if (third_num < smallest){
        smallest = third_num;
    }

    // largest
    int largest = first_num;
    if (second_num > largest){
        largest = second_num;
    }
    if (third_num > largest){
        largest = third_num;
    }

    printf("%s%d\n", "Sum is: ", sum);
    printf("%s%d\n", "Average is: ", average);
    printf("%s%d\n", "Product is: ", product);
    printf("%s%d\n", "Smallest is: ", smallest);
    printf("%s%d\n", "Largest is: ", largest);

	return 0;
}

/*

**Test Case 1: Three positive integers**

* Input: 12, 15, 20
* Expected output:
	+ Sum: 47
	+ Average: 15
	+ Product: 3600
	+ Smallest: 12
	+ Largest: 20

**Test Case 2: Three negative integers**

* Input: -5, -10, -3
* Expected output:
	+ Sum: -18
	+ Average: -6
	+ Product: 150
	+ Smallest: -10
	+ Largest: -3

**Test Case 3: Two positive and one negative integer**

* Input: 7, 11, -4
* Expected output:
	+ Sum: 14
	+ Average: 4.67
	+ Product: -308
	+ Smallest: -4
	+ Largest: 11

**Test Case 4: Two negative and one positive integer**

* Input: -2, -8, 6
* Expected output:
	+ Sum: 4
	+ Average: -1
	+ Product: 96
	+ Smallest: -8
	+ Largest: 6

**Test Case 5: Three identical integers**

* Input: 10, 10, 10
* Expected output:
	+ Sum: 30
	+ Average: 10
	+ Product: 1000
	+ Smallest: 10
	+ Largest: 10

**Test Case 6: Three integers with one zero**

* Input: 5, 2, 0
* Expected output:
	+ Sum: 7
	+ Average: 2
	+ Product: 0
	+ Smallest: 0
	+ Largest: 5
*/
