/*
5.30 (Quality Points for Student’s Grades) Write a function toQualityPoints that
inputs a student’s average and returns 4 if it’s 90–100, 3 if it’s 80–89, 2 if it’s 70–79,
1 if it’s 60–69, and 0 if the average is lower than 60.
*/

#include <stdio.h>

int toQualityPoints(int a);

int main(void) {
    int average = 0;

    printf("%s", "Enter student's average: ");
    scanf("%d", &average);

    int pnts = toQualityPoints(average);
    printf("%d\n", pnts);
}


int toQualityPoints(int avg) {
    int points = 0;

    if (avg < 0 || avg > 100) {
        puts("The value entered is invalid.");
        return 1;
    }
    else if (avg >= 90 && avg <= 100) {
        points = 4;
    }
    else if (avg >= 80 && avg <= 89) {
        points = 3;
    }
    else if (avg >= 70 && avg <= 79) {
        points = 2;
    }
    else if (avg >= 60 && avg <= 69) {
        points = 1;
    }
    else if (avg < 60) {
        points = 0;
    }
    return points;
}

/*
1. **Edge case: avg 100**
	* Input: 100
	* Expected output: 4
2. **Edge case: avg 90**
	* Input: 90
	* Expected output: 4
3. **Test case: avg 85**
	* Input: 85
	* Expected output: 3
4. **Test case: avg 75**
	* Input: 75
	* Expected output: 2
5. **Test case: avg 65**
	* Input: 65
	* Expected output: 1
6. **Test case: avg 55**
	* Input: 55
	* Expected output: 0
7. **Edge case: avg 59**
	* Input: 59
	* Expected output: 0 (since the avg is lower than 60)
8. **Error case: Negative input**
	* Input: -10
	* Expected error message or undefined behavior (since a negative avg doesn't make sense)
*/
