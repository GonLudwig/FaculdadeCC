#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct site SITES;
typedef struct listaSite LSITES;
typedef struct pilhaSite PSITES;

LSITES *criarListaSites();
PSITES *criarPilhaSites();
void adicionarLista(LSITES *lista, char *dominio);
void verificarPilha(LSITES *lista, PSITES *pilha, char *vereficacao);
void liberarLista(LSITES **lista);