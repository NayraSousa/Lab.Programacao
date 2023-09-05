#include <stdio.h>

int main(){

    int fatorial = 1;

    for (int i = 0; i < 10; i++){

        for (int c = i; c >= 1; c-- ){
            fatorial *= c;
        }

        printf("%i! = %i\n", i, fatorial);
        fatorial = 1;
    }
    return 0;
}