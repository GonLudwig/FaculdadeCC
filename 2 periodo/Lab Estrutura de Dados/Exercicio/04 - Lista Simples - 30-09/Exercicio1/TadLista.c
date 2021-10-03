#include"TadLista.h"
#include<stdlib.h>

LISTA* criarLista(){
    LISTA *lista;
    lista = (LISTA*) calloc(1, sizeof(LISTA));
    if (lista != NULL) {
        lista->qtd = 0;
    }

    return lista;
};


int tamanhoLista(LISTA* lista){
    if (lista == NULL) {
        return ERROR;
    } else if (lista->qtd == MAX) {
        return MAX;
    } else {
        return lista->qtd;
    }
};

int inserirCaracter(LISTA* lista, char car){
    if (lista == NULL) {
        return 0;
    } else if (lista->qtd == MAX) {
        return 0;
    } else {
        lista->dados[lista->qtd].caracter = car;
        lista->qtd++;
        return 1; 
    }
};

char listainvertida(LISTA* lista, int i) {
    
    return lista->dados[i].caracter;
}


void liberarLista(LISTA* lista) {
    free(lista);
};