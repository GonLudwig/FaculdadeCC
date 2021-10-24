#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct filme FILME;
typedef struct listaFilme LFILME;

LFILME *criarlista();
void adicionarFilme(LFILME *lista, char *nFilme, char *nDiretor, int time);
void exibirMaiorDuracao(LFILME *lista);
void liberarLista(LFILME **lista);
