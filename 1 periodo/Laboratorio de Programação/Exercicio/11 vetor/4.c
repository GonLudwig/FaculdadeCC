/*04 – Crie um programa capaz de ler um vetor de 10 números inteiros do usuário, porém não aceite o número zero;*/
#include <stdio.h>

int main () {
    int vetor[10], i;

    puts("Digite 10 numeros:");

    for(i=0; i<10; i++) {
        printf("Digite o %d numero", i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i] == 0) {
            puts("0 nao e um numero valido!");
            i--;
        }
    }
 
    return 0;
}
