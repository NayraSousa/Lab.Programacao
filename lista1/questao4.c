#include <stdio.h>

int main(){

    int x;

    printf("Digite um número: ");
    scanf("%i", &x);

    printf("O triplo é: %i\n", x*3);
    printf("O quadrado é: %i\n", x*x);
    printf("O meio é: %i\n", x/2);

    return 0;
}