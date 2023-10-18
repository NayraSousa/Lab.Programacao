#include <stdio.h>

int main(){
    
    int number, small;
    int *pNumber = &number;

    printf("Type a number: ");
    scanf("%i", &number);
    small = *pNumber;

    while(*pNumber != 0){
        printf("Type a number: ");
        scanf("%i", &number);
        if(*pNumber == 0){
            break;
        }

        if(*pNumber < small){
            small = *pNumber;
        }
    }

    printf("%i\n", small);
    return 0;
}