#include <stdio.h>

    int inputNumberHex, inputNumberOct ;
    int restNumberHex, restNumberOct;

int main(){
    
    printf("Digite um número decimal: ");
    scanf("%i", &inputNumberHex);
    inputNumberOct = inputNumberHex;

int decHex();{
    do {
        restNumberHex = inputNumberHex % 16;
        printf("%i", restNumberHex);
        inputNumberHex /= 16;
    } while (inputNumberHex >= 1);
    }
    printf("\n");

int decOctal();{
    do {
        restNumberOct = inputNumberOct % 8;
        printf("%i", restNumberOct);
        inputNumberOct /= 8;
    } while (inputNumberOct >= 1);
    }
    printf("\n");

    return 0;
}
