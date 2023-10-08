#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100    

int main(){

    int vector[SIZE], start, end, temp, control;

    srand(time(NULL));

    printf("Digite o começo e o fim do intervalo para gerar números aleatórios: ");
    scanf("%i%i", &start, &end);

    for(int i = 0; i < SIZE; i++){
        vector[i] = start+rand()%end;
    }

    printf("SEM ORDENAÇÃO: ");
    for(int n= 0; n<SIZE; n++){
        printf("%i ", vector[n]);
    }
    printf("\n");

    //Bubble Sort
    control = 1;
    while(control){
        control = 0;
        for(int j = 0; j < SIZE; j++){
            if(vector[j] > vector[j+1]){
                temp = vector[j+1];
                vector[j+1] = vector[j];
                vector[j] = temp;
                control = 1;
            }   
        }
    }
    printf("\n");
    printf("COM ORDENAÇÃO: ");
    for (int m = 0; m < SIZE; m++){
        printf("%i ", vector[m]);
    }

    printf("\n");

    return 0;
}
