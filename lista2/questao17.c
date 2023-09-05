#include <stdio.h>

int main(){

    int fahrenheit = 0;

    for (int celsius = 10; celsius <= 100; celsius += 10){

        fahrenheit = 9*celsius/5 + 32;
        printf("C: %i, F: %i\n", celsius, fahrenheit);
    }
    return 0;
}