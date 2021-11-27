#include"conta.h"

struct conta {
    char *nomeConta;
    float valorConta;
    struct conta *anterior;
};

struct pilhaConta {
    int qtd;
    float valorTotal;
    struct conta *fim;
};

CONTA *criarConta(float valor, char *conta) {
    CONTA *boleto = (CONTA*) calloc(1, sizeof(CONTA));

    strcpy(boleto->nomeConta, conta);
    boleto->valorConta = valor;
    boleto->anterior = NULL;
    
    return boleto;
}

PCONTA *pilhaConta() {
    PCONTA *pilha = (PCONTA*) calloc(1, sizeof(PCONTA*));

    pilha->qtd = 0;
    pilha->fim = NULL;

    return pilha;
}

void adicionarConta(PCONTA *pilhaConta, float valor, char *conta){
    CONTA *boleto = criarConta(valor, conta);

    if(pilhaConta->fim == NULL){
        pilhaConta->fim = boleto;
    } else {
        boleto->anterior = pilhaConta->fim;
        pilhaConta->fim = boleto;
    }

    pilhaConta->qtd++;
    pilhaConta->valorTotal += valor;
}

int pagarConta(PCONTA *pilhaConta, float salario){
    CONTA *percorer;
    CONTA *aux = NULL;
    percorer = pilhaConta->fim;

    while(pilhaConta->fim->valorConta <= salario){
        salario -= percorer->valorConta;
        pilhaConta->valorTotal -= percorer->valorConta;
        pilhaConta->fim = percorer->anterior;
        percorer = percorer->anterior;
        aux = percorer;
        free(aux);
    }

    return 0;
}

void liberarConta(PCONTA **pilha){
    PCONTA *p = *pilha;
    CONTA *aux = NULL;
    CONTA *percorer = p->fim;

    while (percorer != NULL){
        aux = percorer;
        percorer = percorer->anterior;
        free(aux);
    }
    
}