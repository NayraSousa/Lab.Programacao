#include <stdio.h>

int main(){

    int limiteSuperior, limiteInferior, somatorio = 0;

    printf("Digite o limite inferior da faixa: ");
    scanf("%i", &limiteInferior);


    printf("Digite o limite superior da faixa: ");
    scanf("%i", &limiteSuperior);

    for (int i = limiteInferior; i < limiteSuperior; i++){ 
            somatorio += i;

         }
    printf("A soma é: %f", (float)somatorio/(limiteSuperior-limiteInferior));

    return 0;
}