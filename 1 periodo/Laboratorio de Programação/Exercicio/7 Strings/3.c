/*03 – Faça um programa que permita ao usuário informar uma palavra de até 10
caracteres e em seguida imprima-a na tela.*/

#include <stdio.h>
#include <string.h>

int main () {
    char palavra[10];

    printf("Escreva uma palavra com 10 letras:");
    fflush(stdin);
    gets(palavra);

    printf("A palavra digitava foi: %s", palavra);

    return 0;
    //Por algum motivo não sei qual o fflush não resolvi meu problema no buffer.
}