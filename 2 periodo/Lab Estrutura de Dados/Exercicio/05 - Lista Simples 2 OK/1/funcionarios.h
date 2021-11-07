#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX 3
#define ERROR -1

typedef struct listaFuncionarios LISTAFUNC;

struct funcionarios {
    char nome[100];
    int pontos[3];
    int tPontos;
};

struct listaFuncionarios {
    struct funcionarios colaborador[MAX];
    int qtd;
};

LISTAFUNC *criarlista() ;

int inserirLista(LISTAFUNC *lista, char *nome, float nov, float dez, float jan );

void pontosTotalVendedor(LISTAFUNC *lista);

int pontosTotal(LISTAFUNC *lista, int qtd);

void maiorVendedor(LISTAFUNC *lista);

int totalVenda(LISTAFUNC *lista);

void liberarLista(LISTAFUNC *lista);

#endif
