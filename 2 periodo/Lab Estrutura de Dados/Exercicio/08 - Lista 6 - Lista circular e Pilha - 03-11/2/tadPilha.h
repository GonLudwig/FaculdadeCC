#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct site SITES;
typedef struct listaSite LSITES;
typedef struct pilhaSite PSITES;

LSITES *criarListaSites();
void adicionarLista(LSITES *lista, char *dominio);
void exibirUrl(LSITES *lista);
void liberarLista(LSITES **lista);
void conversorString(char *caracteres) // teste