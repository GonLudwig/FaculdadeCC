/*03 – Imagine que criemos um ponteiro e o façamos apontar para uma variável. Explique
como manipulamos o ponteiro:
a) como exibir o endereço do ponteiro?
b) como exibir o endereço para o qual o ponteiro aponta?
c) como exibir o valor contido no endereço para o qual o ponteiro aponta?*/
#include<stdio.h>

int main(){
    int *ponteiro;
    int variavel = 10;

    ponteiro = &variavel;

    printf("O endereco do ponteiro e: %p\n", &ponteiro);
    printf("o endereco para o qual o ponteiro aponta e: %p\n", ponteiro);
    printf("Conteundo do ponteiro e: %d\n", *ponteiro);
    return 0;
}
