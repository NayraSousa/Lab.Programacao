#include <stdio.h>

int main(){

    float numberOne, numberTwo, restdivision;
    int numberOneInt, numberTwoInt;

    printf("Digite um número: ");
    scanf("%f", &numberOne);

    printf("Digite outro número: ");
    scanf("%f", &numberTwo);

    numberOneInt = numberOne;
    numberTwoInt = numberTwo;


    printf("%.2f + %.2f = %.2f\n", numberOne, numberTwo, numberOne+numberTwo);
    printf("%.2f - %.2f = %.2f\n", numberOne, numberTwo, numberOne-numberTwo);
    printf("%.2f * %.2f = %.2f\n", numberOne, numberTwo, numberOne*numberTwo);
    printf("%.2f / %.2f = %.2f\n", numberOne, numberTwo, numberOne/numberTwo);
    printf("E o resto da divisão de %.2f / %.2f = %i\n", numberOne, 
            numberTwo, numberOneInt/numberTwoInt);



}