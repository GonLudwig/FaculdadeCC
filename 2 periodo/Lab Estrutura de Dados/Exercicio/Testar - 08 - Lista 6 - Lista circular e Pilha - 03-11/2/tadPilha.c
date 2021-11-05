#include "tadPilha.h"

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

struct pilhaSite{
    int qtd;
    struct site *inicio;
    struct site *fim;
};

void conversorString(char *caracteres){
    int i = 0;
    int aux[200];
    while(caracteres[i] != '\0'){
        aux[i] = tolower(caracteres[i]);
        i++;
    }
    aux[i] = '\0';
    strcpy(caracteres, aux);
}

PSITES *criarPilhaSites(){
    PSITES *lista = (PSITES*) calloc(1, sizeof(PSITES));

    lista->inicio = NULL;
    lista->fim = NULL;
    lista->qtd = 0;

    return lista;
}

LSITES *criarListaSites(){
    LSITES *lista = (LSITES*) calloc(1, sizeof(LSITES));

    lista->inicio = NULL;
    lista->fim = NULL;
    lista->qtd = 0;

    return lista;
}

SITES* criarSites(int quantidade, char *dominio){
    SITES *lista = (SITES*) calloc(1, sizeof(SITES));

    lista->qtd = quantidade;
    strcpy(lista->url, dominio);
    lista->proximo = NULL;
    lista->anterior = NULL;

    return lista;
}

void adicionarPilha(PSITES *lista, char *dominio){
    lista->qtd++;
    conversorString(dominio);
    SITES *url = criarSites(lista->qtd, dominio);
    url->proximo = lista->inicio;

    if(lista->inicio == NULL){
        lista->fim = url;
    } else {
        lista->inicio->anterior = url;
    }

    lista->inicio = url;
}

void adicionarLista(LSITES *lista, char *dominio){
    lista->qtd++;
    conversorString(dominio);
    SITES *url = criarSites(lista->qtd, dominio);
    url->anterior = lista->fim;

    if(lista->inicio == NULL){
        lista->inicio = url;
    } else {
        lista->fim->proximo = url;
    }

    lista->fim = url;
}

void verificarPilha(LSITES *lista, PSITES *pilha, char *vereficacao){
    SITES *sUrl = lista->inicio;
    SITES *pUrl = pilha->inicio;
    conversorString(vereficacao);

    if(pUrl == NULL){
        puts("Não existe URL na prilha!");
    } else {
        printf("URL na pilha: %s\n", pUrl->url);
    }

    if(strcmp(vereficacao, pilha->fim->url) == 0){
        pilha->inicio = pilha->inicio->proximo;
        free(pUrl);
        pilha->inicio->anterior = NULL;
        puts("Site no topo da pilha");
    } else {
        while (sUrl != NULL){
            if(strcmp(vereficacao, sUrl->url) == 0){
                adicionarPilha(pilha, vereficacao);
                puts("Url encontrada na lista e adicionada na pilha!");
            }
            sUrl = sUrl->proximo;
        }   
    }
}

void liberarLista(LSITES **lista){
    LSITES *auxLista = *lista;

    SITES *percorer = auxLista->inicio;
    SITES *aux = NULL;
    while (percorer != NULL){
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
        aux = NULL;
    }
    
    free(auxLista);
    *lista = NULL;
}   