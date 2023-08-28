#include <stdio.h>

int main(){

    int inputSec, hour, minute;

    printf("Digite os segundos: ");
    scanf("%i", &inputSec);

    do{

        if (inputSec >= 3600){

            hour = inputSec/3600;
            inputSec = inputSec - (hour * 3600);
            continue;

        } else if (inputSec >= 60){
            minute = inputSec/60;
            inputSec = inputSec - (minute*60);
            
        }
    } while(inputSec >= 60);

    printf("%i horas, %i minutos, %i segundos\n", 
            hour, minute, inputSec);
    return 0;
}
