#include <stdio.h>

int main(){

    int x, y;
    int *px, *py;
    int *sum, adder;

    printf("Digite dois números: ");
    scanf("%i%i", &x, &y);

    px = &x;
    py = &y;

    adder = *px + *py;
    sum = &adder;

    printf("[%p] - %i\n", sum, adder);

    return 0;
}