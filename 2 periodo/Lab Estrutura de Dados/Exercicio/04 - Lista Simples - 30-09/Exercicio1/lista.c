/*1. Utilizando TAD e a independência de representações, implemente uma lista
simplesmente encadeada L1 representando uma sequência de caracteres.
Construa funções para criar a lista, inserir elementos na lista e imprimir a
sequência de caracteres da lista na ordem inversa.*/
#include<stdio.h>
#include"TadLista.h"

int main () {
    int tLista, i;
    char caracter;

    LISTA *lista;
    lista = criarLista();

    for(i=0;i<MAX;i++){
        puts("Digite o caracter que deseja inserir na lista:");
        fflush(stdin);
        scanf("%c", &caracter);
        inserirCaracter(lista, caracter);
    }

    tLista = tamanhoLista(lista);
    printf("O tamanho da lista e %d\n", tLista);

    printf("A lista invertida: ");
    for(i=MAX-1;i>=0;i--){
        caracter = listainvertida(lista, i);
        printf("'%c' ", caracter);
    }
    puts("");

    liberarLista(lista);

    return 0;
}
