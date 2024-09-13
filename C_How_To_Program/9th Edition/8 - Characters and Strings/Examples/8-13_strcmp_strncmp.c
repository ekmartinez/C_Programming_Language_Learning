// Using functions strcmp and strncmp

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s1 = "Hello World"; // initialize char pointer
    const char *s2 = "Hello World"; // initialize char pointer
    const char *s3 = "Hello Jupyter"; // initialize char pointer

    printf("s1 = %s\ns2 = %s\ns3 = %s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
           s1, s2, s3,
           "strcmp(s1, s2) = ", strcmp(s1, s2),
           "strcmp(s1, s3) = ", strcmp(s1, s3),
           "strcmp(s3, s1) = ", strcmp(s3, s1));

    printf("%s%2d\n%s%2d\n%s%2d\n",
           "strncmp(s1, s3, 6) = ", strncmp(s1, s3, 6),
           "strncmp(s1, s3, 7) = ", strncmp(s1, s3, 7),
           "strncmp(s3, s1, 7) = ", strncmp(s3, s1, 7));
}
 /*
s1 = Hello World
s2 = Hello World
s3 = Hello Jupyter

strcmp(s1, s2) =  0
strcmp(s1, s3) = 13
strcmp(s3, s1) = -13

strncmp(s1, s3, 6) =  0
strncmp(s1, s3, 7) = 13
strncmp(s3, s1, 7) = -13
*/
