#include"livro.h"

struct livro {
    char nomeLivro[100];
    struct livro *anterior;
};

struct pilhaLivro {
    int qtd;
    struct livro *fim;
};

LIVRO *criarLivro(char *nome){
    LIVRO *livro = (LIVRO*) calloc(1, sizeof(LIVRO));

    strcpy(livro->nomeLivro, nome);
    livro->anterior = NULL;
    
    return livro;
}

PLIVRO *pilhaLivro(){
    PLIVRO *pilha = (PLIVRO*) calloc(1, sizeof(PLIVRO));

    pilha->qtd = 0;
    pilha->fim = NULL;

    return pilha;
}

int adicionarLivro(PLIVRO *pilhaLivro, char *nome){
    LIVRO *livro = criarLivro(nome);

    if(pilhaLivro->fim == NULL){
        pilhaLivro->fim = livro;
    } else {
        livro->anterior = pilhaLivro->fim;
        pilhaLivro->fim = livro;
    }

    pilhaLivro->qtd++;

    return pilhaLivro->qtd;
}

int desepilharLivro(PLIVRO *pilhaLivro){
    LIVRO *aux = pilhaLivro->fim;

    printf("Livro: %s retirado a pilha.\n", aux->nomeLivro);
    pilhaLivro->fim = pilhaLivro->fim->anterior;
    free(aux);
    pilhaLivro->qtd--;

    return pilhaLivro->qtd;
}

void liberarPilha(PLIVRO **pilha){
    PLIVRO *p = *pilha;
    LIVRO *aux = NULL;
    LIVRO *percorer = p->fim;

    while (percorer != NULL){
        aux = percorer;
        percorer = percorer->anterior;
        free(aux);
    }

    free(p);
}