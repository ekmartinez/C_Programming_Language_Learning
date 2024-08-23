/*
4.16 (Triangle-Printing Program) Write a program that prints the following
patterns separately, one below the other. Use for loops to generate the patterns.
All asterisks (*) should be printed by a single printf statement of the form
printf("%s","*"); (this causes the asterisks to print side-by-side).

[Hint: The last two patterns require that each line begin with an appropriate
number of blanks.]

*/

#include <stdio.h>

int main(void)
{
    for (int aV = 1; aV <= 10; aV++) {
        for (int unsigned aH = aV-1; aH <= aV; aH--) {
            printf("%s", "*");
        }
        puts("");
    }
    puts("");

    for (int bV = 10; bV >= 1; bV--) {
        for (int unsigned bH = bV-1; bH <= bV; bH--) {
            printf("%s", "*");
        }
        puts("");
    }
    puts("");

  for (int unsigned cV = 10; cV >=1; cV--){

        int space = 10 - cV;
        for (int unsigned s = space; s >= 1; s--){
            printf("%s", " ");
        }

        for (int unsigned cH = cV -1; cH <= cV; cH--) {
            printf("%s", "*");
        }
        puts("");
    }
    puts("");

  for (int unsigned dV = 1; dV <=10; dV++){

        int space = 10 - dV;
        for (int unsigned s = space; s >= 1; s--){
            printf("%s", " ");
        }

        for (int unsigned dH = dV -1; dH <= dV; dH--) {
            printf("%s", "*");
        }
        puts("");
    }

    return 0;

}

/*
Output:

*
**
***
****
*****
******
*******
********
*********
**********

**********
*********
********
*******
******
*****
****
***
**
*

**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *

         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
*/
