#include "tadProcesso.h"

struct processo {
    int id;
    char process[100];
    struct processo *proximo;
    struct processo *anterior;
};

struct filaProcesso {
    int qtd;
    struct processo *inicio;
    struct processo *fim;
};

FPROSS *criarFilaProcesso(){
    FPROSS *fila = (FPROSS*) calloc(1, sizeof(FPROSS));

    fila->inicio = NULL;
    fila->fim = NULL;
    fila->qtd = 0;

    return fila;
}

PROSS* criarProcesso(int quantidade, char *name){
    PROSS *fila = (PROSS*) calloc(1, sizeof(PROSS));

    fila->id = quantidade;
    strcpy(fila->process, name);
    fila->proximo = NULL;
    fila->anterior = NULL;

    return fila;
}

void adicionarFila(FPROSS *fila, char *name, int idPross){
    PROSS *url = criarProcesso(idPross, name);
    url->proximo = fila->inicio;

    if(fila->inicio == NULL){
        fila->fim = url;
    } else {
        fila->inicio->anterior = url;
    }
    fila->inicio = url;
    fila->qtd++;
}

void executarProcesso(FPROSS *fila){
    if (fila->fim != NULL){
        PROSS *aux = fila->fim;
        if (fila->fim == fila->inicio){
            fila->inicio = NULL;
            fila->fim = NULL;
        } else {
            fila->fim = fila->fim->anterior;
            fila->fim->proximo = NULL;
        }
        printf("Codigo do processo: %d\n", aux->id);
        printf("Nome Processo: %s\n", aux->process);
        free(aux);
        puts("Programa executado...");
    } else {
        puts("Fila vazia!");
    }
}

void exibirFila(FPROSS *fila){
    int i = 0;
    PROSS *programa = fila->fim;

    while(programa != NULL){
        i++;
        printf("Posicao na Fila: %d\n", i);
        printf("Codigo do processo: %d\n", programa->id);
        printf("Nome Processo: %s\n", programa->process);
        programa = programa->anterior;
    }
}

void liberarFila(FPROSS **lista){
    FPROSS *auxFila = *lista;
    PROSS *percorer = auxFila->inicio;
    PROSS *aux = NULL;
    int i = 0;
    while (percorer != NULL){
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
    }
    
    free(auxFila);
    *lista = NULL;
}