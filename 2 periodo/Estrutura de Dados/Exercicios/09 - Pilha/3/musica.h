#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct musica MUSICA;
typedef struct pilhaMusica PMUSICA;

PMUSICA *pilhaMusica();
void adicionarMusica(PMUSICA *pilhaMusica, int duracao, char *musica);
void tocarMusica(PMUSICA *pilhaMusica, int duraTocar);
void liberarConta(PMUSICA **pilha);