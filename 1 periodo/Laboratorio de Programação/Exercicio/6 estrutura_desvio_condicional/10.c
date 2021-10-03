// Crie um programa capaz de receber um determinado número e exiba se ele émúltiplo de 7.

#include <stdio.h>

int main() {
    int mult7;

    printf("Dige um valor para saber se ele e multiplo de 7:");
    scanf("%d", &mult7);

    if (mult7 % 7) {
        printf("Esse numero %d nao e um valor multiplo de 7", mult7);
    } else {
        printf("O valor %d e multiplo de 7", mult7);
    }
    return 0;
}
