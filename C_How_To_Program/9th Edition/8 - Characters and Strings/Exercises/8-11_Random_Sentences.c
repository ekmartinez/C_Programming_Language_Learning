/*
8.11 (Random Sentences) Use random-number generation to create sentences. Your
program should use four arrays of pointers to char called article, noun, verb and
preposition. Create a sentence by selecting a word at random from each array in
the following order: article, noun, verb, preposition, article and noun. The arrays
should be filled as follows: The article array should contain the articles "the",
"a", "one", "some" and "any"; the noun array should contain the nouns "boy",
"girl", "dog", "town" and "car"; the verb array should contain the verbs "drove",
"jumped","ran", "walked" and "skipped"; the preposition array should contain the
prepositions "to", "from", "over", "under" and "on".

As each word is picked, concatenate it to the previous words in an array large
enough to hold the entire sentence. Separate the words by spaces. The final
sentence should start with a capital letter and end with a period. Generate 20
such sentences. Modify your program to produce a short story consisting of several of these sentences.
(How about the possibility of a random term-paper writer?)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define SIZE 5
#define SIZE2 20

int randomNumber(int length);
char* sentenceGenerator(void);

int main(void) {
    // article, noun, verb, preposition, article, noun
    srand(time(NULL));

    for (size_t i = 0; i < SIZE2; ++i) {
        char* sentence = sentenceGenerator();
        sentence[0] = toupper((unsigned char)sentence[0]);
        printf("%s\n", sentence);
        free(sentence);
    }
}

char* sentenceGenerator(void) {
    static char* articles[] = {"the", "a", "one", "some", "any"};
    static char* nouns[] = {"boy", "girl", "dog", "town", "car"};
    static char* verbs[] = {"drove", "jumped","ran", "walked", "skipped"};
    static char* prepositions[] = {"to", "from", "over", "under", "on"};

    int sentenceLength = 256;
    char* sentence = (char*)malloc(sentenceLength * sizeof(char));

    const char separator[] = " ";
    sprintf(sentence, "%s %s %s %s %s %s. ",
            articles[randomNumber(SIZE)],
            nouns[randomNumber(SIZE)],
            verbs[randomNumber(SIZE)],
            prepositions[randomNumber(SIZE)],
            articles[randomNumber(SIZE)],
            nouns[randomNumber(SIZE)]
           );

    return sentence;
}

int randomNumber(int length) {
    int number = 0 + rand() % length;
    return number;
}





