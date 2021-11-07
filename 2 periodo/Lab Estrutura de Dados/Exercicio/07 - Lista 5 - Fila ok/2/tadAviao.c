#include "tadAviao.h"

struct voo {
    int id;
    char destino[100];
    struct voo *proximo;
    struct voo *anterior;
};

struct filaVoo {
    int qtd;
    struct voo *inicio;
    struct voo *fim;
};

FVOO *criarFilaDecolagem(){
    FVOO *fila = (FVOO*) calloc(1, sizeof(FVOO));

    fila->inicio = NULL;
    fila->fim = NULL;
    fila->qtd = 0;

    return fila;
}

VOO *criarVoo(int quantidade, char *name){
    VOO *fila = (VOO*) calloc(1, sizeof(VOO));

    fila->id = quantidade;
    strcpy(fila->destino, name);
    fila->proximo = NULL;
    fila->anterior = NULL;

    return fila;
}

void adicionarFila(FVOO *fila, char *name, int idVoo){
    VOO *aviao = criarVoo(idVoo, name);
    aviao->proximo = fila->inicio;

    if(fila->inicio == NULL){
        fila->fim = aviao;
    } else {
        fila->inicio->anterior = aviao;
    }
    fila->inicio = aviao;
    fila->qtd++;
}

void autorizarDecolagem(FVOO *fila){
    if (fila->fim != NULL){
        VOO *aux = fila->fim;
        if (fila->fim == fila->inicio){
            fila->inicio = NULL;
            fila->fim = NULL;
        } else {
            fila->fim = fila->fim->anterior;
            fila->fim->proximo = NULL;
        }
        printf("Codigo do VOO: %d\n", aux->id);
        printf("Destino: %s\n", aux->destino);
        free(aux);
        puts("Iniciando decolagem...");
    } else {
        puts("Fila vazia!");
    }
}

void exibirFila(FVOO *fila){
    int i = 0;
    VOO *aviao = fila->fim;

    while(aviao != NULL){
        i++;
        printf("Posicao na Fila: %d\n", i);
        printf("Codigo do VOO: %d\n", aviao->id);
        printf("Destino: %s\n", aviao->destino);
        aviao = aviao->anterior;
    }
    printf("Existem %d avioes na fila para decolagem.\n", i);
}

void liberarFila(FVOO **lista){
    FVOO *auxFila = *lista;
    VOO *percorer = auxFila->inicio;
    VOO *aux = NULL;
    int i = 0;
    while (percorer != NULL){
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
    }
    
    free(auxFila);
    *lista = NULL;
}