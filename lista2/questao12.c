#include <stdio.h>

int main(){

    int number;

    printf("Enter a number: ");
    scanf("%i", &number);

    for (int i = 0; i <= 10; ++i){
        printf("%i * %i = %i\n", i, number, i*number);
    }
    return 0;
}