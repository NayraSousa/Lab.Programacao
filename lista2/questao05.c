#include <stdio.h>

int biggestSmallestNumber();
int main(){

    biggestSmallestNumber();
    
    return 0;

}
int biggestSmallestNumber(){

    int higherNumber, smallerNumber, number;

    printf("Digite um número: ");
    scanf("%i", &number);

    while (number != 0){
        if (number > higherNumber){
            higherNumber = number;

    }   if (number < higherNumber){
            smallerNumber = number;
    }
        printf("Digite um número: ");
        scanf("%i", &number);
    }

    printf("Maior número: %i\nMenor número: %i", 
    higherNumber, smallerNumber);


}