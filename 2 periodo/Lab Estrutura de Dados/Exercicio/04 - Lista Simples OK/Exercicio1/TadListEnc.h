#include<stdio.h>
#include<stdlib.h>

typedef struct listaNumero ListaNum;

typedef struct numero NUM;

ListaNum *criarLista();

NUM *criarNum(int num);

void adicionarNumLista(ListaNum *lista, int num);

void exibirListaInv(ListaNum *lista);

void liberarLista(ListaNum **lista);