// Using function memcpy

#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[17] = "";
    char s2[] = "Copy this string";

    memcpy(s1, s2, 17);
    puts("After the s2 is copied into s1 whith memcpy, s1 contains:");
    puts(s1);
}

/*
After the s2 is copied into s1 whith memcpy, s1 contains:
Copy this string
*/

