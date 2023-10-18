#include <stdio.h>

int main(){

    int swap(int *a, int *b);
    int a = 4, b = 10;

    swap(&a, &b);

    printf("%i %i\n", a, b);
    return 0;
}
int swap(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}