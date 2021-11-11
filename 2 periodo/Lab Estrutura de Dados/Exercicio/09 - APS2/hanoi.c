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

void adicinarDiscoTorre(PTORRE *tor, int nunDisco) {
    TORRE *disco = criarTorre(nunDisco);

    if(tor->primeiro == NULL){
        tor->primeiro;
    } else {
        disco->anterior = tor->ultimo;
        tor->ultimo->proximo = disco;
    }
    tor->ultimo = disco;
    tor->qtdDisco++;

    return tor->qtdDisco;
}

int removerDiscoTorre(PTORRE *tor){
    int numDisco = tor->ultimo->tamanhoDisco;
    TORRE *disco = tor->ultimo;
    
    tor->ultimo = tor->ultimo->anterior;
    tor->ultimo->proximo = NULL;
    free(disco);

    return numDisco;
}

void iniciarTorreHanoi(PTORRE *torreInicial, PTORRE *torreFinal, PTORRE *torreAux){
    int i;

    limparTorre(torreAux);
    adicinarDiscoTorre(torreAux, 0);
    limparTorre(torreFinal);
    adicinarDiscoTorre(torreFinal, 0);
    for (i=0;i <= 7; i++){
        adicinarDiscoTorre(torreInicial, i);
    }
}

void transferirDisco(PTORRE *torreRetirar, PTORRE *torreInserir) {
    int disco;

    disco = removerDiscoTorre(torreRetirar);
    adicinarDiscoTorre(torreInserir, disco);
}

void exibirTorreHanoi(PTORRE *torreInicial, int *numI, PTORRE *torreFinal, int *numF, PTORRE *torreAux, int *numA){
    int i;
    numI = torreInicial->ultimo->tamanhoDisco;
    numF = torreFinal->ultimo->tamanhoDisco;
    numA = torreAux->ultimo->tamanhoDisco;
    TORRE *auxI = torreInicial->ultimo;
    TORRE *auxF = torreFinal->ultimo;
    TORRE *auxA = torreAux->ultimo;
    for (i=7;i>=1;i--){
        if (auxI == NULL && i > torreInicial->qtdDisco){
            printf("    [ | ]");
        } else {
            printf("    [ %d ]", auxI->tamanhoDisco);
        }

        if (auxA == NULL && i > torreAux->qtdDisco){
            printf("    [ | ]");
        } else {
            printf("    [ %d ]", auxA->tamanhoDisco);
        }

        if (auxF == NULL && i > torreFinal->qtdDisco){
            printf("    [ | ]");
        } else {
            printf("    [ %d ]", auxF->tamanhoDisco);
        }

        if (auxA != NULL && i > torreAux->qtdDisco){
            auxA = auxA->anterior;
        }

        if (auxI != NULL  && i > torreInicial->qtdDisco){
            auxI = auxI->anterior;
        }

        if (auxF != NULL && i > torreFinal->qtdDisco){
            auxF = auxF->anterior;
        }
    }   
}