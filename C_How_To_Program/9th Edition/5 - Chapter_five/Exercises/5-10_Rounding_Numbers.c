/*
5.10 (Rounding Numbers) An application of function floor is rounding a value to the nearest integer.
The statement y = floor(x + .5); rounds x to the nearest integer and assigns the result to y.
Write a program that reads several numbers and rounds each of these numbers to the nearest integer.
For each number processed, print both the original number and the rounded number.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double x = 0;

    printf("%s", "Enter a number to rounded to the nearest integer: ");
    scanf("%lf", &x);

    int y = floor(x + .5);
    printf("%s%.2f\n", "Original: ", x);
    printf("%s%d\n", "Rounded: ", y);
}

/*
**Test Case 1: Positive integer**
Input: `x = 5`
Expected output:
```
Original: 5
Rounded: 5
```

**Test Case 2: Positive decimal**
Input: `x = 3.7`
Expected output:
```
Original: 3.7
Rounded: 4
```

**Test Case 3: Negative integer**
Input: `x = -2`
Expected output:
```
Original: -2
Rounded: -2
```

**Test Case 4: Negative decimal**
Input: `x = -3.2`
Expected output:
```
Original: -3.2
Rounded: -3
```

**Test Case 5: Zero**
Input: `x = 0`
Expected output:
```
Original: 0
Rounded: 0
```

**Test Case 6: Large positive decimal**
Input: `x = 1234.56789`
Expected output:
```
Original: 1234.56789
Rounded: 1235
```

**Test Case 7: Large negative decimal**
Input: `x = -9876.54321`
Expected output:
```
Original: -9876.54321
Rounded: -9877
```

**Test Case 8: Edge case (0.5)**
Input: `x = 0.5`
Expected output:
```
Original: 0.5
Rounded: 1
```
*/
