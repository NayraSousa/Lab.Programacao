#include <stdio.h>

int main(){

    int storeInstallment();
    storeInstallment();
    
    return 0;
}

int storeInstallment(){

    float value, purchaseEntry, restOfDivision;
    int installments;

    printf("Enter the purchase amount: ");
    scanf("%f", &value);

    installments = value / 3;
    restOfDivision = value - 3*installments;
    purchaseEntry = installments + restOfDivision;

    printf("A entrada será de R$%.2f e as parcelas de R$%i.00\n",
            purchaseEntry, installments);
}