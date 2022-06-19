#include<stdio.h>
#include<string.h>
#include <stdlib.h>
/*
r	Abre o arquivo somente para leitura. O arquivo deve existir. (O r vem do inglÃªs read, ler)
r+	Abre o arquivo para leitura e escrita. O arquivo deve existir.

w	Abre o arquivo somente para escrita no inÃ­cio do arquivo. ApagarÃ¡ o conteÃºdo do arquivo se ele jÃ¡ existir, criarÃ¡ um arquivo novo se nÃ£o existir. (O w vem do inglÃªs write, escrever)
w+	Abre o arquivo para escrita e leitura, apagando o conteÃºdo prÃ©-existente.

a	Abre o arquivo para escrita no final do arquivo. NÃ£o apaga o conteÃºdo prÃ©-existente. (O a vem do inglÃªs append, adicionar, apender)
a+	Abre o arquivo para escrita no final do arquivo e leitura.
*/

typedef struct Pessoa Pessoa;
 
struct Pessoa {
	char nome[100];
	char cpf[100];
	char endereco[100];
	char telefone[100];
	char observacoes[100];
};

typedef struct TrieNode TrieNode;
 
struct TrieNode {
    Pessoa *data;
    TrieNode* children[10];
    int no;
};



void removeParteDaString(char *string, int inicio){
	//recebe um ponteiro de uma string
	//recebe a posiÃ§Ã£o inicial
	//despreza tudo antes do inÃ­cio e para de copiar quando achar o \n
	char aux[250];
	int i;
	int e;//marca a posiÃ§Ã£o a escrever
	
	e = 0;//comeÃ§amos a escrever a partir da posiÃ§Ã£o zero

	i = inicio;

	while( string[i] != '\n' ){
		aux[e] = string[i];//copiando cada caractere
		e++;//onde estamos escrevendo no auxiliar
		i++;//de onde estamos lendo do vetor original
	}
	//voltando com a string correta para o ponteiro recebido
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
	for (i = 0; i < 10; i++)
	{
		trie->children[i] = NULL;
	}
	trie->data = NULL;

    return trie;
}

TrieNode *criarArvoreTrie(TrieNode *arvTrie, char posicao, int no, Pessoa *pessoa){
	int i;
	int intPosicao;
	TrieNode *aux;

	if(posicao == '0'){
		intPosicao = 0;
	}

	if(posicao == '1'){
		intPosicao = 1;
	}

	if(posicao == '2'){
		intPosicao = 2;
	}

	if(posicao == '3'){
		intPosicao = 3;
	}

	if(posicao == '4'){
		intPosicao = 4;
	}

	if(posicao == '5'){
		intPosicao = 5;
	}

	if(posicao == '6'){
		intPosicao = 6;
	}

	if(posicao == '7'){
		intPosicao = 7;
	}

	if(posicao == '8'){
		intPosicao = 8;
	}

	if(posicao == '9'){
		intPosicao = 9;
	}

	if (arvTrie->children[intPosicao] != NULL ){
		return arvTrie->children[intPosicao];
	} else {
		aux = criarTrie(no);
		if(no = 2){
			aux->data = pessoa;
		}
		arvTrie->children[intPosicao] = aux;
		return arvTrie->children[intPosicao];
	}
}

int main(){
	//Criando o ponteiro que carregarÃ¡ o arquivo
	FILE *arquivo;
	char linhaLida[250];
	int numeroLinha;
	int numeroPessoa = 1;
	int i;

	//VariÃ¡veis de exemplo
	char cpf[11];
	char nome[100];
	char endereco[250];
	char telefone[11];
	char observacoes[250];

	//tentando carregar o arquivo
	arquivo =  fopen ("CCMMO.txt", "r");
	
	if (arquivo == NULL) {
		printf ("Houve um erro ao abrir o arquivo.\n");
		return 1;
	}

	TrieNode *ArTrie = criarTrie(0);
	//Esta variÃ¡vel contabiliza o nÃºmero da linha lida - Serve para controlarmos o que estamos lendo
	numeroLinha = 1;
	while( ! feof(arquivo) ) {//percorrendo o arquivo completo
		
		fgets(linhaLida, 250, arquivo);//lendo a linha inteira
		
		//printf("\n\t%d -> %s", numeroLinha,linhaLida);//exibindo o que estamos lendo

		if(numeroLinha == 1){
			//abertura da tag <pessoa>
			//nada a fazer
		}
		else if(numeroLinha == 2){
			//::cpf::
			removeParteDaString(linhaLida,7);//removendo os primeiros caracteres
			strcpy(cpf,linhaLida);//copiando a informaÃ§Ã£o para a variÃ¡vel de destino
			//exibindo a informaÃ§Ã£o correta
		}
		else if(numeroLinha == 3){
			//::nome::
			removeParteDaString(linhaLida,8);//removendo os primeiros caracteres
			strcpy(nome,linhaLida);//copiando a informaÃ§Ã£o para a variÃ¡vel de destino
			//exibindo a informaÃ§Ã£o correta
		}
		else if(numeroLinha == 4){
			//::endereco::
			removeParteDaString(linhaLida,12);//removendo os primeiros caracteres
			strcpy(endereco,linhaLida);//copiando a informaÃ§Ã£o para a variÃ¡vel de destino
			//exibindo a informaÃ§Ã£o correta
		}
		else if(numeroLinha == 5){
			//::telefone::
			removeParteDaString(linhaLida,12);//removendo os primeiros caracteres
			strcpy(telefone,linhaLida);//copiando a informaÃ§Ã£o para a variÃ¡vel de destino
			//exibindo a informaÃ§Ã£o correta
		}
		else if(numeroLinha == 6){
			//::observacoes::
			removeParteDaString(linhaLida,15);//removendo os primeiros caracteres
			strcpy(observacoes,linhaLida);//copiando a informaÃ§Ã£o para a variÃ¡vel de destino
			//exibindo a informaÃ§Ã£o correta
		}
		else if(numeroLinha == 7){
			//fechamento da tag </pessoa>
			//nada a fazer
		}

		if(numeroLinha >= 7){
			int auxP;
			auxP = cpf[0];
			printf("\n%d\n", auxP);
			Pessoa *pes;
			TrieNode *aux;
			pes = criarPessoa(nome, cpf, endereco, telefone, observacoes);

			aux = ArTrie;
			for(i = 0; i < 11;i++){
				if(i = 10){
					aux = criarArvoreTrie(aux, cpf[i], 2, pes);
				}else{
					aux = criarArvoreTrie(aux, cpf[i], 1, pes);
				}
				
			}

			printf("\n\t* %d -> CPF -> %s", numeroPessoa, aux->data->cpf);
			printf("\n\t* %d -> NOME -> %s", numeroPessoa, aux->data->nome);
			printf("\n\t* %d -> ENDERECO -> %s", numeroPessoa, aux->data->endereco);
			printf("\n\t* %d -> TELEFONE -> %s", numeroPessoa, aux->data->telefone);
			printf("\n\t* %d -> OBSERVACOES -> %s", numeroPessoa, aux->data->observacoes);
			numeroLinha = 0;//zerando as linhas novamente
			numeroPessoa++;//indo para a prÃ³xima pessoa
		}
		

		numeroLinha++;
	}

	printf("\n\n\n\n\n");
	
}