#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct item COMPRA;
typedef struct listaCompras LCOMPRAS;

LCOMPRAS *criarlista();
void adicionarProduto(LCOMPRAS *lista, char *produto);
void verCompras(LCOMPRAS *lista);
void liberarLista(LCOMPRAS **lista);