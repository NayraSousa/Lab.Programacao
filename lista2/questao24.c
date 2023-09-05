#include <stdio.h>
#include <math.h>

int main(){
    
    int hipo = 1, cat1 = 1, cat2 = 1;

    for (hipo; hipo <= 500; hipo++){
        for(cat1; cat1 <= 500; cat1++){
            for (cat2; cat2 <= 500; cat2++){
                int catetos = ((float)cat1*cat1) + ((float)cat2*cat2);
                int hip = (float)hipo * hipo;

                if (hip == catetos){
                    printf("é uma tripla\n");
                }
                else {
                    break;
                }

    
            }
            
        }
    }
    return 0;
}