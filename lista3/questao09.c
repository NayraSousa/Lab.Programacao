#include <stdio.h>
#define SIZE 3

int main(){

    int vector[SIZE][SIZE], soma = 0;

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            scanf("%d", &vector[i][j]);
        }
    }

    printf("\n");
    for(int m = 0; m < SIZE; m++){
        for(int n = 0; n < SIZE; n++){
            printf("%d  ", vector[m][n]);
        }
        printf("\n");
    }

    for(int k = 0; k < SIZE; k++){
        soma += vector[k][k];

    }

    printf("A soma é: %i\n", soma);

    return 0;
}