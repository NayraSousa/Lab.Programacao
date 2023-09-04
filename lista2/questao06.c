#include <stdio.h>

int votingMachine();
int main(){

    votingMachine();

    return 0;
}

int votingMachine(){

    float percentageRenata, percentagePaulo,
            percentageBlank,percentageNull;
    int vote, totalVotes, renata, paulo, blankVotes, nullVotes;
    char confirmation;

    do {
        printf("Digite seu voto: ");
        scanf("%i", &vote);
        printf("Confirma? [s/n]");
        scanf(" %c", &confirmation);

        if (confirmation == 's'){
            if (vote == 5){
                renata++;
                totalVotes++;
            }

            else if (vote == 7){
                paulo++;
                totalVotes++;
            }
        
            else if (vote == 0){
                blankVotes++;
                totalVotes++;
            } 

            else{
                nullVotes++;
                totalVotes++;
            }
        }
    } while (vote >= 0);

    nullVotes--;
    totalVotes--;

    printf("\n");

    if (renata > paulo){
        printf("Renata ganhou.\n");

    } 
    if (paulo > renata){
        printf("Paulo ganhou.\n");
    } else {
        printf("Empataram.");
    }

    percentageRenata = ((float)renata/(float)totalVotes) * 100;
    percentagePaulo = ((float)paulo/(float)totalVotes) * 100;
    percentageBlank = ((float)blankVotes/(float)totalVotes) * 100;
    percentageNull = ((float)nullVotes/(float)totalVotes) * 100;

    printf("\n");
    printf("Renata: %.2f%%\nPaulo: %.2f%%\nBranco: %.2f%%\nNulo: %.2f%%\n",
            percentageRenata, percentagePaulo, 
            percentageBlank, percentageNull);


    
    
}