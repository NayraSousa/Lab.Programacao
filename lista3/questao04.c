#include <stdio.h>
#include <string.h>
#define SIZE 30

int main(){

    char palavra1[SIZE], palavra2[SIZE];
    int i = 0;

    printf("Digite duas palavras: ");
    scanf("%s %s", palavra1, palavra2);

    while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && 
          palavra2[i] != '\0'){
            i++;
    }
    if(palavra1[i] == '\0' && palavra2[i] == '\0'){
        printf("As palavras são iguais\n");
    } else{
        printf("As palavras são diferentes\n");
    }
    printf("\n");

    if(strcmp(palavra1, palavra2) == 0){
        printf("São iguais\n");
    } else{
        printf("São diferentes\n");
    }

    return 0;
}