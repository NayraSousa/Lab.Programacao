#include <stdio.h>
#define SIZE 30

int main(){

    void transfer(char *word, char *wordCopy);
    char word[] = "A Nayra é linda", wordCopy[SIZE];

    transfer(word, wordCopy);
    printf("%s\n", wordCopy);
    return 0;
}

void transfer(char *word, char *wordCopy){

    while(*word != '\0'){
        *wordCopy = *word;
        ++word;
        ++wordCopy;
    }

    wordCopy = '\0';

}