#include<stdlib.h>
#include<stdio.h>

typedef struct numero NUM;
typedef struct listaNumero ListaNum;

ListaNum *criarLista();

NUM *criarNum(int num);

void adicionarInicioLista(ListaNum *lista, int num);

void adicionarFimLista(ListaNum *lista, int num);

void exibirListaInv(ListaNum *lista);

void liberarLista(ListaNum **lista);