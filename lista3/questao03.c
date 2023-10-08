#include <stdio.h>
#define SIZE 30

int main(){

    int vector[SIZE];
    int *v = vector;
    int i = 0;

    printf("Digite uma palavra: ");
    scanf("%ls", vector);

    while(*(v+i) != '\0'){
        i++;
    }

    printf("A palavra tem %i letras\n", i);
    return 0;
}