#include <stdio.h>

int main(){

    float restbill;

    printf("Digite o valor da conta: ");
    scanf("%f", &restbill);

    printf("O valor total da conta é: %.1f\n", restbill+(restbill*0.1));

    return 0;
}