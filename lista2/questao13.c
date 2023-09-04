#include <stdio.h>

int main(){

    int a, b, sum = 0;

    printf("Enter the a: ");
    scanf("%i", &a);

    printf("Enter the b: ");
    scanf("%i", &b);

    if (a < b){
        for (a; a < b; ++a){
            if (a % 2 == 0){
                sum += a;

            }
        }
    }
    else {
        for (b; b < a; ++b){
            if (b % 2 == 0){
                sum += b;

            }
        }
    }
    printf("%i\n", sum);

    return 0;
}