#include <stdio.h>

int dayOfWeek(int number);
int main(){
    
    int number;

    dayOfWeek(number);

    return 0;
}

int dayOfWeek(int number){

    do{
        printf("Digite um número: ");
        scanf("%i", &number);
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

            case 0:
            break;

            default:
            printf("Número inválido\n");
            break;
        }
    } while(number != 0);
}