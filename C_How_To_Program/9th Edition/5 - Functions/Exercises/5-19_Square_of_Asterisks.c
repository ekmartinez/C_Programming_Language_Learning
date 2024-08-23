/*
5.19 (Square of Asterisks) Write a function that displays a solid square of
asterisks whose side is specified in integer parameter side. For example, if
side is 4, the function displays:

****
****
****
****

*/

#include <stdio.h>

void squareAsterisks(int s);

int main(void) {
    int side = 0;

    puts("");
    printf("%s", "Enter side: ");
    scanf("%d", &side);
    puts("");

    squareAsterisks(side);
}

void squareAsterisks(int n) {
    int l = n;

    for (int v = n; v > 0; v--) {
        for (int h = l; h > 0; h--){
            printf("%s", "*");
        }
        puts("");
    }
}

/*
Output:

Enter size: 12

************
************
************
************
************
************
************
************
************
************
************
************

*/
