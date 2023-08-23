#include <stdio.h>

int main(){

    float raio, diam, circ, area;
    float pi = 3.14159;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    printf("O diâmetro do raio é: %.2f\n", raio*2);
    printf("O valor da circunferência é: %.2f\n", 2*pi*raio);
    printf("A área do círculo é: %.2f\n", pi*(raio*raio));

    return 0;
}