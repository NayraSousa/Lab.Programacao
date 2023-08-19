#include <stdio.h>

    int inputNumberHex, inputNumberOct ;
    int restNumberHex[5], restNumberOct[5];

int main(){
    
    printf("Digite um número decimal: ");
    scanf("%i", &inputNumberHex);
    inputNumberOct = inputNumberHex;

int decHex();{
    do {
        for (int i = 0; i < 5; ++i){

            restNumberHex[i] = inputNumberHex % 16;
            inputNumberHex /= 16;}
    } while (inputNumberHex >= 1);

    for (int i = 5; i >= 0; --i){
        printf("%X", restNumberHex[i]);}

    printf("\n");

    }
int decOctal();{
    do {
        for (int i = 0; i < 5; ++i){

            restNumberOct[i] = inputNumberOct % 8;
            inputNumberOct /= 8;
        }
    } while (inputNumberOct >= 1);

    for (int i = 5; i >= 0; --i){
        printf("%X", restNumberOct[i]);}

    printf("\n");

    return 0;
}
}
