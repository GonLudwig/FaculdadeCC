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

TrieNode *criarTrie(){
    TrieNode *trie = (TrieNode*) calloc(1, sizeof(TrieNode));

    trie->no = 1;

    return trie;
}

TrieNode *criarArvoreTrie(TrieNode *arvTrie, int posicao){


    TrieNode *trie = (TrieNode*) calloc(1, sizeof(TrieNode));
    trie->no = 0;

	arvTrie->children[posicao] = trie;

    return trie;
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

	TrieNode *ArTrie = criarTrie();
	//Esta variÃ¡vel contabiliza o nÃºmero da linha lida - Serve para controlarmos o que estamos lendo
	numeroLinha = 1;
	while( ! feof(arquivo) ) {//percorrendo o arquivo completo
		
		fgets(linhaLida, 250, arquivo);//lendo a linha inteira
		
//		printf("\n\t%d -> %s", numeroLinha,linhaLida);//exibindo o que estamos lendo

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
			
			TrieNode *aux = criarArvoreTrie(ArTrie, auxP);
			for(i = 1; i<12;i++){
				auxP = cpf[i];
				printf("%d , %d\n", auxP, i);
			}

			printf("\n\t* %d -> CPF -> %s", numeroPessoa, cpf);
			printf("\n\t* %d -> NOME -> %s", numeroPessoa, nome);
			printf("\n\t* %d -> ENDERECO -> %s", numeroPessoa, endereco);
			printf("\n\t* %d -> TELEFONE -> %s", numeroPessoa, telefone);
			printf("\n\t* %d -> OBSERVACOES -> %s", numeroPessoa, observacoes);
			numeroLinha = 0;//zerando as linhas novamente
			numeroPessoa++;//indo para a prÃ³xima pessoa
		}
		

		numeroLinha++;
	}

	printf("\n\n\n\n\n");
	
}