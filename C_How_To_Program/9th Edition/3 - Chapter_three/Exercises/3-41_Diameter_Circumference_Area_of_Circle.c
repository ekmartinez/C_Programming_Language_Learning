/*
3.41 (Diameter, Circumference and Area of a Circle) Write a program that reads
the radius of a circle (as a double value) and computes and prints the diameter,
the circumference and the area. Use the value 3.14159 for π.
*/

#include <stdio.h>

int main(void)
{
    double n = 3.14159;
    double radius = 0.00;

    printf("%s", "Enter the radius of a circle: ");
    scanf("%lf", &radius);

    if (radius < 0){
        printf("%s\n", "You have entered an invalid input, (only positive radius allowed)");
        return 1;
    }
    double diameter = radius * 2;
    double circumference = 2* n * radius;
    double area = n * (radius * radius);

    printf("%s%f\n", "Diameter: ", diameter);
    printf("%s%f\n", "Circumference: ", circumference);
    printf("%s%f\n", "Area: ", area);

    return 0;
}

/*
 * **Test Case 1: Positive radius**
```
Input: 5.0
Expected Output:
Diameter: 10.000000
Circumference: 31.41592653589793
Area: 78.53981633974483
```

**Test Case 2: Negative radius**
```
Input: -3.0
Expected Error: Program should handle invalid input (negative radius) and print an error message.
```

**Test Case 3: Zero radius**
```
Input: 0.0
Expected Output:
Diameter: 0.000000
Circumference: 0.000000
Area: 0.000000
```

**Test Case 4: Large positive radius**
```
Input: 1000.0
Expected Output:
Diameter: 2000.000000
Circumference: 6283.1800000
Area: 3141590.000000
```

**Test Case 5: Small positive radius**
```
Input: 0.001
Expected Output:
Diameter: 0.002000000
Circumference: 0.006283
Area: 0.000003
```
*/
