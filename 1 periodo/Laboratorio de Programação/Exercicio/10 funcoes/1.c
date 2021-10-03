/*01 – Crie uma função capaz de receber por parâmetro três valores e exibi-los em ordem
crescente.*/

#include <stdio.h>

int sequencia(int value1,int value2,int value3) {
    
    int highValue, mediumValue, lowValue;

    if (value3 > value2 && value3 > value1) {
        highValue = value3;
        if (value2 > value1) {
            mediumValue = value2;
            lowValue = value1;
        } else {
            mediumValue = value1;
            lowValue = value2;
        }
    } else if (value2 > value3 && value2 > value1) {
        highValue = value2;
        if (value3 > value1) {
            mediumValue = value3;
            lowValue = value1;
        } else {
            mediumValue = value1;
            lowValue = value3;
        }
    } else {
        highValue = value1;
        if (value3 > value2) {
            mediumValue = value3;
            lowValue = value2;
        } else {
            mediumValue = value2;
            lowValue = value3;
        }
    }

    printf("A ordem crescente e %d %d %d", highValue, mediumValue, lowValue);
}

int main () {
    
    int value1, value2, value3;
   
    puts("Digite 3 valores:");
    scanf("%d", &value1);
    scanf("%d", &value2);
    scanf("%d", &value3);

    sequencia(value1, value2, value3);

    return 0;
}