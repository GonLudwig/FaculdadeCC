#include"exercicio.h"

struct exercicio {
    int cod;
    char nome[100];
    int pontuacao;
    struct exercicio *proximo;
};

struct listaExercicio {
    int qtd;
    struct exercicio *inicio;
    struct exercicio *fim;
};

LEXERC *criarlista(){
    LEXERC *lista = (LEXERC*) calloc(1, sizeof(LEXERC));

    lista->inicio = NULL;
    lista->qtd = 0;

    return lista;
}

EXERC *criarExercicio(char *nNome, int pontuacao){
    EXERC *exerc = (EXERC*) calloc(1, sizeof(EXERC));

    strcpy(exerc->nome, nNome);
    exerc->pontuacao = pontuacao;
    exerc->proximo = NULL;
    exerc->cod = 0;

    return exerc;
}

void adicionarExercicio(LEXERC *lista, char *nNome, int pontuacao){
    EXERC *exerc = criarExercicio(nNome, pontuacao);

    if(lista->inicio == NULL){
        lista->inicio = exerc;
        lista->fim = exerc;
    }else{
        lista->fim->proximo = exerc;
        lista->fim = exerc;
    }
    lista->qtd++;
    exerc->cod = lista->qtd;
}

void exibirExercicios(LEXERC *lista){
    EXERC *list = lista->inicio;

    while (list != NULL){
        printf("Exercicio numero %d\n", list->cod);
        printf("Nome: %s\n", list->nome);
        printf("Pontuacao: %d\n", list->pontuacao);
        list = list->proximo;
    }
}

void liberarLista(LEXERC **lista){
    LEXERC *l = *lista;

    EXERC *percorer = l->inicio;
    EXERC *aux = NULL;
    while (percorer != NULL){
        percorer = percorer->proximo;
        aux = percorer;
        free(aux);
    }
    
    free(l);
    *lista = NULL;
}
