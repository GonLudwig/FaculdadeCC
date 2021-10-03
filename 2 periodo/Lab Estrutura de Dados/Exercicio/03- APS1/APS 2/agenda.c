#include "agenda.h"

strAgenda *criarAgenda() {

    strAgenda *agenda = (strAgenda*) calloc(1, sizeof(strAgenda));

    agenda->quantidade = 0;

    return agenda;
}

void criarPessoaAgenda(strAgenda *agenda, strPessoa pessoa) {

    if (agenda->quantidade == 10) {
        puts("Agenda esta cheia!");
        puts("E imposivel adicionar mais ");

    } else {
        agenda->contato[agenda->quantidade] = pessoa;
        agenda->quantidade++;
    }
}

void exibirAgenda(strAgenda *agenda) {
    int i;

    for(i=0;i<agenda->quantidade;i++) {
        printf("Contato %d da agenda\n", i+1);
        exibirPessoa(&agenda->contato[i]);
    }
}

void liberarAgenda(strAgenda *agenda){
    free(agenda);
}
