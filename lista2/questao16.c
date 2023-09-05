#include <stdio.h>

int main(){

    int sumMin100 = 0, sumMax200;
    for (int i = 0; i <= 200; i++){
        if (i <= 100){
            if (i % 3 == 0){
                sumMin100 += i;
            } 

        }
        if (i % 5 == 0){
            sumMax200 += i;
        }
    }
    printf("%i, %i\n", sumMin100, sumMax200);
    return 0;
}