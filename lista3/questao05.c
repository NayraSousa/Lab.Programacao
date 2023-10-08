#include <stdio.h>
#include <string.h>
#define SIZE 10
int main(){

    char palavra1[SIZE], palavra2[SIZE];
    char palavraTotal[30];
    int j = 0, i = 0;

    printf("Digite duas palavras: ");
    scanf("%s %s", palavra1, palavra2);

    while(palavra1[i] != '\0'){
        i++;
    }
    while(palavra2[j] != '\0'){
        j++;
    }

    for(int k = 0; k<i; k++){
        palavraTotal[k] = palavra1[k];
    }
    for(int n = 0; n<j; n++){
        palavraTotal[n+i] = palavra2[n];
    }
    for(int m = 0; m<i+j; m++){
        printf("%c", palavraTotal[m]);
    }
    printf("\n");

    printf("%s\n", strcat(palavra1, palavra2));
    return 0;
}