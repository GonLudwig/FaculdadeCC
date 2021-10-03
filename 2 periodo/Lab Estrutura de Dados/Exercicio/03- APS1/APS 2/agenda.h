#ifndef AGENDA_H
#define AGENDA_H

#include "pessoa.h"

typedef struct agenda strAgenda;

struct agenda {
    strPessoa contato[10];
    int quantidade;
};

strAgenda *criarAgenda();

void criaAgendaPessoa(strAgenda *agenda, strPessoa pessoa);

void exibirAgenda(strAgenda *agenda);

void liberarAgenda(strAgenda *agenda);

#endif
