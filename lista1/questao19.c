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
    printf("\n");

    /*#############*/

    printf("  ***** \n");
    printf(" *     *");
    for (int coluna = 1; coluna <= lado; ++coluna){
        printf("\n*       *");
        
    }
    printf("\n");
    printf(" *     *\n");
    printf("  ***** \n");

    printf("\n");

    /*################*/

    printf("  * \n");
    printf(" ***\n");
    printf("*****\n");
    for (int p = 1; p <= lado; ++p){
        printf("  *\n");
    }
    printf("\n");

    /*################*/

    printf("       *     \n");
    printf("   *       *\n");
    printf("*             *\n");
    printf("   *       *\n");
    printf("       *     \n");



    
    return 0;
}
