#include "pessoa.h"

strPessoa *criarPessoa(char *nome, int dia, int mes, int ano, float altura) {
    strPessoa *pessoa = (strPessoa *) calloc(1, sizeof(strPessoa));
    
    strcpy(pessoa->nome, nome);
    pessoa->nascimento.dia = dia;
    pessoa->nascimento.mes = mes;
    pessoa->nascimento.ano = ano;
    pessoa->altura = altura;
    
    return pessoa;
}


int exibirPessoa(strPessoa *pessoa) {

    printf("Nome: %s \n", pessoa->nome);
    printf("Data Nascimento: %d/%d/%d\n", pessoa->nascimento.dia, pessoa->nascimento.mes, pessoa->nascimento.ano);
    printf("Altura: %.2f\n", pessoa->altura);
	
	return 0;
}

int alterarPessoa(strPessoa *pessoa, char *nome, int dia, int mes, int ano, float altura) {

    strcpy(pessoa->nome, nome);
    pessoa->nascimento.dia = dia;
    pessoa->nascimento.mes = mes;
    pessoa->nascimento.ano = ano;
    pessoa->altura = altura;
    
    return 0;

}


int  liberarPessoa(strPessoa *pessoa) {
    puts("Liberando espaco!");
    free(pessoa);
    
    return 0;
}
