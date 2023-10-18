#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(){
    
    int vetor[SIZE];
    int control, temp;
    srand(time(NULL));

    for(int i = 0; i<SIZE; i++){
        *(vetor+i) = rand()%99;
    }

    control = 1;
    while(control){
        control = 0;
        for(int i = 0; i<SIZE; i++){
            if(*(vetor+i) > *(vetor+(i+1))){
                temp = *(vetor+(i+1));
                *(vetor+(i+1)) = *(vetor+i);
                *(vetor+i) = temp;
                control = 1;
            }
        }
    }

    for(int i = 0; i<SIZE; i++){
        printf("%i ", *(vetor+i));
    }

    return 0;
}