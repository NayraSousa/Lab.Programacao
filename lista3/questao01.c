#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15

int main(){

    float vetor[SIZE];
    float maior, menor, soma;

    srand(time(NULL));

    for(int i=0; i < SIZE; i++){
        vetor[i] = rand()%100;
    }

    maior = menor = vetor[0];

    for(int k=0; k < SIZE; k++){
        if(vetor[k] > maior){
            maior = vetor[k];
        }
        if(vetor[k] < menor){
            menor = vetor[k];
        }
    }
    for(int j=0; j<SIZE; j++){
        printf("%.2f, ", vetor[j]);
    }
    printf("\n");
    printf("A soma é %f\n", maior+menor);
    return 0;
}