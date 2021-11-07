#include "TadListEnc.h"

struct numero {
    int num;
    struct numero *proximo;
};

struct listaNumero {
    struct numero *inicio;
    struct numero *fim;    
};

ListaNum *criarLista() {
    ListaNum *lista = (ListaNum*) calloc(1, sizeof(ListaNum));

    lista->inicio = NULL;
    lista->fim = NULL;

    return lista;
}

NUM *criarNum(int num) {
    NUM *numero = (NUM*) calloc(1, sizeof(NUM));
    
    numero->num = num;
    numero->proximo = NULL;

    return numero;
}

void adicionarNumLista(ListaNum *lista, int num){
    NUM *numero = criarNum(num);
    numero->proximo = lista->inicio;
    lista->inicio = numero;


}

void exibirListaInv(ListaNum *lista) {
    NUM *numero = lista->inicio;

    puts("Lista invertida");
    while(numero != NULL){
        printf(" %d ", numero->num);
        numero = numero->proximo;
    }
    puts("");
}

void liberarLista(ListaNum **lista) {
    ListaNum *l = *lista;

    NUM *v = l->fim;
    NUM *ax = NULL;

    while (v != NULL){
        ax = v;
        v = v->proximo;
        free(ax);
    }

    free(l);
    *lista = NULL;
}

