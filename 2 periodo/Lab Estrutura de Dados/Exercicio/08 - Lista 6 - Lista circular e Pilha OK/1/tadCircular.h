#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct site SITES;
typedef struct listaSite LSITES;

LSITES *criarListaSites();
void adicionarLista(LSITES *lista, char *dominio);
void exibirUrl(LSITES *lista);
void liberarLista(LSITES **lista);