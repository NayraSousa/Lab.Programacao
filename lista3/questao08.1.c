#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100    

int main(){

    int vector[SIZE], start, end, temp;

    srand(time(NULL));

    printf("Digite o começo e o fim do intervalo para gerar números aleatórios: ");
    scanf("%i%i", &start, &end);

    for(int i = 0; i < SIZE; i++){
        vector[i] = start+rand()%end;
    }

    printf("SEM ORDENAÇÃO: ");
    for(int m= 0; m<SIZE; m++){
        printf("%i ", vector[m]);
    }

    //Selection Sort
    for(int j = 0; j < SIZE; j++){
        for (int k = 0; k < SIZE; k++){
            if (vector[j] < vector[k]){
                temp = vector[k];
                vector[k] = vector[j];
                vector[j] = temp;

            }
        }
    }
    printf("\n\n");
    printf("COM ORDENAÇÃO: ");
    for(int n = 0; n<SIZE; n++){
        printf("%i ", vector[n]);
    }
    printf("\n");
    return 0;
}
