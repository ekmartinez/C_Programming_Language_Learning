// Using operator sizeof to determine type sizes.

#include <stdio.h>

int main(void) {
    char c = 0;
    short s = 0;
    int i = 0;
    long l = 0;
    long long ll = 0;
    float f = 0.0F;
    double d = 0.0;
    long double ld = 0.0;
    int array[20] = {0}; // create array of 20 int elements
    int *ptr = array; // create pointer to array

    printf("    sizeof c = %2zu\t       sizeof(char) = %2zu\n",
           sizeof c, sizeof(char));
    printf("    sizeof s = %2zu\t      sizeof(short) = %2zu\n",
           sizeof s, sizeof(short));
    printf("    sizeof i = %2zu\t        sizeof(int) = %2zu\n",
           sizeof i, sizeof(int));
    printf("    sizeof l = %2zu\t       sizeof(long) = %2zu\n",
           sizeof l, sizeof(long));
    printf("   sizeof ll = %2zu\t  sizeof(long long) = %2zu\n",
           sizeof ll, sizeof(long long));
    printf("    sizeof f = %2zu\t      sizeof(float) = %2zu\n",
           sizeof f, sizeof(float));
    printf("    sizeof d = %2zu\t     sizeof(double) = %2zu\n",
           sizeof d, sizeof(double));
    printf("   sizeof ld = %2zu\tsizeof(long double) = %2zu\n",
           sizeof ld, sizeof(long double));
    printf("sizeof array = %2zu\t         sizeof ptr = %2zu\n",
           sizeof array, sizeof ptr);

}

/*
Output:

    sizeof c =  1              sizeof(char) =  1
    sizeof s =  2             sizeof(short) =  2
    sizeof i =  4               sizeof(int) =  4
    sizeof l =  8              sizeof(long) =  8
   sizeof ll =  8         sizeof(long long) =  8
    sizeof f =  4             sizeof(float) =  4
    sizeof d =  8            sizeof(double) =  8
   sizeof ld = 16       sizeof(long double) = 16
sizeof array = 80                sizeof ptr =  8
*/
