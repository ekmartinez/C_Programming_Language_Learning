/* 2.25 (Integer Value of a Character) Here’s a peek ahead. In this chapter, you learned about integers and the type int. C can also represent uppercase letters, lowercase letters and a considerable variety of special symbols. C uses small integers internally to represent each different character. The set of characters a computer uses together with the corresponding integer representations for those characters is called that computer’s character set. You can display the integer equivalent of uppercase A, for example, by executing the statement:

printf("%d", 'A');

Write a C program that displays the integer equivalents of some uppercase letters, lowercase letters, digits and special symbols. At a minimum, determine the integer equivalents of the following: A B C a b c 0 1 2 $ * + / and the space character.
*/

#include <stdio.h>

int main(void)
{
  printf("\n%s\n", "Below are the integer equivalents of some characters.");
  printf("%s%d\n", "A: ", 'A');
  printf("%s%d\n", "B: ", 'B');
  printf("%s%d\n", "C: ", 'C');
  printf("%s%d\n", "a: ", 'a');
  printf("%s%d\n", "b: ", 'b');
  printf("%s%d\n", "c: ", 'c');
  printf("%s%d\n", "0: ", '0');
  printf("%s%d\n", "1: ", '1');
  printf("%s%d\n", "2: ", '2');
  printf("%s%d\n", "$: ", '$');
  printf("%s%d\n", "*: ", '*');
  printf("%s%d\n", " : ", ' ');

  return 0;
}
