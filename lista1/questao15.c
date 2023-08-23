#include <stdio.h>

int main(){

    int dias;
    float salario, salarioBruto;

    printf("Digite os dias trabalhados: ");
    scanf("%i", &dias);

    salario = dias*50.25;
    salarioBruto = salario - (salario*0.1);

    if (dias <= 10){
        printf("Seu salário líquido é: %.2f\n", salarioBruto);

    } else if (dias > 10 && dias <= 20){
        printf("Seu salário líquido é: %.2f\n", salarioBruto+salarioBruto*0.2);

    } else {
        printf("Seu salário líquido é: %.2f\n", salarioBruto+salarioBruto*0.3);

    }
    return 0;
}