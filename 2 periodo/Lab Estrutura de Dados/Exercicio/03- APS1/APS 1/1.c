/* Crie um TAD para representar uma Pessoa, com nome, data de nascimento e
altura. Crie as funções necessárias para criar pessoa com todos os atributos
inicializados. Crie também uma função para alterar os atributos, outra função para
exibir os dados dessa pessoa e uma função para liberar pessoa.
Estrutura de arquivos:
Pessoa.h
Pessoa.c
main.c*/
#include <stdio.h>
#include "pessoa.h"

int main() {
    char nome[100];
    int dia, mes, ano;
    float altura;

    puts("Qual nome da pessoa:");
    fflush(stdin);
    gets(nome);
    puts("Qual data de nascimento:");
    printf("Dia:");
    scanf("%d", &dia);
    printf("Mes:");
    scanf("%d", &mes);
    printf("Ano:");
    scanf("%d", &ano);
    puts("Qual e a altura:");
    scanf("%f", &altura);

	strPessoa *pessoa = criarPessoa(nome, dia, mes, ano, altura);

    puts("Dados cadastrados");
    exibirPessoa(pessoa);

    puts("Qual sao os novos dados da pessoa:");
    puts("Qual nome da pessoa:");
    fflush(stdin);
    gets(nome);
    puts("Qual data de nascimento:");
    printf("Dia:");
    scanf("%d", &dia);
    printf("Mes:");
    scanf("%d", &mes);
    printf("Ano:");
    scanf("%d", &ano);
    puts("Qual e a altura:");
    scanf("%f", &altura);
    
    alterarPessoa(pessoa, nome, dia, mes, ano, altura);
    
    puts("Dados novos cadastrados");
    exibirPessoa(pessoa);

    liberarPessoa(pessoa);

    return 0;
}
