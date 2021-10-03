/* 07 – Crie um programa que leia em duas variáveis separadas o nome e o sobrenome de
uma pessoa. Crie uma terceira variável chamada nomeCompleto, preencha-a
automaticamente unindo o nome e sobrenome. Ao final, exiba na tela. */

#include <stdio.h>
#include <string.h>

int main () {
    char fristName[30], lastName[30], fullName[60];

    puts("What's your frist name?");
    fflush(stdin);
    gets(fristName);
    puts("What's your last name?");
    fflush(stdin);
    gets(lastName);

    strcat(fullName, fristName);
    strcat(fullName, lastName);

    printf("Your full name is %s", fullName);
    return 0;

    //Por algum motivo não sei qual o fflush não resolvi meu problema no buffer.
}