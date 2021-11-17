#include"semaforo.h"

struct veiculo {
    char placa[10];
    struct veiculo *proximo;
};

struct filaVeiculo {
    int qtdCarro;
    struct veiculo *inicio;
    struct veiculo *fim;
};

CARRO *criarCarro(char *placa){
    CARRO *veiculo = (CARRO*) calloc(1, sizeof(CARRO));

    strcpy(veiculo->placa, placa);
    veiculo->proximo = NULL;

    return veiculo;
}

FCARRO *criarFilaCarro(){
    FCARRO *fila = (FCARRO*) calloc(1, sizeof(FCARRO));

    fila->qtdCarro = 0;
    fila->inicio = NULL;
    fila->fim = NULL;

    return fila;
}

int adicionarCarro(FCARRO *fila, char *placa){
    CARRO *veiculo = criarCarro(placa);
    
    if(fila->inicio == NULL){
        fila->inicio = veiculo;
    } else {
        fila->fim->proximo = veiculo;
    }

    fila->fim = veiculo;
    fila->qtdCarro++;

    return fila->qtdCarro;
}

void abrirSemaforo(FCARRO *fila){
    CARRO *aux = NULL;
    CARRO *percorer = fila->inicio;

    puts("Abrindo semaforo");
    if(percorer == NULL){
        puts("Fila esta vazia!");
    }
    while(percorer != NULL){
        printf("Veiculo: %s\n", percorer->placa);
        puts("Saindo veiculo ...");
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
        fila->qtdCarro--;
    }
    fila->fim = NULL;
    fila->inicio = NULL;
}

void liberaFila(FCARRO **fila){
    FCARRO *f = *fila;

    CARRO *aux = NULL;
    CARRO *percorer = f->inicio;

    while(percorer != NULL){
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
    }

    free(f);
}