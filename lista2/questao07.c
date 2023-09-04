#include <stdio.h>

int divisionResult();
int main(){

    divisionResult();
    return 0;
}

int divisionResult(){

    float numberOne, numberTwo, division;

    while (numberTwo == 0){

        printf("Enter a number: ");
        scanf("%f", &numberOne);

        printf("Enter another number: ");
        scanf("%f", &numberTwo);
    
        if (numberTwo == 0){
            continue;

        }
        else {
            division = numberOne/numberTwo;
            printf("%f\n", division);

        }
    }
}