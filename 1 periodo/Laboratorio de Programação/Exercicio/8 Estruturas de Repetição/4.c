/* Crie um programa no qual o usuário informa um número, exiba todos os números
entre 0 e o número digitado. */

#include<stdio.h>

int main () {
    int numFinal, i;
    
    puts("Digite um numero para ser contado apartir de 0 ate ele:");
    scanf("%d", &numFinal);

    for(i = 1; i < numFinal; i++) {
        printf("%d \n", i);
    }
    return 0;
}