#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 14

int main(){

    int x[SIZE], y[SIZE];
    int n;
    srand(time(NULL));
    //receber tamanho da matriz
    printf("Enter the size of matrix: ");
    scanf("%i", &n);
    printf("\n");

    int matriz[n][n];

    //gerar números aleatórios nos vetores x
    for(int i = 0; i<SIZE; i++){
        x[i] = 0+rand()%(n-1);
    }
    int r;
    r = 0+rand()%10;
    printf("r = %i\n", r);

    //gerar vetor y
    for(int i = 0; i<SIZE; i++){

        if(r >= 0 && r <= 3){
            y[i] = x[i];
        }
        if(r > 3 && r <= 5){
            y[i] = x[i] - 1;
        }
        if(r > 5 && r <= 7){
            y[i] = x[i] + 1;
        }
        if(r > 7 && r <= 9){
            y[i] = x[i] - 2;
        }
        if(r > 9 && r <= 10){
            y[i] = x[i] + 2;
        }
    }

    //criar matriz nxn
    for(int i = 0; i<n; i++){
        for(int k = 0; k<n; k++){
            matriz[i][k] = 0;
        }
    }
    printf("Matriz:\n");
    //printar matriz nxn
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("X: ");
    //printar os vetores x e y;
    for(int i = 0; i<SIZE; i++){
        printf("%i ", x[i]);
    }
    printf("\n");
    printf("\n");
    printf("Y: ");
    //printar os vetores y;
    for(int i = 0; i<SIZE; i++){
        printf("%i ", y[i]);
    }

    //soma mais um na linha e coluna indicada por x e y
    for(int i = 0; i<SIZE; i++){
            matriz[x[i]][y[i]] += 1;
    }
    printf("\n");
    printf("\n");

    printf("Matriz:\n");
    //printa a nova matriz
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
