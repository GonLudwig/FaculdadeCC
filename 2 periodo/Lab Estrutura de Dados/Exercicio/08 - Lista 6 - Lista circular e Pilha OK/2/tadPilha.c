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

SITES *criarSites(int quantidade, char *dominio){
    SITES *lista = (SITES*) calloc(1, sizeof(SITES));

    lista->qtd = quantidade;
    strcpy(lista->url, dominio);
    lista->proximo = NULL;
    lista->anterior = NULL;

    return lista;
}

void removerPilha(PSITES *pilha){
    if(pilha != NULL){
        SITES *aux = pilha->fim;
        if(pilha->fim == pilha->inicio){
            pilha->fim = NULL;
            pilha->inicio = NULL;
            free(aux);
        } else {
            pilha->fim = pilha->fim->anterior;
            free(aux);
            pilha->fim->proximo = NULL;
        }
        pilha->qtd--;
    }else {
        puts("Pilha esta Vazia!");
    }
}

void conversorString(char *caracteres){
    int i = 0;
    char aux[200];
    while(caracteres[i] != '\0'){
        aux[i] = tolower(caracteres[i]);
        i++;
    }
    aux[i] = '\0';
    strcpy(caracteres, aux);
    printf("teste conversor: %s\n", caracteres);
}

void adicionarPilha(PSITES *pilha, char *dominio){
    pilha->qtd++;
    conversorString(dominio);
    SITES *url = criarSites(pilha->qtd, dominio);
    url->anterior = pilha->fim;

    if(pilha->inicio == NULL){
        pilha->inicio = url;
    } else {
        pilha->fim->proximo = url;
    }

    pilha->fim = url;
}

void adicionarLista(LSITES *lista, char *dominio){
    lista->qtd++;
    conversorString(dominio);
    printf("teste conversor: %s\n", dominio);
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
    SITES *lURL = lista->inicio;
    SITES *pUrl = pilha->fim;
    conversorString(vereficacao);
    int comparacao = 0;

    if(pUrl == NULL){
        puts("Não existe URL na prilha!");
        adicionarPilha(pilha, vereficacao);
        printf("URL: %s, adicionada a pilha!\n", pilha->fim->url);
    } else {
        printf("URL da pilha: %s\n", pUrl->url);
        comparacao = strcmp(vereficacao, pUrl->url);
        if(comparacao == 0){
            removerPilha(pilha);
            puts("Site no topo da pilha");
            puts("Site removido da pilha");
        } else {
            while (lURL != NULL){
                comparacao = strcmp(vereficacao, lURL->url);
                if(comparacao == 0){
                    adicionarPilha(pilha, vereficacao);
                    puts("Url encontrada na lista e adicionada na pilha!");
                }
                lURL = lURL->proximo;
            }   
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

void liberarPilha(PSITES **lista){
    PSITES *auxLista = *lista;

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