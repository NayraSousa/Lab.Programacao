#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(){

    int x[SIZE], n, temporaria;

    printf("Digite o intervalo: ");
    scanf("%i", &n);

    int f[n];
    //vetor x vai receber números aleatórios
    for(int i = 0; i<SIZE; i++){
        *(x+i) = 0+rand()%(n-1);
    }

    //printar vetor não ordenado
    for(int i = 0; i<SIZE; i++){
        printf("%i ", *(x+i));
    }

    //ordenar vetor x
    for(int i = 0; i <= 9; i++){
        for (int j = 0; j <= 9; j++){
            if (x[i] < x[j]){
                temporaria = x[j];
                x[j] = x[i];
                x[i] = temporaria;
            }
        }
    }
    //printar vetor ordenado
    printf("\n");
    for(int i = 0; i<SIZE; i++){
        printf("%i ", *(x+i));
    }
    //vetor f vai receber 0
    for(int i = 0; i<n; i++){
        *(f+i) = 0;

    }
    printf("\n");
    //printar vetor f
    for(int i = 0; i<n; i++){
        printf("%i ", *(f+i));
    }

    //contar os números
    for(int i = 0; i<n; i++){
        for(int j = 0; j<SIZE; j++){
            if(*(x+j) == i){
                *(f+i) += 1;

            }
        }
    }
    printf("\n");
    //printar o novo vetor f
    for(int i = 0; i<n; i++){
        printf("%i ", *(f+i));
}
    return 0;
}
    