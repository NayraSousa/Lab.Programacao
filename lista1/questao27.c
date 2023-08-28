#include <stdio.h>
#include <math.h>

int main(){

    float x, y, z, ma, mg;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

    printf("Digite o valor de z: ");
    scanf("%f", &z);
    
    mg = pow((x*y*z), 0.3);
    ma = (x+y+z)/3;


    printf("mg: %.0f\nma: %.0f\n", mg, ma);

    return 0;


}