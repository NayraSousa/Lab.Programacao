#include <stdio.h>

int main(){

    float inputReal;
    float dollarValue;
    float conversionRealDollar;

    printf("Digite o valor do dólar: ");
    scanf("%f", &dollarValue);

    printf("Digite o valor em real: ");
    scanf("%f", &inputReal);

    conversionRealDollar = dollarValue * inputReal;

    printf("%.2f\n", conversionRealDollar);

    return 0;
}