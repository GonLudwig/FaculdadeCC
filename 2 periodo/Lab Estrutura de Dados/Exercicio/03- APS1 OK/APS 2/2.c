/*Crie um TAD Agenda com um membro dado do tipo Pessoa e um membro
quantidade do tipo int. A agenda deve armazenar até 10 pessoas e deve
implementar as seguintes operações: criar agenda (aloca espaço na memória para
quantas agendas quiser criar), adicionar pessoa na agenda, mostrar agenda
(imprime os dados de todas as pessoas de uma agenda) e liberar agenda (libera
espaço na memória). Obs: O tipo abstrato de dados Pessoa, criado na questão 1
deve ser um membro da estrutura do tipo abstrato de dados Agenda. A cada
pessoa adicionada na agenda o membro quantidade deve ser incrementado.
Estrutura de arquivos:
Pessoa.h
Pessoa.c
Agenda.h
Agenda.c
main.c*/

#include <stdlib.h>
#include <stdio.h>
#include "agenda.h"

int main() {
    int qtd;
    
    char nome[100];
    int dia = 24;
    int mes = 01;
    int ano = 1994;
    float altura = 1.79;
    
    strcpy(nome, "Glauco");

    strPessoa *pessoa = criarPessoa(nome, dia, mes, ano, altura);

    strAgenda *agenda = criarAgenda();

    criaAgendaPessoa(agenda, *pessoa);

    exibirAgenda(agenda);

    liberarPessoa(pessoa);
    liberarAgenda(agenda);
    
    return 0;
}
