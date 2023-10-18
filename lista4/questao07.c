#include <stdio.h>
#define SIZE 10

int main(){

    char wordOne[SIZE], wordTwo[SIZE], palavraTotal[SIZE*2];
    int i = 0, j = 0;

    printf("Type de first word: ");
    scanf("%s", wordOne);

    printf("Type the second word: ");
    scanf("%s", wordTwo);

    while(*(wordOne+i) != '\0'){
        i++;
    }
    while(*(wordTwo+j) != '\0'){
        j++;
    }
    for(int k = 0; k<i; k++){
        palavraTotal[k] = *(wordOne+k);
    }
    for(int m = 0; m<j; m++){
        palavraTotal[i+m] = *(wordTwo+m);
    }

    printf("%s\n", palavraTotal);

    return 0;
}