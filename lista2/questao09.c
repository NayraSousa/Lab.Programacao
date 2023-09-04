#include <stdio.h>

int main(){

    int amountTerms, fibonacci = 0, number1, number2 = 1;

    printf("Enter the number of terms: ");
    scanf("%i", &amountTerms);

    for (int i = 0; i < amountTerms; ++i){

        number1 = fibonacci + number2;
        fibonacci = number2;
        number2 = number1;
    }

    printf("%i\n", fibonacci);
    return 0;
}

