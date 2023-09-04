#include <stdio.h>

int main(){

    int a, b;

    printf("Enter the a: ");
    scanf("%i", &a);

    printf("Enter the b: ");
    scanf("%i", &b);

    if (a < b){
        for (a; a <= b; ++a){
            if (a % 4 == 0){
                printf("%i: %i\n", a, a*a);
            }
        }
    } 
    else {
        for (b; b <= a; ++b){
            if (b % 4 == 0){
                printf("%i: %i\n", b, b*b);
            }

        }
}
    return 0;
}
