#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pessoa CONTATO;
typedef struct listaContato LCONTATO;

LCONTATO *criarlista();
void adicionarContato(LCONTATO *lista, char *nPessoa, char *nEmail, char *num);
void verAgenda(LCONTATO *lista);
void liberarLista(LCONTATO **lista);