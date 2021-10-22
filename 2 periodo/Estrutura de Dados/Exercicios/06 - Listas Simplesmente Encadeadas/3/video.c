#include"video.h"

struct video {
    int cod;
    char nome[100];
    int visualizacao;
    struct video *proximo;
};

struct listaVideo {
    int qtd;
    struct video *inicio;
    struct video *fim;
};

LVIDEO *criarlista(){
    LVIDEO *lista = (LVIDEO*) calloc(1, sizeof(LVIDEO));

    lista->inicio = NULL;
    lista->fim = NULL;
    lista->qtd = 0;

    return lista;
}

VIDEO *criarVideo(char *nVideo, int vis){
    VIDEO *vid = (VIDEO*) calloc(1, sizeof(VIDEO));

    strcpy(vid->nome, nVideo);
    vid->visualizacao = vis;
    vid->proximo = NULL;
    vid->cod = 0;

    return vid;
}

void adicionarVideo(LVIDEO *lista, char *nVideo, int vis){
    VIDEO *vid = criarExercicio(nVideo, vis);

    if(lista->inicio == NULL){
        lista->inicio = vid;
    }else{
        lista->fim->proximo = vid;
    }
    lista->fim = vid;
    lista->qtd++;
    vid->cod = lista->qtd;
}

void verVideo(LVIDEO *lista){
    VIDEO *list = lista->inicio;

    while (list != NULL){
        if (list->visualizacao > maior){
            maior = list->visualizacao;
            mFilme = list->cod;
        }
        list = list->proximo;
    }

    list = lista->inicio;
    while (list != NULL){
        if(list->cod == mFilme){
            puts("O Filme com maior duracao foi:");
            printf("Nome: %s\n", list->nome);
            printf("Duracao: %d\n", list->visualizacao);
        }
        list = list->proximo;
    }
}

void liberarLista(LVIDEO **lista){
    LVIDEO *l = *lista;

    VIDEO *percorer = l->inicio;
    VIDEO *aux = NULL;
    while (percorer != NULL){
        percorer = percorer->proximo;
        aux = percorer;
        free(aux);
    }
    
    free(l);
    *lista = NULL;
}
