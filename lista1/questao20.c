#include <stdio.h>

int main(){

    int number;

    printf("Digite um número: ");
    scanf("%i", &number);

    printf(number%2? "impar\n":"par\n");

    return 0;
}