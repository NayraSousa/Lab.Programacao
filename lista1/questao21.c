#include <stdio.h>

int main(){
    
    int numberOne;
    int numberTwo;

    printf("Digite um número: ");
    scanf("%i", &numberOne);

    printf("Digite outro número: ");
    scanf("%i", &numberTwo);

    printf(numberOne%numberTwo? "Não é múltiplo\n":"É múltiplo\n");

    return 0;
}