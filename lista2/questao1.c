#include <stdio.h>

int main(void){

    int daysOfWeek(int number);
    int number;
    
    printf("Digite um número: ");
    scanf("%i", &number);

    daysOfWeek(number);

    return 0;
}

int daysOfWeek(int number){

    while (number != 0){

        switch (number){
            case 1:
            printf("Domingo\n");
            break;

            case 2:
            printf("Segunda-feira\n");
            break;

            case 3:
            printf("Terça-feira\n");
            break;

            case 4:
            printf("Quarta-feira\n");
            break;

            case 5:
            printf("Quinta-feira\n");
            break;

            case 6:
            printf("Sexta-feira\n");
            break;

            case 7:
            printf("Sábado\n");
            break;

            default:
            printf("Número inválido\n");
            break;
        }

        printf("Digite um número: ");
        scanf("%i", &number);
    }
}