#include <stdio.h>
#define SIZE 10

int main(){
    
    int sizeString(char *word);
    char word[SIZE];
    int i;

    printf("Type a word: ");
    scanf("%s", word);

    i = sizeString(word);
    printf("%i letras\n", i);

    return 0;
}
int sizeString(char *word){

    int i = 0;
    
    while(*word != '\0'){
        ++word;
        ++i;
    }
    return i;
}