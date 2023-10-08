#include <stdio.h>
#define SIZE 20

int main(){

    char palavra[SIZE];
    int i = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while(palavra[i] != '\0'){
        i++;
    }
    
    for(int j = i; j >= 0; j--){
        printf("%c", palavra[j]);
    }
    printf("\n");

    return 0;

}