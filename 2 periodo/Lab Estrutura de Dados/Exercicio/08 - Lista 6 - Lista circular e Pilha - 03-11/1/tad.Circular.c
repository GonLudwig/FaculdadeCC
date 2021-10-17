#include "tadCircular.h"

struct site{
    int qtd;
    char url[200];
    struct site *proximo;
    struct site *anterior;
};

struct listaSite{
    int qtd;
    struct site *inicio;
    struct site *fim;
};


LSITES *criarListaSites(){
    LSITES *lista = (LSITES*) calloc(1, sizeof(LSITES));

    lista->inicio = NULL;
    lista->fim = NULL;
    lista->qtd = 0;

    return lista;
}

SITES* criarSites(int quantidade, char *dominio){
    SITES *site = (SITES*) calloc(1, sizeof(SITES));

    lista->proximo = NULL;
    lista->anterior = NULL;
    lista->qtd = quantidade;
    strcpy(lista->url, dominio);

    return site;
}