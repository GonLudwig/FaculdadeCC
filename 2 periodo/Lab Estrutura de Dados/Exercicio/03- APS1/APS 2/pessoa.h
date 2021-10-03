#ifndef PESSOA_H
#define PESSOA_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct data Data;
typedef struct pessoa strPessoa;

struct data {
    int dia;
    int mes;
    int ano;
};

struct pessoa {
    char nome[100];
    Data nascimento;
    float altura;
};


strPessoa *criarPessoa(char *nome, int dia, int mes, int ano, float altura);

int exibirPessoa(strPessoa *pessoa);

int alterarPessoa(strPessoa *pessoa, char *nome, int dia, int mes, int ano, float altura);

int liberarPessoa(strPessoa *pessoa);

#endif
