/*
5.20 (Displaying a Square of Any Character) Modify the function in Exercise 5.19 to
form the square out of whatever character is contained in char parameter fillCharacter.
Thus if side is 5 and fillCharacter is “#”, then this function should print:

#####
#####
#####
#####
#####
#####
*/

#include <stdio.h>

void fillCharacter(int s, char c[]);

int main(void) {
    int side = 0;
    char character[] = "";

    puts("");
    printf("%s", "Enter side: ");
    scanf("%d", &side);

    printf("%s", "Enter character: ");
    scanf("%s", character);

    puts("");
    fillCharacter(side, character);
}

void fillCharacter(int n, char c[]) {
    int l = n;

    for (int v = n; v > 0; v--) {
        for (int h = l; h > 0; h--){
            printf("%s", c);
        }
        puts("");
    }
    puts("");
}

/*

Output:

Enter side: 5
Enter character: ^

^^^^^
^^^^^
^^^^^
^^^^^
^^^^^
*/
