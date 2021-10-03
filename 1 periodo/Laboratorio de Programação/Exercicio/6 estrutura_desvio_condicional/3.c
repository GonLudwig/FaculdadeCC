/* Escreva um programa em C que receba um inteiro e diga 
se é par ou ímpar. */
#include<stdio.h>

int main() {
    int valor;

    printf("Digite um valor para saber se e par ou impar:");
    scanf("%d", &valor);

    if (valor % 2) {
        printf("E um valor par");
    } else {
        printf("E um valor impar");
    }

    return 0;
}
