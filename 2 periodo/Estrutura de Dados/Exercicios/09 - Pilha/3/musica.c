#include"conta.h"

struct conta {
    char nomeConta[50];
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
    PCONTA *pilha = (PCONTA*) calloc(1, sizeof(PCONTA));

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

    printf("O valor total das contas e: %.2f\n", pilhaConta->valorTotal);
}

void pagarConta(PCONTA *pilhaConta, float salario){
    float vSalario = salario;
    CONTA *percorer = pilhaConta->fim;
    CONTA *aux = NULL;

    while(percorer->anterior != NULL){
        if(pilhaConta->fim->valorConta <= vSalario){
            printf("Valor da carteira: %.2f\n", vSalario);
            printf("Valor da conta: %.2f\n", percorer->valorConta);
            vSalario -= percorer->valorConta;
            pilhaConta->valorTotal -= percorer->valorConta;
            pilhaConta->fim = percorer->anterior;
            percorer = percorer->anterior;
            aux = percorer;
            pilhaConta->qtd--;
            free(aux);
            puts("Pagando conta...");
        }
    }

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

    free(p);
}