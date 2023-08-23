#include <stdio.h>

int main(){
    int lado = 5;

    for (int col = 1; col <= lado; ++col){
        printf("* ");
    }

    for (int linha = 1; linha <= lado; ++linha){
        printf("\n* ");

        for (int col = 0; col <= lado; ++col){
            printf(" ");
            if (col == lado){
                printf("* ");
            }
        }
    }
    
    printf("\n");

    for (int col = 1; col <= lado; ++col){
        printf("* ");}
    printf("\n");

    return 0;
}
