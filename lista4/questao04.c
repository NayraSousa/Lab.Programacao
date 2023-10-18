#include <stdio.h>
#define SIZE 10

int inteiro();
float floatNumber();
char charNumber();

int main(){

    inteiro();
    floatNumber();
    charNumber();
    return 0;
}

int inteiro(){
    int vetor[SIZE];

    printf("Digite 10 números: ");
    for(int i = 0; i<SIZE; i++){
        scanf("%i", (vetor+i));
    } 

    for(int i = 0; i<SIZE; i++){
        printf("[%p] - %i\n", vetor+i, *(vetor+i));
    }
}

float floatNumber(){
    float vetor[SIZE];

    printf("Digite 10 números: ");
    for(int i = 0; i<SIZE; i++){
        scanf("%f", (vetor+i));
    } 

    for(int i = 0; i<SIZE; i++){
        printf("[%p] - %f\n", vetor+i, *(vetor+i));
    }
}

char charNumber(){
    char vetor[SIZE];

    printf("Digite 10 números: ");
    for(int i = 0; i<SIZE; i++){
        scanf(" %c", (vetor+i));
    } 

    for(int i = 0; i<SIZE; i++){
        printf("[%p] - %c\n", vetor+i, *(vetor+i));
    }
}