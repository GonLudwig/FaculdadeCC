/*Faça um programa que receba dois números e exiba os números inteiros existentes
entre eles.*/

#include<stdio.h>

int main () {
    int numInicial, numFinal, i;

    puts("Digite o numero inicial da sequencia:");
    scanf("%d", &numInicial);
    puts("Digite o numero final da sequencia:");
    scanf("%d", &numFinal);

    for (i = numInicial + 1; i < numFinal; i++){
        printf("%d ", i);
    }
    return 0;
}
