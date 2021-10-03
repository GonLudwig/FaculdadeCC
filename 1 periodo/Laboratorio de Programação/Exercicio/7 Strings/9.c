/* 09 – Crie um programa que receba do usuário duas palavras, exiba-as em ordem
alfabética. (trata-se de analisar qual palavra é ‘menor’ que a outra, e não letra por letra). */

#include <stdio.h>
#include <string.h>

int main () {
    char palavra1[40],palavra2[40];

    puts("Escreva uma palavra:");
    fflush(stdin);
    gets(palavra1);
    puts("Escreva outra palavra:");
    fflush(stdin);
    gets(palavra2);

    if (strlen(palavra1) < strlen(palavra2)) {
        printf("A ordem 'alfabetica' e %s %s", palavra1, palavra2);
    } else {
        printf("A ordem 'alfabetica' e %s %s", palavra2, palavra1);
    }
    return 0;
    //Por algum motivo não sei qual o fflush não resolvi meu problema no buffer.
}
