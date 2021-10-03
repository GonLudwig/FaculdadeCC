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

PESSOA *criarPessoa(char p1[]);

int preencherVelhaJogar1(VELHA *jogoVelha, int numP1);
int preencherVelhaJogador2(VELHA *jogoVelha, int numP2);

int vencedor(VELHA *jogoVelha, PESSOA *p1, PESSOA *p2);

void exibirVelha(VELHA *jogoVelha, PESSOA *p1, PESSOA *p2);

void liberarJogo(VELHA *jogoVelha);

void liberarPessoa(PESSOA *p);