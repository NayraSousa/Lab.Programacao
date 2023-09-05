#include <stdio.h>

int main(){

    unsigned long int somatorio = 1;
    unsigned long int count = 1;

    for (int i = 1; i <= 64; i++){
        printf("%lu\n", somatorio);
        count *= 2;
        somatorio += count;

    }
    return 0;
}