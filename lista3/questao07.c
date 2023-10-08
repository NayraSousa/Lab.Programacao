#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 3

int main(){
    
    int vetor[SIZE], mediaAritmetica = 0, mediaGeometria = 1;

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        vetor[i] = 0+rand()%19;
    }

    printf("VETOR: ");
    for(int j = 0; j < SIZE; j++){
        printf("%i ", vetor[j]);
        mediaAritmetica += vetor[j];
        mediaGeometria *= vetor[j];

    }
    printf("\n");
    printf("Média Aritmética: %.2f\n", (float)mediaAritmetica/SIZE);
    printf("Média Geométrica: %.2f\n", cbrt(mediaGeometria));

    return 0;
}
