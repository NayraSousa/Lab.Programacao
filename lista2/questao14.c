#include <stdio.h>

int main(){

    int a, b, quantNumbers = 0;

    printf("Enter the a: ");
    scanf("%i", &a);

    printf("Enter the b: ");
    scanf("%i", &b);

    if (a < b){
        for (a; a < b; ++a){
            if (a % 3 == 0){
                ++quantNumbers;
            }
        }
    } 
    else {
        for (b; b < a; ++b){
            if (b % 3 == 0){
                ++quantNumbers; 
            }
        }
    }
    printf("%i\n", quantNumbers);

    return 0;
}