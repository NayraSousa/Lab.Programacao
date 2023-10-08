#include <stdio.h>
#include <stdbool.h>
#define SIZE 20

int main(){

    char palavra[SIZE];
    char caractere;
    bool veredito = false;

    printf("Digite uma palavra e um caractere: ");
    scanf("%s %c", palavra, &caractere);
    
    for(int i = 0; i<SIZE; i++){
        if(palavra[i]==caractere){
            veredito = true;
            break;
        }
    }
    if(veredito == true){
        printf("Tem o caractere na palavra\n");
    }
    else{
        printf("Não tem o caractere na palavra\n");
    }

    return 0;
}