#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main() {
    char sentence[] = "this is a sentence.";

    // Convert the entire string to uppercase
    for(int i = 0; i < strlen(sentence); i++) {
        if(i == 0) { // Don't capitalize the first character
            sentence[i] = toupper((unsigned char)sentence[i]);
        }
    }

    printf("%s\n", sentence);

    return 0;
}
