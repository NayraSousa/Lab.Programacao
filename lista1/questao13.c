#include <stdio.h>

int main(){
    
    int a, b, z;

    printf("Digite um número: ");
    scanf("%i", &a);

    printf("Digite outro número: ");
    scanf("%i", &b);

    z = a;
    a = b;
    b = z;

    printf("a = %i\nb = %i\n", a, b);

    return 0;
}