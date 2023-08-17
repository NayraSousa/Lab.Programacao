#include <stdio.h>

int main(){

    int number;

    printf("Digite um número: ");
    scanf("%i", &number);

    printf("O antecessor de %i é: %i\n", number, number-1);
    printf("O sucessor de %i é: %i\n", number, number+1);


    return 0;
}