#include <stdio.h>

int main(){

    int number, algSete, restoDivisao;

    printf("Digite um número: ");
    scanf("%i", &number);

    do{
        restoDivisao = number % 10;
        if (restoDivisao == 7){
            algSete++;
        }
        number /= 10;
    } while (number > 0);
    printf("Tem %i algarismos 7\n", algSete);
    return 0;
}

                                                  