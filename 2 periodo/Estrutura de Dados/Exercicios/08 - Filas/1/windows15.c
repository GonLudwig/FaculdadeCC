#include "windows15.h"

struct programa {
    int codProg;
    char nomeProg[100];
    struct programa *proximo;
    struct programa *anterior;
};

struct filaProgramas {
    int qtdProg;
    struct programa *inicio;
    struct programa *fim;
};

EXE *criarExe(char *nome, int qtd){
    EXE *executavel = (EXE*) calloc(1, sizeof(EXE));

    executavel->codProg = qtd;
    strcpy(executavel->nomeProg, nome);
    executavel->anterior = NULL;
    executavel->proximo = NULL;

    return executavel;
}

FEXE *criarFilaExe(){
    FEXE *fila = (FEXE*) calloc(1, sizeof(FEXE));

    fila->qtdProg = 0;
    fila->inicio = NULL;
    fila->fim = NULL;

    return fila;
}

void adicionarExe(FEXE *fila, int qtd){
    char nome[100];
    switch (qtd){
        case 1:
            strcpy(nome, 'Chrome');
            break;
        case 2:
            strcpy(nome, 'Firefox');
            break;
        case 3:
            strcpy(nome, 'Word');
            break;
        case 4:
            strcpy(nome, 'Excel');
            break;
        case 5:
            strcpy(nome, 'PowerPoint');
            break;
        case 6:
            strcpy(nome, 'Photoshop');
            break;
        case 7:
            strcpy(nome, 'CorelDraw');
            break;
        case 8:
            strcpy(nome, 'Evernote');
            break;
        case 9:
            strcpy(nome, 'Spotify');
            break;
        case 10:
            strcpy(nome, 'Premiere');
            break;
        case 11:
            strcpy(nome, 'AutoCad');
            break;
        case 12:
            strcpy(nome, 'uTorrent');
            break;
    }
    EXE *executavel = criarExe(nome, qtd);
    executavel->proximo = fila->inicio;

    if(fila->inicio == NULL){
        fila->fim = executavel;
    } else {
        fila->inicio->anterior = executavel;
    }

    fila->inicio = executavel;
    fila->qtdProg++;
}

void executarFila(FEXE *fila){
    EXE *aux = NULL;
    EXE *percorer = fila->fim;

    while(percorer != NULL){
        printf("Codigo: %d\n", percorer->codProg);
        printf("Programa: %s\n", percorer->nomeProg);
        puts("Executando programa ...");
        aux = percorer;
        percorer = percorer->anterior;
        free(aux);
        fila->qtdProg--;
    }

}

void liberaFila(FEXE **fila){
    FEXE *f = *fila;

    EXE *aux = NULL;
    EXE *percorer = f->inicio;

    while(percorer != NULL){
        aux = percorer;
        percorer = percorer->proximo;
        free(aux);
    }

    free(f);
    *fila = NULL;
}