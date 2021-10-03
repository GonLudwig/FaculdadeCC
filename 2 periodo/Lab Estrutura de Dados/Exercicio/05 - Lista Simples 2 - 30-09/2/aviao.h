#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct aviao VOO;

typedef struct inicioLista INICIOL;

typedef struct pessoa CLIENTE;

INICIOL *criarLista();

void inserirInicioLista(INICIOL *lista, char *ori, char *dest );

void inserirFinalLista(INICIOL *lista, char *ori, char *dest);

void exibirVoo(INICIOL *lista);

void liberarLista(INICIOL **lista);

