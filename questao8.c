#include <stdio.h>

int main(){

    int number;

    printf("Digite um número: ");
    scanf("%i", &number);

    printf("O quadrado de %i é %i\n", number, number*number);

    return 0;
}