#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pessoa {
    char nome[100];
} PESSOA;

typedef struct velha {
    char jogo[9];
} VELHA;

VELHA *iniciarJogo();

PESSOA *criarPessoa(char *p1);

int preencherVelhaJogador1(VELHA *jogoVelha, char numP1);

int preencherVelhaJogador2(VELHA *jogoVelha, char numP2);

int vencedor(VELHA *jogoVelha, PESSOA *p1, PESSOA *p2);

void exibirVelha(VELHA *jogoVelha, PESSOA *p1, PESSOA *p2);

void liberarJogo();

void liberarPessoa();
