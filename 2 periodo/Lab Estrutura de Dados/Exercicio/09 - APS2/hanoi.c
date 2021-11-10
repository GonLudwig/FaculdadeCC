#include "hanoi.h"

struct pessoa {
    int qtd;
    char monge[100];
    int pontos;
    struct pessoa *proximo;
    struct pessoa *anterior;
};

struct filaPessoa {
    int qtdFila;
    struct pessoa *primeiro;
    struct pessoa *ultimo;
};

struct disco {
    int tamanhoDisco;
    struct disco *proximo;
    struct disco *anterior;
};

struct pilhaDisco {
    int qtdDisco;
    struct disco *primeiro;
    struct disco *ultimo;
};

MONGE *criarMonge(int num, char *nome){
    MONGE *pessoa = (MONGE*) calloc(1, sizeof(MONGE));

    pessoa->qtd = num;
    strcpy(pessoa->monge, nome);
    pessoa->pontos = 0;
    pessoa->proximo = NULL;
    pessoa->anterior = NULL;

    return pessoa;
}

FMONGE *criarFilaMonge(){
    FMONGE *fila = (FMONGE*) calloc(1, sizeof(FMONGE));

    fila->qtdFila = 0;
    fila->primeiro = NULL;
    fila->ultimo = NULL;

    return fila;
}

TORRE *criarTorre(int tamanho){
    TORRE *disco = (TORRE*) calloc(1, sizeof(TORRE));

    disco->tamanhoDisco = tamanho;
    disco->proximo = NULL;
    disco->anterior = NULL;

    return disco;
}

PTORRE *criarTorreHanoi(){
    PTORRE *pilha = (PTORRE*) calloc(1, sizeof(PTORRE));

    pilha->qtdDisco = 0;
    pilha->primeiro = NULL;
    pilha->ultimo = NULL;

    return pilha;
}

void adicionarMonge(FMONGE *fila, char *nome){
    fila->qtdFila++;
    MONGE *pessoa = criarMonge(fila->qtdFila, nome);
    
    if (fila->primeiro == NULL){
        fila->ultimo = pessoa;
    } else {
        pessoa->proximo = fila->primeiro; 
        fila->primeiro->anterior = pessoa;
        pessoa->anterior = fila->ultimo;
        fila->ultimo->proximo = pessoa;
    }

    fila->primeiro = pessoa;
}

void iniciarTorreHanoi(PTORRE *torreInicial, PTORRE *torreFinal, PTORRE *torreAux){
    
}

void limparTorre(PTORRE *tor){
    TORRE *aux = NULL;
    TORRE *percorer = tor->primeiro;

    while (percorer != NULL){
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
    }
    tor->primeiro = NULL;
    tor->ultimo = NULL;
    tor->qtdDisco = 0;
}