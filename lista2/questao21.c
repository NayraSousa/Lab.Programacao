#include <stdio.h>

int main(){

    int number, numberOne, numberTwo, numberFour, numberFive;

    printf("Digite um número de 5 dígitos: ");
    scanf("%i", &number);

        numberOne = number % 10;
        number /= 10;
        numberTwo = number % 10;
        number /= 100;
        numberFour = number % 10;
        number /= 10;
        numberFive = number % 10;

        if (numberOne == numberFive, numberTwo == numberFour){
            printf("É um palídromo\n");
        } 
        else {
            printf("Não é um palíndromo\n");
        }
    return 0;
    }



