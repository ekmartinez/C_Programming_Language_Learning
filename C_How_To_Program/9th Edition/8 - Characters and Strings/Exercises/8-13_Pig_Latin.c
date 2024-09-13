/*
8.13 (Pig Latin) Write a program that encodes English-language phrases into pig
Latin. Pig Latin is a form of coded language often used for amusement. Many variations
exist in the methods used to form pig-Latin phrases.

For simplicity, use the following algorithm:

To form a pig-Latin phrase from an English-language phrase, tokenize the phrase
into words with function strtok. To translate each English word into a pig-Latin word,
place the first letter of the English word at the end of the English word and
add the letters "ay". Thus the word "jump" becomes "umpjay", the word "the"
becomes "hetay" and the word "computer" becomes "omputercay". Blanks between
words remain as blanks. Assume the following: The English phrase consists of words
separated by blanks, there are no punctuation marks, and all words have two or more
letters. Function printLatinWord should display each word. [Hint: Each time str-
tok finds a token, pass the token pointer to function printLatinWord, and print the
pig-Latin word. We’ve provided simplified pig-Latin conversion rules here. For more
detailed rules and variations, visit https://en.wikipedia.org/wiki/Pig_latin.]

*/

#include <stdio.h>
#include <string.h>
#define SIZE 1024

void printLatinWord(char* word);

int main(void) {

    char string[SIZE];

    // Read sentence from stdin
    puts("Enter a sentece: ");
    fgets(string, SIZE, stdin);

    // Removes \n added by fgets
    string[strcspn(string, "\n")] = 0;

    // Tokenizer
    char *tokenPtr = strtok(string, " ");
    while (tokenPtr != NULL) {
        printLatinWord(tokenPtr); // pig function
        tokenPtr = strtok(NULL, " ");
    }
    puts("\n");
}

void printLatinWord(char* word) {

    int length = strlen(word);
    char terminator[] = "ay";
    char pigLatin[SIZE];

    if (length > 1) {
        sprintf(pigLatin, "%s%c%s",
                &word[1], word[0], terminator);
    }
    else {
        sprintf(pigLatin, "%c%s",
                *word, terminator);
    }
    printf("%s ", pigLatin);
}

/*
Output:

Enter a sentece:
This is a sentence
hisTay siay aay entencesay

*/














