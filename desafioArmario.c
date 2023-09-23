#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    unsigned char numero = 0;
    int opcao, liberar, y = 0, armario, mask = 1;

    do{
        printf("Armários: ");
        for(int i = 7; i >= 0; i--){
            armario = numero >> i;
            if(armario & mask){
                printf("1 ");
            } else{
                printf("0 ");
            }
        }

        printf("\n");
        printf("\n");
        printf("Escolha uma opção:\n");
        printf("[1] Ocupar armário\n[2] Liberar armário\n[3] Sair\n");
        scanf("%i", &opcao);
        printf("\n");

        switch(opcao){

            case 1:
                if (numero == 255){
                    printf("Armários cheios!!!\n");
                    printf("\n");
                    break;

                } 
                else{
                    srand(time(NULL));
                    y = rand() % 8;
                    mask = mask << y;
                    numero = numero | mask;
                    mask = 1;
                    break;
                    }

            case 2:
                if (numero == 0){
                    printf("Todos os armários estão livres.\n");
                    break;

                }
                else{
                    printf("Qual armário deseja liberar? de 0 a 7\n");
                    scanf("%i", &liberar);
                    printf("\n");
                    if (liberar > 7){
                        printf("Armário inexistente\n");
                        printf("\n");
                        continue;
                    }
                    else{
                        mask = mask << liberar;
                        numero = numero & ~mask;
                        mask = 1;
                        break;
                    }
                }
            
            case 3:
                printf("Programa encerrado\n");
                break;

            default:
                printf("Essa opção não existe\n");
                printf("\n");
                continue;
        }
    } while(opcao != 3);
    return 0;
}