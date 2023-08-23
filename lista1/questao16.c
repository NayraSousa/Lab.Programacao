#include <stdio.h>

int main(){

    float valorAula, horasTrabalhadas;
    int descontoINSS;
    float salarioBruto, salarioLiquido;

    printf("Digite o valor da hora aula: ");
    scanf("%f", &valorAula);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o desconto do INSS: ");
    scanf("%i", &descontoINSS);

    salarioBruto = valorAula * horasTrabalhadas;
    salarioLiquido = salarioBruto - (salarioBruto*descontoINSS/100);

    printf("O salário bruto: %.2f\n O salário líquido: %.2f", salarioBruto, salarioLiquido);

    return 0;

}