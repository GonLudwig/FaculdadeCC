/*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma
de seus divisores positivos diferentes de n. Construa um programa em C que verifica se
um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6.*/

#include<stdio.h>

int main () {
    int valor, testPerfect, i;

    puts("Digite um valor para saber se ele e perfeito:");
    scanf("%d", &valor);

    for (i = 1; i < valor; i++) {
        if (valor % i == 0) {
            testPerfect += i;
            printf("%d+", i);
        }
    }

    if (testPerfect == valor) {
        printf("= %d entao e um numero perfeito.", valor);
    } else {
        printf("= %d entao nao e um numero perfeito", valor);
    }
    return 0;
}
