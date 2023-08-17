#include <stdio.h>

int main(){

    int x, y, z;

    x = 7+3*6/2-1; //
    y = 2%2+2*2-2/2;
    z = (3*9*(3+(9*3/(3))));

    /*As operações funcionam por ordem de prioridade de execução,
    primeiro são os parênteses, segundo a multiplicação 
    e a divisão e terceiro a soma e a divisão*/

    printf("O valor de x é: %i\n", x);
    printf("O valor de y é: %i\n", y);
    printf("O valor de z é: %i\n", z);

    return 0;
}