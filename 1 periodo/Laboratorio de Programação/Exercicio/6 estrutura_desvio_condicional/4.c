/* Crie um programa que recebe um número inteiro e informe os seguintes dados:
a) O número é maior que zero?
b) O número é ímpar ou par?
c) O número é múltiplo de 3?*/

#include <stdio.h>

int main(){
    int valor;

    printf("Digite um valor inteiro:");
    scanf("%d", &valor);

    if (valor > 0) {
        printf("a) %d e maior que zero\n", valor);
    } else {
        printf("a) %d nao e maior que zero\n", valor);
    }

    if (valor % 2) {
        printf("B) E um valor impar\n");
    } else {
        printf("B) E um valor par\n");
    }

    if (valor % 3){
        printf("C) %d nao e multiplo de 3\n", valor);
    } else {
        printf("C) %d e multiplo de 3\n", valor);
    }

    return 0;
}
