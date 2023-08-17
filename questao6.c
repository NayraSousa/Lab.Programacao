#include <stdio.h>

int main(){

    float height;
    char genre[0];
    float idealweight;

    printf("Digite seu gênero [m/f]: ");
    scanf("%c", &genre[0]);

    printf("Digite sua altura: ");
    scanf("%f", &height);

    if (genre[0] = 'f'){

        idealweight = (62.1 * height) - 44.7;
        printf("O peso ideal é: %.1f\n", idealweight);

    } else if (genre[0] = 'm'){

        idealweight = (72.7 * height) - 44.7;
        printf("O peso ideal é: %.1f", idealweight);

    } else {
        printf("Gênero inválido\n");

    }

    return 0;
}