#include <stdio.h>

int main(){

    float lenght, widht, height, volume;

    printf("Digite o comprimento: ");
    scanf("%f", &lenght);

    printf("DIgite a largura: ");
    scanf("%f", &widht);

    printf("Digite a altura: ");
    scanf("%f", &height);

    volume = lenght * widht * height;

    printf("O volume da caixa retangular é: %.1f\n", volume);

    return 0;

}