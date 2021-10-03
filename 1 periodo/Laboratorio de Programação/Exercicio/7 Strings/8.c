/* 08 – Crie um programa que receba duas palavras. Informe se as duas são iguais ou
diferentes. */

#include <stdio.h>
#include <string.h>

int main () {
    char palavra1[40],palavra2[40];

    puts("Escreva uma palavra:");
    fflush(stdin);
    gets(palavra1);
    puts("Esreva outra palavra");
    fflush(stdin);
    gets(palavra2);

    if (strcmp(palavra1, palavra2) == 0) {
        puts("As palavras sao iguais");
    } else {
        puts("As palavras sao diferentes");
    }
    return 0;
    //Por algum motivo não sei qual o fflush não resolvi meu problema no buffer.
}