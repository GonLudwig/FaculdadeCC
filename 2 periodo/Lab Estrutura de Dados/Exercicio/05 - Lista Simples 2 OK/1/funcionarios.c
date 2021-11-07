#include "funcionarios.h"

LISTAFUNC *criarlista() {
    LISTAFUNC *lista = (LISTAFUNC*) calloc(1, sizeof(LISTAFUNC));

    lista->qtd = 0;

    return lista; 
}

int inserirLista(LISTAFUNC *lista, char *nome, float nov, float dez, float jan ) {
    nov = nov / 100;
    dez = dez / 100;
    jan = jan / 100;
    int totalPontos = nov + dez + jan;
    if (lista == NULL) {
        return 0;
    } else if (lista->qtd == MAX) {
        return 0;
    } else {
        strcpy(lista->colaborador[lista->qtd].nome, nome);
        lista->colaborador[lista->qtd].pontos[0] = nov;
        lista->colaborador[lista->qtd].pontos[1] = dez;
        lista->colaborador[lista->qtd].pontos[2] = jan;
        lista->colaborador[lista->qtd].tPontos = totalPontos;
        lista->qtd++;
        return 1; 
    }
}

void pontosTotalVendedor(LISTAFUNC *lista){
    int i;
    for(i=0;i<MAX;i++){
        printf("O vendedor %s teve %d pontos!\n",lista->colaborador[i].nome ,lista->colaborador[i].tPontos);
    }
}

int pontosTotal(LISTAFUNC *lista, int qtd){
    int tPontos;
    int indice = lista->qtd - 1;

    tPontos = lista->colaborador[indice].tPontos;
    
    return tPontos;
}

void maiorVendedor(LISTAFUNC *lista) {
    int i, indiceMaior;
    int maiorVenda = 0;

    for(i=0;i<MAX;i++){
        if(lista->colaborador[i].tPontos > maiorVenda){
            maiorVenda = lista->colaborador[i].tPontos;
            indiceMaior = i;
        }
    }

    printf("O maior Vendedor foi %s\n", lista->colaborador[indiceMaior].nome);
    printf("Sua pontuacao total foi de %d\n", lista->colaborador[indiceMaior].tPontos);
}

int totalVenda(LISTAFUNC *lista){
    int totalVendas = 0, i;

    for(i=0;i<MAX;i++){
        totalVendas += lista->colaborador[i].tPontos;
    }

    totalVendas = totalVendas * 100;

    return totalVendas;
}

void liberarLista(LISTAFUNC *lista){
    free(lista);
}
