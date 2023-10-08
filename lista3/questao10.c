#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4

int main(){

    int vector[SIZE][SIZE], count = 0, x;

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            vector[i][j] = rand()%10;
        }
    }

    printf("Digite um valor: ");
    scanf("%i", &x);

    for(int a = 0; a < SIZE; a++){
        for(int b = 0; b < SIZE; b++){
            printf("%i ", vector[a][b]);
        }
    printf("\n");
    }

    for(int m = 0; m < SIZE; m++){
        for(int n = 0; n < SIZE; n++){
            if(vector[m][n] == x){
                count++;
            }
        }
    }
    printf("%i\n", count);
    return 0;
}
