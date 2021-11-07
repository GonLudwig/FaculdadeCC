#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct data Data;
typedef struct pessoa strPessoa;

strPessoa *criarPessoa(char *nome, int dia, int mes, int ano, float altura);

int exibirPessoa(strPessoa *pessoa);

int alterarPessoa(strPessoa *pessoa, char *nome, int dia, int mes, int ano, float altura);

int liberarPessoa(strPessoa *pessoa);
