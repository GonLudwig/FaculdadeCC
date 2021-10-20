#include"filmes.h"

struct filme {
    int cod;
    char nome[100];
    char diretor[100];
    int duração;
    struct filme *proximo;
};

struct listaFilme {
    int qtd;
    struct filme *inicio;
};

LFILME *criarlista(){
    LFILME *lista = (LFILME*) calloc(1, sizeof(LFILME));

    lista->inicio = NULL;
    lista->qtd = 0;

    return lista;
}

LFILME *criarFilme(char *nFilme, char *nDiretor, int time){
    FILME *film = (FILME*) calloc(1, sizeof(FILME));

    strcpy(film->nome, nFilme);
    strcpy(film->diretor, nDiretor);
    film->duração = time;
    film->proximo = NULL;
    film->cod = 0;

    return film;
}

void adicionarFilme(LFILME *lista, char *nFilme, char *nDiretor, int time){
    FILME *film = criarFilme(nFilme, nDiretor, time);

    film->proximo = lista->inicio; 
    lista->inicio = film;
    lista->qtd++;
    film->cod = lista->qtd;
}

void exibirMaiorDuracao(LFILME *lista){
    FILME *list = lista->inicio;
    int maior = 0;
    int mFilme;

    while (list != NULL){
        if (list->duração > maior){
            maior = list->duração;
            mFilme = list->cod;
        }
        list = list->proximo;
    }
    list = lista->inicio;
    while (list != NULL){
        if(list->cod == mFilme){
            puts("O Filme com maior duração foi:");
            printf("Nome: %s\n", list->nome);
            printf("Diretor: %s\n", list->diretor);
            printf("Duracao: %d\n", list->duração);
        }
    }
}

void liberarLista(LFILME **lista){
    LFILME *l = *lista;

    FILME *percorer = l->inicio;
    FILME *aux = NULL;
    while (percorer != NULL){
        percorer = percorer->proximo;
        aux = percorer;
        free(aux);
    }
    
    free(l);
    *lista = NULL;
}