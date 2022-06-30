#include "funcoes.h"

struct Pessoa {
	char cpf[12];
	char nome[100];
	char endereco[250];
	char telefone[11];
	char observacoes[250];
};

struct TrieNode {
    Pessoa *data;
    TrieNode *children[10];
    int no; // 1 no, 2 fim da arvore
};

void removeParteDaString(char *string, int inicio){
	char aux[250] = {};
	int i;
	int e;
	
	e = 0;

	i = inicio;

	while( string[i] != '\n' ){
		aux[e] = string[i];
		e++;
		i++;
	}
	strcpy(string,aux);
}

Pessoa *criarPessoa(char *nome, char *cpf, char *endereco, char *telefone, char *observacoes){
	Pessoa *pes = (Pessoa*) calloc(1, sizeof(Pessoa));

	strcpy(pes->cpf,cpf);
	strcpy(pes->endereco,endereco);
	strcpy(pes->nome,nome);
	strcpy(pes->observacoes,observacoes);
	strcpy(pes->telefone,telefone);
	return pes;
}

TrieNode *criarTrie(int numNo){
    TrieNode *trie = (TrieNode*) calloc(1, sizeof(TrieNode));
	int i;
    trie->no = numNo;
	for (i = 0; i < 10; i++){
		trie->children[i] = NULL;
	}
	trie->data = NULL;

    return trie;
}

void criarArvoreTrie(TrieNode **arvTrie, char *posicao, Pessoa *pessoa){
	int i;
	int intPosicao = 10;
	TrieNode *aux;
    Pessoa *auxP;
    auxP = pessoa;

	if(*arvTrie == NULL){
		*arvTrie = criarTrie(1); 
	}


	aux = *arvTrie;

	for (i = 1; i < 11; i++){

		if(posicao[i] == '0'){
			intPosicao = 0;
		}

		if(posicao[i] == '1'){
			intPosicao = 1;
		}

		if(posicao[i] == '2'){
			intPosicao = 2;
		}

		if(posicao[i] == '3'){
			intPosicao = 3;
		}

		if(posicao[i] == '4'){
			intPosicao = 4;
		}

		if(posicao[i] == '5'){
			intPosicao = 5;
		}

		if(posicao[i] == '6'){
			intPosicao = 6;
		}

		if(posicao[i] == '7'){
			intPosicao = 7;
		}

		if(posicao[i] == '8'){
			intPosicao = 8;
		}

		if(posicao[i] == '9'){
			intPosicao = 9;
		}
		
		if(aux->children[intPosicao] == NULL){
			aux->children[intPosicao] = criarTrie(1);
		}

        if(intPosicao < 10){
		    aux = aux->children[intPosicao];
        }
	}
	
	if(aux->no != 2){
        aux->no = 2;
        aux->data = auxP;
	}
}

void printArvore(TrieNode *arvTrie, char *posicao){
	int intPosicao;
    int i;
    intPosicao = 10;
	TrieNode *aux;
	aux = arvTrie;

	if (arvTrie == NULL){
		puts("Arvore Vazia!");
		return;
	}

	for (i = 1; i < 11; i++){
		if(posicao[i] == '0'){
			intPosicao = 0;
		}

		if(posicao[i] == '1'){
			intPosicao = 1;
		}

		if(posicao[i] == '2'){
			intPosicao = 2;
		}

		if(posicao[i] == '3'){
			intPosicao = 3;
		}

		if(posicao[i] == '4'){
			intPosicao = 4;
		}

		if(posicao[i] == '5'){
			intPosicao = 5;
		}

		if(posicao[i] == '6'){
			intPosicao = 6;
		}

		if(posicao[i] == '7'){
			intPosicao = 7;
		}

		if(posicao[i] == '8'){
			intPosicao = 8;
		}

		if(posicao[i] == '9'){
			intPosicao = 9;
		}

		if(aux->children[intPosicao] == NULL){
			puts("Deu treta!");
		}

        if(intPosicao < 10){
		    aux = aux->children[intPosicao];
        }
	}

	if (aux->no == 2){
		printf("CPF: %s \n", aux->data->cpf);
		printf("Nome: %s \n", aux->data->nome);
        printf("Telefone: %s \n", aux->data->cpf);
        printf("Endereco: %s \n", aux->data->cpf);
        printf("Observacoes: %s\n\n", aux->data->cpf);
	}
	
}

void printArvoreCom(TrieNode *arvTrie){
	int i;
    TrieNode *aux;
    aux = arvTrie;
	if( arvTrie->data != NULL ){
		printf("CPF: %s \n", aux->data->cpf);
		printf("Nome: %s \n", aux->data->nome);
        printf("Telefone: %s \n", aux->data->cpf);
        printf("Endereco: %s \n", aux->data->cpf);
        printf("Observacoes: %s\n\n", aux->data->cpf);
	}

	for (i = 0; i < 10; i++){
		if(aux->children[i] != NULL){
			printArvoreCom(aux->children[i]);
		}
	}
	
	
}