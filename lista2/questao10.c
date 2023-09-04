#include <stdio.h>

int main(){

    for (int i = 15; i <= 90; ++i){

        if (i % 4 == 0){
            printf("%i: %i\n", i, i*i);
        }
    }
    return 0;
}