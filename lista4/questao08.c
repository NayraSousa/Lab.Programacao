#include <stdbool.h>
#include <stdio.h>
#define SIZE 10

int main(){

    void characterString(char *word, char character);
    char word[SIZE], character;

    printf("Type a word: ");
    scanf("%s", word);
    
    printf("Type a character: ");
    scanf(" %c", &character);

    characterString(word, character);
    return 0;
}
void characterString(char *word, char character){
    bool sentence = false;

    while(*word != character && *word != '\0'){
        ++word;
    }
    if(*word == character){
        printf("Character found\n");
    }
    else{
        printf("Character not found\n");
    }
    return 0;
}