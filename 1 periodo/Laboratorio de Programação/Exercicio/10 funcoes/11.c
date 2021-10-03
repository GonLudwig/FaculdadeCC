/*11 – Crie uma função capaz de analisar um dado número e informar se ele é um número
perfeito.*/
#include<stdio.h>

int isPerfect (int num) {
    int testPerfect, i;

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            testPerfect += i;
            printf("%d+", i);
        }
    }

    if (testPerfect == num) {
        printf("= %d entao e um numero perfeito.", num);
    } else {
        printf("= %d entao nao e um numero perfeito", num);
    }
    return 0;
}

int main () {
    int numero;

    puts("Digite um valor para saber se ele e perfeito:");
    scanf("%d", &numero);

    isPerfect(numero);

    return 0;
}