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
    SITES *lista = (SITES*) calloc(1, sizeof(SITES));

    lista->qtd = quantidade;
    strcpy(lista->url, dominio);
    lista->proximo = NULL;
    lista->anterior = NULL;

    return lista;
}

void adicionarLista(LSITES *lista, char *dominio){
    lista->qtd++;
    SITES *url = criarSites(lista->qtd, dominio);
    url->anterior = lista->fim;
    url->proximo = lista->inicio;

    if(lista->inicio == NULL){
        lista->inicio = url;
    } else {
        lista->fim->proximo = url;
        lista->inicio->anterior = url;
    }

    lista->fim = url;

}

void exibirUrl(LSITES *lista){
    int escolha = 1;
    int escolha2 = 1;
    int i;
    SITES *url = lista->inicio;

    while(url != NULL){
        printf("URL: %s\n", url->url);
        puts("Digite 1 - Proxima");
        puts("Digite 2 - Voltar");
        puts("Digite 0 - Fechar");
        scanf("%d", &escolha);

        switch (escolha){
            case 1:
                url = url->proximo;
                break;
            case 2:
                url = url->anterior;
                break;
            case 0:
                puts("Obrigado pela preferencia!!!");
                url = NULL;
                break;
            default:
                puts("Opcao invalida! Tente novamente!");
                break;
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