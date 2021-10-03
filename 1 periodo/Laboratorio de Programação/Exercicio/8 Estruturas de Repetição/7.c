/* Faça um programa que receba um número e exiba seu fatorial. Fatorial é o produto
dos números inteiros positivos consecutivos de um número natural n, menores ou iguais a
n. Exemplo: 5! = 5*4*3*2*1 = 120*/

#include <stdio.h>

int main () {
    int numero, i, fatorial;

    puts("Digite um numero:");
    scanf("%d", &numero);

    printf("%d! = ", numero);
    for (i = numero; i >= 1; i--){
        fatorial *= i;
        printf("%d*", i);
    }
    printf(" = %d", fatorial);
}
