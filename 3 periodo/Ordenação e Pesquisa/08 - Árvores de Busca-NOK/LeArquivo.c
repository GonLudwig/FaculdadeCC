#include "funcoes.h"

int main(){
	setlocale(LC_ALL,"Portuguese");
	FILE *arquivo;

	TrieNode *ArTrie;

	Pessoa *pes;

	char linhaLida[250];
	int numeroLinha;
	int numeroPessoa = 1;
	int i;

	//VariÃ¡veis de exemplo
	char cpf[12];
	char nome[100];
	char endereco[250];
	char telefone[11];
	char observacoes[250];

	//tentando carregar o arquivo
	arquivo =  fopen ("ccmmo.txt", "r");
	
	if (arquivo == NULL) {
		printf ("Houve um erro ao abrir o arquivo.\n");
		return 1;
	}
	numeroLinha = 1;
	while( ! feof(arquivo) ) {
		fgets(linhaLida, 250, arquivo);
		
		if(numeroLinha == 1){
		}
		else if(numeroLinha == 2){
			//::cpf::
			removeParteDaString(linhaLida,7);
			strcpy(cpf,linhaLida);
		}
		else if(numeroLinha == 3){
			//::nome::
			removeParteDaString(linhaLida,8);
			strcpy(nome,linhaLida);
		}
		else if(numeroLinha == 4){
			//::endereco::
			removeParteDaString(linhaLida,12);
			strcpy(endereco,linhaLida);
		}
		else if(numeroLinha == 5){
			//::telefone::
			removeParteDaString(linhaLida,12);
			strcpy(telefone,linhaLida);
		}
		else if(numeroLinha == 6){
			//::observacoes::
			removeParteDaString(linhaLida,15);
			strcpy(observacoes,linhaLida);
		}
		else if(numeroLinha == 7){

			pes = criarPessoa(nome, cpf, endereco, telefone, observacoes);
			criarArvoreTrie(&ArTrie, cpf, pes);
		}

		if(numeroLinha >= 7){
			numeroLinha = 0;
			numeroPessoa++;
		}
		

		numeroLinha++;
	}
	fclose(arquivo);

	printArvoreCom(ArTrie); // Imprime a arvore toda
	char lerCpf[12] = "56678239504";
	puts(lerCpf);
	printArvore(ArTrie, lerCpf); // Imprime o Cpf Escolhido
	
}