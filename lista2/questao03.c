#include <stdio.h>

int factorialNumber();
int main(){


    int factorial = 1;

    factorial = factorialNumber();

    printf("%i\n", factorial);

    return 0;

}

int factorialNumber(){

    int factorial = 1;
    int number;

    printf("Digite um número: ");
    scanf("%i", &number);


    while(number > 1){

        factorial *= number;
        number--;

        

    }

    return factorial;

}