/*
1 (Program Segment) The while statement program segment in this section finds
the first power of 3 larger than 100. Rewrite this program segment so that it
will find the first power of 2 greater than or equal to 1024, leaving it in product.
*/

#include <stdio.h>

int main(void)
{
    int product = 2;

    while (product < 1024) {
        product = 2 * product;
        printf("%d\n", product);
    }

   return 0;
}
