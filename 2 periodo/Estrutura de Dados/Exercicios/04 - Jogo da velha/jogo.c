#include "jogo.h"

VELHA *iniciarJogo(){
	int i;
	VELHA *jogoVelha = (VELHA*) malloc(1 * sizeof(VELHA));

	jogoVelha->jogo[0] = '1';
	jogoVelha->jogo[0] = '2';
	jogoVelha->jogo[0] = '3';
	jogoVelha->jogo[0] = '4';
	jogoVelha->jogo[0] = '5';
	jogoVelha->jogo[0] = '6';
	jogoVelha->jogo[0] = '7';
	jogoVelha->jogo[0] = '8';
	jogoVelha->jogo[0] = '9';

	return jogoVelha;
};

PESSOA *criarPessoa(char p1[]){
	PESSOA *jogador = (PESSOA*) malloc(1 * sizeof(PESSOA));

	strcpy(jogador->nome, p1);
	return jogador;
};

int preencherVelhaJogar1(VELHA *jogoVelha, int numP1){
	if (jogoVelha->jogo[numP1-1] != numP1) {

		return 1;
	} else{
		jogoVelha->jogo[numP1-1] = 'X';
		return 0;
	}
};

int preencherVelhaJogador2(VELHA *jogoVelha, int numP2){
	if (jogoVelha->jogo[numP2-1] != numP2) {

		return 0;
	} else{
		jogoVelha->jogo[numP2-1] = 'O';

		return 1;
	}
};

int vencedor(VELHA *jogoVelha, PESSOA *p1, PESSOA *p2){
	if(jogoVelha->jogo[0] == 'X' && jogoVelha->jogo[1] == 'X' && jogoVelha->jogo[2] == 'X'){
		printf("Jogador %s ganhou!!!\n", p1->nome);
		return 1;
	}

	if(jogoVelha->jogo[0] == 'O' && jogoVelha->jogo[1] == 'O' && jogoVelha->jogo[2] == 'O'){
		printf("Jogador %s ganhou!!!\n", p2->nome);
		return 1;
	}
	
	if(jogoVelha->jogo[3] == 'X' && jogoVelha->jogo[4] == 'X' && jogoVelha->jogo[5] == 'X'){
		printf("Jogador %s ganhou!!!\n", p1->nome);
		return 1;
	}

	if(jogoVelha->jogo[3] == 'O' && jogoVelha->jogo[4] == 'O' && jogoVelha->jogo[5] == 'O') {
		printf("Jogador %s ganhou!!!\n", p2->nome);
		return 1;
	}
	
	if(jogoVelha->jogo[6] == 'X' && jogoVelha->jogo[7] == 'X' && jogoVelha->jogo[8] == 'X'){
		printf("Jogador %s ganhou!!!\n", p1->nome);
		return 1;
	}

	if(jogoVelha->jogo[6] == 'O' && jogoVelha->jogo[7] == 'O' && jogoVelha->jogo[8] == 'O'){
		printf("Jogador %s ganhou!!!\n", p2->nome);
		return 1;
	}
	
	if(jogoVelha->jogo[0] == 'X' && jogoVelha->jogo[3] == 'X' && jogoVelha->jogo[6] == 'X'){
		printf("Jogador %s ganhou!!!\n", p1->nome);
		return 1;
	}
	
	if(jogoVelha->jogo[0] == 'O' && jogoVelha->jogo[3] == 'O' && jogoVelha->jogo[6] == 'O') {
		printf("Jogador %s ganhou!!!\n", p2->nome);
		return 1;
	}
	
	if(jogoVelha->jogo[2] == 'X' && jogoVelha->jogo[5] == 'X' && jogoVelha->jogo[8] == 'X'){
		printf("Jogador %s ganhou!!!\n", p1->nome);
		return 1;
	}

	if(jogoVelha->jogo[2] == 'O' && jogoVelha->jogo[5] == 'O' && jogoVelha->jogo[8] == 'O'){
		printf("Jogador %s ganhou!!!\n", p2->nome);
		return 1;
	}

	if(jogoVelha->jogo[0] == 'X' && jogoVelha->jogo[4] == 'X' && jogoVelha->jogo[8] == 'X'){
		printf("Jogador %s ganhou!!!\n", p1->nome);
		return 1;
	}

	if(jogoVelha->jogo[0] == 'O' && jogoVelha->jogo[4] == 'O' && jogoVelha->jogo[8] == 'O'){
		printf("Jogador %s ganhou!!!\n", p2->nome);
		return 1;
	}

		if(jogoVelha->jogo[2] == 'X' && jogoVelha->jogo[4] == 'X' && jogoVelha->jogo[6] == 'X'){
		printf("Jogador %s ganhou!!!\n", p1->nome);
		return 1;
	}

	if(jogoVelha->jogo[2] == 'O' && jogoVelha->jogo[4] == 'O' && jogoVelha->jogo[6] == 'O'){
		printf("Jogador %s ganhou!!!\n", p2->nome);
		return 1;
	}

	return 0;
};

void exibirVelha(VELHA *jogoVelha, PESSOA *p1, PESSOA *p2){
	printf("%c | %c | %c \n", jogoVelha->jogo[0], jogoVelha->jogo[1], jogoVelha->jogo[2]);
	printf("%c | %c | %c \n", jogoVelha->jogo[3], jogoVelha->jogo[4], jogoVelha->jogo[5]);
	printf("%c | %c | %c \n", jogoVelha->jogo[6], jogoVelha->jogo[7], jogoVelha->jogo[8]);
	printf("Jogador 1 %s  -  Jogador 2 %s", p1->nome, p2->nome);
};

void liberarJogo(VELHA *jogoVelha){
	free(jogoVelha);
};

void liberarPessoa(PESSOA *p){
	free(p);
};