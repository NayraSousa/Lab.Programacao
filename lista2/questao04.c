#include <stdio.h>

int main(){

    int peterHeight();
    int years;
    int pedro = 110;
    int jose = 150;

    years = peterHeight(pedro, jose);

    printf("%i anos\n", years);

    return 0;
}

int peterHeight(int pedro, int jose){

    int years;

    while(pedro <= jose){
        pedro += 3;
        jose += 2;
        years++;

    }
    return years;
}