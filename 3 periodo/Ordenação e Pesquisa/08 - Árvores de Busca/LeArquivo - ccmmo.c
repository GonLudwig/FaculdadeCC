#include<stdio.h>
#include<string.h>
/*
r	Abre o arquivo somente para leitura. O arquivo deve existir. (O r vem do inglês read, ler)
r+	Abre o arquivo para leitura e escrita. O arquivo deve existir.

w	Abre o arquivo somente para escrita no início do arquivo. Apagará o conteúdo do arquivo se ele já existir, criará um arquivo novo se não existir. (O w vem do inglês write, escrever)
w+	Abre o arquivo para escrita e leitura, apagando o conteúdo pré-existente.

a	Abre o arquivo para escrita no final do arquivo. Não apaga o conteúdo pré-existente. (O a vem do inglês append, adicionar, apender)
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
	//recebe a posição inicial
	//despreza tudo antes do início e para de copiar quando achar o \n
	char aux[250]={};
	int i;
	int e;//marca a posição a escrever
	
	e = 0;//começamos a escrever a partir da posição zero

	i = inicio;

	while( string[i] != '\n' ){
		aux[e] = string[i];//copiando cada caractere
		e++;//onde estamos escrevendo no auxiliar
		i++;//de onde estamos lendo do vetor original
	}
	//voltando com a string correta para o ponteiro recebido
	strcpy(string,aux);
}

int main(){
	//Criando o ponteiro que carregará o arquivo
	FILE *arquivo;
	char linhaLida[250];
	int numeroLinha;
	int numeroPessoa = 1;


	//Variáveis de exemplo
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

	//Esta variável contabiliza o número da linha lida - Serve para controlarmos o que estamos lendo
	numeroLinha = 1;
	while( ! feof(arquivo) ) {//percorrendo o arquivo completo
		
		fgets(linhaLida, 250, arquivo);//lendo a linha inteira
		
		printf("\n\t%d -> %s", numeroLinha,linhaLida);//exibindo o que estamos lendo

		if(numeroLinha == 1){
			//abertura da tag <pessoa>
			//nada a fazer
		}
		else if(numeroLinha == 2){
			//::cpf::
			removeParteDaString(linhaLida,7);//removendo os primeiros caracteres
			strcpy(cpf,linhaLida);//copiando a informação para a variável de destino
			printf("\n\t* %d -> CPF -> %s", numeroPessoa, cpf);//exibindo a informação correta
		}
		else if(numeroLinha == 3){
			//::nome::
			removeParteDaString(linhaLida,8);//removendo os primeiros caracteres
			strcpy(nome,linhaLida);//copiando a informação para a variável de destino
			printf("\n\t* %d -> NOME -> %s", numeroPessoa, nome);//exibindo a informação correta
		}
		else if(numeroLinha == 4){
			//::endereco::
			removeParteDaString(linhaLida,12);//removendo os primeiros caracteres
			strcpy(endereco,linhaLida);//copiando a informação para a variável de destino
			printf("\n\t* %d -> ENDERECO -> %s", numeroPessoa, endereco);//exibindo a informação correta
		}
		else if(numeroLinha == 5){
			//::telefone::
			removeParteDaString(linhaLida,12);//removendo os primeiros caracteres
			strcpy(telefone,linhaLida);//copiando a informação para a variável de destino
			printf("\n\t* %d -> TELEFONE -> %s", numeroPessoa, telefone);//exibindo a informação correta
		}
		else if(numeroLinha == 6){
			//::observacoes::
			removeParteDaString(linhaLida,15);//removendo os primeiros caracteres
			strcpy(observacoes,linhaLida);//copiando a informação para a variável de destino
			printf("\n\t* %d -> OBSERVACOES -> %s", numeroPessoa, observacoes);//exibindo a informação correta
		}
		else if(numeroLinha == 7){
			//fechamento da tag </pessoa>
			//nada a fazer
		}
		

		if(numeroLinha >= 7){
			numeroLinha = 0;//zerando as linhas novamente
			numeroPessoa++;//indo para a próxima pessoa
		}
		

		numeroLinha++;
	}

	printf("\n\n\n\n\n");
	
}