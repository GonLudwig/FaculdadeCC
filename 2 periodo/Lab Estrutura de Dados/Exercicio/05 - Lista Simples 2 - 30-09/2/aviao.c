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
    int choice = 1;
    int passP;
    int i=0;
    char passageiros[100];

    viajem->qtdPassageiro = 0;
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
                gets(passageiros);
                puts("Digite o numero do Passaporte");
                scanf("%d", &passP);
                strcpy(viajem->passageiro[i].nome, passageiros);
                viajem->passageiro[i].passaporte = passP;
                viajem->qtdPassageiro++;
                i++;
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


void exibirVoo(INICIOL *lista){
    VOO *viajem = lista->inicio;
    int i;

    while(viajem != NULL) {
        printf("Codigo Identificacao: %d\n", viajem->codIdent);
        printf("Local de origem: %s\n", viajem->origem);
        printf("Local de destino: %s\n", viajem->destino);
        for(i=0;i<viajem->qtdPassageiro;i++){
            printf("Passageiro %d\n", i+1);
            printf("Nome: %s\n", viajem->passageiro[i].nome);
            printf("Passaporte: %d\n", viajem->passageiro[i].passaporte);

        }
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
