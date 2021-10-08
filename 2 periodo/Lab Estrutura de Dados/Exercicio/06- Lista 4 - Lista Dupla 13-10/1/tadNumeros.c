#include "TadListEnc.h"

struct numero {
    int num;
    struct numero *proximo;
    struct numero *anterior;
};

struct listaNumero {
    struct numero *inicio;
    struct numero *fim;
    int tamanho;
};

ListaNum *criarLista() {
    ListaNum *lista = (ListaNum*) calloc(1, sizeof(ListaNum));

    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tamanho = 0;

    return lista;
}

NUM *criarNum(int num) {
    NUM *numero = (NUM*) calloc(1, sizeof(NUM));
    
    numero->num = num;
    numero->proximo = NULL;
    numero->anterior = NULL;

    return numero;
}

void adicionarInicioLista(ListaNum *lista, int num){
    NUM *numero = criarNum(num);
    numero->proximo = lista->inicio;

    if (lista->tamanho == 0){
        lista->fim = numero;
    } else{
        lista->inicio->anterior = numero;   
    }
    lista->inicio = numero;
    lista->tamanho++;
}

void adicionarFimLista(ListaNum *lista, int num){
    NUM *numero = criarNum(num);
    numero->proximo = lista->fim;

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

