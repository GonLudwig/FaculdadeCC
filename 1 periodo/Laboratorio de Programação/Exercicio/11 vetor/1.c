/*01 – Dada uma determinada string, e um caractere ambos preenchidos pelo usuário,
exibir qual a quantidade de vezes em que o caractere aparece na string.*/

#include <stdio.h>

int main () {
    char frase[100], palavra;
    int i, contPalavra = 0;


    puts("Digite uma frase:");
    gets(frase);
    puts("Digite o letra que deseja saber quantas vezes ele apareceu na frase");
    scanf("%c", &palavra);

    for (i = 0; i < 100; i++) {
        if (frase[i] == palavra) {
            contPalavra++;
        }
    }

    printf("Na frase %s paraceu %d vezes a letra %c.", frase, contPalavra, palavra);
    return 0;
}
