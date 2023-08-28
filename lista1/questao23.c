#include <stdio.h>

int main(){

    int number, restNumber;

    printf("Digite um número: ");
    scanf("%i", &number);

    do{
        restNumber = number%10;
        number /= 10;
        printf("%i", restNumber);

    } while (number >= 1);

    printf("\n");

    return 0;
    
}