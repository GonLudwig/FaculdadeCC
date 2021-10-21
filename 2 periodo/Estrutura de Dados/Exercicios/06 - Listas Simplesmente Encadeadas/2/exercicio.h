#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct exercicio EXERC;
typedef struct listaExercicio LEXERC;

LEXERC *criarlista();
EXERC *criarExercicio(char *nNome, int pontuacao);
void adicionarExercicio(LEXERC *lista, char *nNome, int pontuacao);
void exibirExercicios(LEXERC *lista);
void liberarLista(LEXERC **lista);