#include"musica.h"

struct musica {
    char nomeMusica[50];
    int duraMusica;
    struct musica *anterior;
};

struct pilhaMusica {
    int qtd;
    int duraTotal;
    struct musica *fim;
};

MUSICA *criarMusica(int duracao, char *conta){
    MUSICA *musica = (MUSICA*) calloc(1, sizeof(MUSICA));

    strcpy(musica->nomeMusica, conta);
    musica->duraMusica = duracao;
    musica->anterior = NULL;
    
    return musica;
}

PMUSICA *pilhaMusica(){
    PMUSICA *pilha = (PMUSICA*) calloc(1, sizeof(PMUSICA));

    pilha->qtd = 0;
    pilha->duraTotal = 0;
    pilha->fim = NULL;

    return pilha;
}

void adicionarMusica(PMUSICA *pilhaMusica, int duracao, char *musica){
    MUSICA *boleto = criarMusica(duracao, musica);

    if(pilhaMusica->fim == NULL){
        pilhaMusica->fim = boleto;
    } else {
        boleto->anterior = pilhaMusica->fim;
        pilhaMusica->fim = boleto;
    }

    pilhaMusica->qtd++;
    pilhaMusica->duraTotal += duracao;

    printf("Duracao total das musicas: %d minutos\n", pilhaMusica->duraTotal);
}

void tocarMusica(PMUSICA *pilhaMusica, int duraTocar){
    MUSICA *percorer = pilhaMusica->fim;
    MUSICA *aux = NULL;

    if(percorer == NULL){
        puts("Não existe musica na pilha!");
    }
    while(percorer != NULL ){
        if(pilhaMusica->fim->duraMusica <= duraTocar){
            aux = percorer;
            printf("Tempo de Execucao: %d\n", duraTocar);
            printf("Musica: %s\n", percorer->nomeMusica);
            printf("Tempo da musica: %d\n", percorer->duraMusica);
            duraTocar -= percorer->duraMusica;
            pilhaMusica->duraTotal -= percorer->duraMusica;
            pilhaMusica->fim = percorer->anterior;
            percorer = percorer->anterior;
            pilhaMusica->qtd--;
            puts("Tocando musica...");
            free(aux);
        } else {
            puts("Ainda existe essa musica na pilha.");
            printf("Musica: %s\n", percorer->nomeMusica);
            printf("Duracao: %d\n", percorer->duraMusica);
            percorer = percorer->anterior;
        }
    }

}

void liberarConta(PMUSICA **pilha){
    PMUSICA *p = *pilha;
    MUSICA *aux = NULL;
    MUSICA *percorer = p->fim;

    while (percorer != NULL){
        aux = percorer;
        percorer = percorer->anterior;
        free(aux);
    }

    free(p);
}