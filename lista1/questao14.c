#include <stdio.h>

int main(){

    float c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = (9 * c + 160)/5;

    printf("Conversão de Celsius para Fahrenheit: %.2f -> %.2f\n", c, f);
}