/* 04 – Crie um programa que leia uma frase e imprima a quantidade de caracteres desta
frase. */

#include <stdio.h>
#include <string.h>

int main () {
    char frase[60];
    int quantChar;

    printf("Escreve uma frase:");
    gets(frase);

    quantChar = strlen(frase);

    printf("Nesta frase existe %d caracteres", quantChar);
    return 0;
}
