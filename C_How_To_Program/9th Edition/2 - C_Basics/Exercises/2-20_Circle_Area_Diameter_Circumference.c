/*
 * 2.20 (Circle Area, Diameter and Circumference) For a circle of radius 2, display the
diameter, circumference and area. Use the value 3.14159 for π. Use the following for-
mulas (r is the radius): diameter = 2r, circumference = 2πr and area = πr2. Perform each
of these calculations inside the printf statement(s) and use the conversion specifica-
tion %f. This chapter discussed only integer constants and variables. Chapter
*/

#include <stdio.h>

int main(void)
{
   float radius = 2.00;
   float pi = 3.14159;

   printf("%f\n", 2 * radius);
   printf("%f\n", 2 * pi * radius);
   printf("%f\n", pi * (radius * radius));

   return 0;
}

