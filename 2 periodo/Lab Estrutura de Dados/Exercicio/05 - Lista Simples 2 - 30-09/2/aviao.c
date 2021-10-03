#include "aviao.h"

struct pessoa {
    int passaporte;
    char nome[100];
};

struct aviao {
    struct pessoa passageiro[10];
    int qtdPassageiro;
    int numPoltronas;
    int codIdent;
    char origem[100];
    char destino[100];
    struct aviao *proximo;
};

struct inicioLista {
    int codIdent;
    VOO *inicio;
    VOO *fim;
};

VOO *criarVoo(char *ori, char *dest, int ident) {
    VOO *viajem = (VOO *) calloc(1, sizeof(VOO));

    viajem->numPoltronas = 10;
    viajem->codIdent = ident;
    strcpy(viajem->origem, ori);
    strcpy(viajem->destino, dest);
    viajem->proximo = NULL;

    while (choice != 0) {
        puts("1 - Adicionar Passageiro:");
        puts("0 - Fechar Voo:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                puts("Digite o nome do Passageiro:");
                fflush(stdin);
                gets(passageiro);
                puts("Digite o numero do Passaporte");
                viajem->passageiro[i] = cadastrarPassageiro(passageiro, passP);
            break;
        
        default:
            break;
        }
    }
    

    return viajem;
}

INICIOL *criarLista() {
    INICIOL *lista = (INICIOL *) calloc(1, sizeof(INICIOL));

    lista->inicio = NULL;
    lista->fim = NULL;
    lista->codIdent = 0;

    return lista;
}

void inserirInicioLista(INICIOL *lista, char *ori, char *dest ){
    lista->codIdent++;
    VOO *viajem = criarVoo(ori, dest, lista->codIdent);
    viajem->proximo = lista->inicio;
    lista->inicio = viajem;
}

void inserirFinalLista(INICIOL *lista, char *ori, char *dest) {
    lista->codIdent++;
    VOO *viajem = criarVoo(ori, dest, lista->codIdent);

    if(lista->inicio == NULL) {
        lista->inicio = viajem;
        lista->fim = viajem;
    } else {
        lista->fim->proximo = viajem;
        lista->fim = lista->fim->proximo;
    }
}

void exibirPassageiro(struct pessoa *passageiros, int qtd) {
    int i;
    for(i=0;i< qtd;i++){
        printf("Passageiro %d\n", qtd+1);
        printf("Nome: %s\n", passageiros->nome);
        printf("Passaporte: %d\n", passageiros->passaporte);
    }
}

void exibirVoo(INICIOL *lista){
    VOO *viajem = lista->inicio;

    while(viajem != NULL) {
        printf("Codigo Identificacao: %d\n", viajem->codIdent);
        printf("Local de origem: %s\n", viajem->origem);
        printf("Local de destino: %s\n", viajem->destino);
//        exibirPassageiro(viajem->passageiro, viajem->qtd);
        viajem = viajem->proximo;
    }

}

void liberarLista(INICIOL **lista) {
    INICIOL *l = *lista;

    VOO *v = l->inicio;
    VOO *ax = NULL;

    while (v != NULL){
        ax = v;
        v = v->proximo;
        free(ax);
    }

    free(l);
    *lista = NULL;
}
