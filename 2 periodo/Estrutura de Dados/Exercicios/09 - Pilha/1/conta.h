#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct conta CONTA;
typedef struct pilhaConta PCONTA;

PCONTA *pilhaConta();
void adicionarConta(PCONTA *pilhaConta, float valor, char *conta);
void pagarConta(PCONTA *pilhaConta, float salario);
void liberarConta(PCONTA **pilha);