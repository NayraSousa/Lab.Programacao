#include <stdio.h>

int main(){

    int x, n;
    int y = 1;

    printf("Digite o valor de x: ");
    scanf("%i", &x);

    printf("Digite o valor de n: ");
    scanf("%i", &n);

    y = y << n;
    
    printf("%i\n", x*y);

    return 0;
}