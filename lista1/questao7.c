#include <stdio.h>

int main(){

    int hour, minute, second;
    int totalsecond;

    printf("Digite as horas: ");
    scanf("%i", &hour);

    printf("Digite os minutos: ");
    scanf("%i", &minute);

    printf("Digite os segundos: ");
    scanf("%i", &second);

    totalsecond = (hour*3600) + (minute*60) + second;

    printf("Em %i hora, %i minutos e %i segundos tem %i segundos\n", 
            hour, minute, second, totalsecond);

    return 0;
}