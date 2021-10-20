#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct filme FILME;
typedef struct listaFilme LFILME;

LFILME *criarlista();

LFILME *criarFilme(char *nFilme, char *nDiretor, int time);

void adicionarFilme(LFILME *lista, char *nFilme, char *nDiretor, int time);
void exibirMaiorDuracao(LFILME *lista);
void liberarLista(LFILME **lista);