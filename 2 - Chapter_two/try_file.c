
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


















// End main
 //
/*

EEEEEEEEE
E
EEEEE
E
EEEEEEEEE

ZZZZZZZZZ
        Z
    Z
Z
ZZZZZZZZZ

W       W
W       W
W   W   W
W  W W  W 
W W   W W
*/
