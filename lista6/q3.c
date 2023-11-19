#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Matriz{
    int *p;
    int size;
    float media;

};
int main(){

    struct Matriz element;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &element.size);

    srand(time(NULL));

    int vetor[element.size];
    int sum = 0;
    element.p = vetor;

    for(int i = 0; i<element.size; i++){
        *(vetor+i) = 0+rand()%10;
    }
    for(int i = 0; i<element.size; i++){
        printf("%i ", *(vetor+i));
    }
    printf("\n");
    for(int i = 0; i<element.size; i++){
        sum += *(vetor+i);
    }

    element.media = (float)sum/element.size;
    printf("%.2f\n", element.media);

    return 0;
}