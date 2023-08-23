#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float x;

    printf("Digite um número: ");
    scanf("%f", &x);

    printf("%.2f\n", fabs(x));

    return 0;
}